unit WPDFunction;

interface

uses Windows, Messages, SysUtils, Classes, vcl.Dialogs, vcl.Graphics,
  vcl.Forms, Variants, rtti, WideStrUtils, hzend_types, LoadPhp
  {,ZendTypes, PHPTypes, zendAPI,DelphiPhp5}
    ;

type

  TWPDEngine = class
  public
    ISEngineLoad: Boolean;
    DebugMode, ActiveMode: Boolean;
    EDTRc: TRttiContext;
    Terminated: Boolean;
    PreDelimiter: string;
    SlitDelimiter: Boolean;
    TSRMLS_D: Pointer;
    delphi_sapi_module: sapi_module_struct;
    PHPINIPath: AnsiString;
    FLibraryModule: _zend_module_entry;
    ZendFunction: TArray<zend_function_entry>;
    RegNumFunc: Cardinal;

    destructor Destroy; override;
    procedure StartupEngine; virtual;

    procedure addFunc(Name: PAnsiChar; CallBackFunc: Pointer);
    // function addFunc(Name: PAnsiChar; CallBackFunc: Pointer; Num: Integer)
    // : zend_internal_arg_info_array;
    // procedure ArgRefFalse(i: Integer; arg_info: zend_internal_arg_info_array);
    // procedure ArgRefTrue(i: Integer; arg_info: zend_internal_arg_info_array);

    procedure SetZendError(p: Pointer);
    function RunCode(ACode: AnsiString): Integer; overload;
    procedure ShutdownRequest;

    constructor Create(IsDebugMode: Boolean = false);
  end;

  {
    type
    TPHPRequestType = (prtGet, prtPost);

    type
    TWPDEngine = class(TComponent, IUnknown)
    private
    protected
    public
    delphi_sapi_module: sapi_module_struct;
    PHPINIPath: AnsiString;
    TSRMLS_D: pppointer;
    FLibraryModule: _zend_module_entry;
    ZendFunction: TArray<zend_function_entry>;
    RegNumFunc: Cardinal;
    constructor Create(AOwner: TComponent); override;
    destructor Destroy; override;
    procedure StartupEngine; virtual;
    procedure addFunc(Name: PAnsiChar; CallBackFunc: pointer);
    published
    end;

    TpsvCustomPHP = class(TComponent)
    private
    FBuffer: TMemoryStream;
    FVirtualStream: TMemoryStream;
    FPostStream: TMemoryStream;
    FRequestType: TPHPRequestType;
    protected
    ActiveMode: boolean;
    public
    TSRMLS_D: pointer;
    FTerminated: boolean;
    constructor Create(AOwner: TComponent); override;
    destructor Destroy; override;
    function Execute: AnsiString; overload;
    function RunCode(ACode: AnsiString): AnsiString; overload;
    procedure StartupRequest;
    procedure ShutdownRequest;
    property RequestType: TPHPRequestType read FRequestType write FRequestType
    default prtGet;
    end;
  }

  // var
  // PEngineWPD: TpsvCustomPHP;
var
  PEngineLik: TWPDEngine;

  // function TEngineWPD(): TpsvCustomPHP;

implementation

constructor TWPDEngine.Create;
var
  eve: TMethod;
  T: THandle;
begin
  try
    DebugMode := IsDebugMode;

    ISEngineLoad := false;

    PreDelimiter := #10#13 + ' > ';
    SlitDelimiter := True;
    ActiveMode := false;
    Terminated := false;

    // FunctionPHPClasses.CountBase := 0;
    /// / FunctionPHPClasses.Count := 0;
    // SetLength(FunctionPHPClasses.Base, FunctionPHPClasses.Count);

    // ћы не можем позволить создать на старте программы все методы - всех классов.

  except
    on E: Exception do
    begin
    end;
  end;
end;

procedure TWPDEngine.ShutdownRequest;
begin
  if not ActiveMode then
    Exit;
  try
    if not Terminated then
    begin
      php_request_shutdown(nil);
    end;
  finally
    ActiveMode := false;
  end;
end;

function TWPDEngine.RunCode(ACode: AnsiString): Integer;
begin
  if ACode = '' then
    Exit(-1);

  try
    if not ISEngineLoad then
      StartupEngine;
    TSRMLS_D := tsrm_get_ls_cache;

    if not ActiveMode then
    begin
      try
        PHPInitSetValue('max_execution_time', '0', ZEND_INI_SYSTEM,
          ZEND_INI_STAGE_RUNTIME);

        php_request_startup;

        ActiveMode := True;
      except
        on E: Exception do
        begin
          ActiveMode := false;
        end;
      end;
    end;

    Result := zend_eval_string_ex(PAnsiChar(ACode), nil,
      'Command line run code', 1);

  except
    on E: Exception do
    begin
      Result := -1;
    end;
  end;
end;

destructor TWPDEngine.Destroy;
begin
  ActiveMode := false;
  UnloadZEND;
  inherited;
end;

function LogMessageError(_message: PAnsiChar): Integer; cdecl;
begin
  Result := 0;

  MessageBox(0, PWideChar(WideString(_message)), '[WPD Engine]', 0);
end;

function ZEND_MODULE_BUILD_ID: AnsiString;
begin
  Result := 'API' + IntToStr(ZEND_MODULE_API_NO) + 'ZEND_BUILD_TS' +
    'ZEND_BUILD_DEBUG' + 'ZEND_BUILD_SYSTEM';
end;

procedure TWPDEngine.SetZendError(p: Pointer);
begin
  ppointer(GetProcAddress(PHP5dll, 'zend_error_cb'))^ := p;
end;

procedure TWPDEngine.StartupEngine;
var
  tmp: Pointer;
begin
  try
    ISEngineLoad := false;

    if PHP5dll <> 0 then
    begin
      FLibraryModule.size := SizeOf(_zend_module_entry);
      FLibraryModule.zend_api := ZEND_MODULE_API_NO;
      FLibraryModule.zts := 1;
      FLibraryModule.Name := 'WPD';

      FLibraryModule.build_id := StrNew(PAnsiChar(ZEND_MODULE_BUILD_ID));

      FLibraryModule.zend_debug := 0;

      FLibraryModule._type := MODULE_PERSISTENT;
      FLibraryModule.Handle := nil;
      FLibraryModule.module_number := 0;

      delphi_sapi_module.Name := 'embed';
      delphi_sapi_module.pretty_name := 'WPD Engine';

      if FileExists(PHPINIPath) then
        delphi_sapi_module.php_ini_path_override := PAnsiChar(PHPINIPath)
      else
        delphi_sapi_module.php_ini_path_override := nil;

      delphi_sapi_module.log_message := @LogMessageError;
      delphi_sapi_module.sapi_error := @zend_error;

      tsrm_startup(1, 1, 0, nil);

      sapi_startup(@delphi_sapi_module);

      FLibraryModule.functions := @ZendFunction[0];
      php_module_startup(@delphi_sapi_module, @FLibraryModule, 1);

      TSRMLS_D := tsrm_get_ls_cache;

      PHPInitSetValue('register_argc_argv', '0', ZEND_INI_SYSTEM,
        ZEND_INI_STAGE_ACTIVATE);
      PHPInitSetValue('html_errors', '1', ZEND_INI_SYSTEM,
        ZEND_INI_STAGE_ACTIVATE);
      PHPInitSetValue('implicit_flush', '1', ZEND_INI_SYSTEM,
        ZEND_INI_STAGE_ACTIVATE);
      PHPInitSetValue('max_input_time', '0', ZEND_INI_SYSTEM,
        ZEND_INI_STAGE_ACTIVATE);

      tmp := GetProcAddress(PHP5dll, 'zend_error_cb');

      asm
        mov edx, dword ptr [tmp]
        mov dword ptr [edx], offset zend_error_cb2
      end;

      ISEngineLoad := True;
    end;

  except
    on E: Exception do
    begin
    end;
  end;
end;

procedure TWPDEngine.addFunc(Name: PAnsiChar; CallBackFunc: Pointer);
begin
  inc(RegNumFunc);
  SetLength(ZendFunction, RegNumFunc + 1);
  ZendFunction[RegNumFunc - 1].fname := Name;
  ZendFunction[RegNumFunc - 1].num_args := 0;
  ZendFunction[RegNumFunc - 1].handler := CallBackFunc;
end;

{
  function TEngineWPD(): TpsvCustomPHP;
  begin
  if PEngineWPD = nil then
  PEngineWPD := TpsvCustomPHP.Create(nil);
  Result := PEngineWPD;
  end;

  function php_delphi_send_header(p1, TSRMLS_DC: pointer): integer; cdecl;
  begin
  Result := SAPI_HEADER_SENT_SUCCESSFULLY;
  end;

  function delphi_stream_reader(handle: pointer; buf: PAnsiChar; len: size_t)
  : size_t; cdecl;
  var
  f: TMemoryStream;
  begin
  // ShowMessage('delphi_stream_reader');
  Result := 0;
  f := TMemoryStream(handle);
  if f <> nil then
  try
  Result := f.Read(buf^, len);
  except
  Result := 0;
  end;
  end;

  function delphi_stream_fsizer(handle: pointer): size_t; cdecl;
  var
  f: TMemoryStream;
  begin
  Result := 0;

  f := TMemoryStream(handle);
  if f <> nil then
  try
  Result := f.Size;
  except
  Result := 0;
  end
  end;

  procedure delphi_stream_closer(handle: pointer); cdecl;
  var
  f: TMemoryStream;
  begin
  // ShowMessage('delphi_stream_closer');

  f := TMemoryStream(handle);
  if f <> nil then
  try
  f.Clear;
  except
  end;
  end;

  constructor TpsvCustomPHP.Create(AOwner: TComponent);
  begin
  inherited;
  FBuffer := TMemoryStream.Create;
  FVirtualStream := TMemoryStream.Create;
  ActiveMode := false;
  FTerminated := false;
  PEngineWPD := nil;
  end;

  destructor TpsvCustomPHP.Destroy;
  begin
  FBuffer.Destroy;
  if FVirtualStream <> nil then
  FreeAndNil(FVirtualStream);
  ActiveMode := false;
  FRequestType := prtGet;
  inherited;
  end;

  procedure TpsvCustomPHP.StartupRequest;
  var
  gl: psapi_globals_struct;
  TimeStr: string;
  begin
  if ActiveMode then
  Exit;

  TSRMLS_D := ts_resource_ex(0, nil);

  try
  if Assigned(FPostStream) then
  FPostStream.Clear
  else
  FPostStream := TMemoryStream.Create;

  FPostStream.Position := 0;

  PHPInitSetValue('max_execution_time', '0', ZEND_INI_SYSTEM,
  ZEND_INI_STAGE_RUNTIME);

  php_request_startup;

  ActiveMode := true;
  except
  ActiveMode := false;
  end;
  end;

  procedure TpsvCustomPHP.ShutdownRequest;
  var
  gl: psapi_globals_struct;
  begin
  if not ActiveMode then
  Exit;
  try
  if not FTerminated then
  begin
  try
  php_request_shutdown(nil);
  except
  end;
  end;
  finally
  ActiveMode := false;
  end;
  end;

  function TpsvCustomPHP.Execute: AnsiString;
  var
  file_handle: _zend_file_handle;
  ZendStream: _zend_stream;
  gl: psapi_globals_struct;
  begin
  Result := '';
  try
  FBuffer.Clear;
  TSRMLS_D := ts_resource_ex(0, nil);
  StartupRequest;

  ZeroMemory(@file_handle, sizeof(zend_file_handle));
  ZeroMemory(@ZendStream, sizeof(ZendStream));

  ZendStream.reader := delphi_stream_reader;
  ZendStream.closer := delphi_stream_closer;
  ZendStream.fsizer := delphi_stream_fsizer;
  ZendStream.handle := FVirtualStream;

  file_handle._type := ZEND_HANDLE_STREAM;
  file_handle.opened_path := nil;
  file_handle.FileName := '-';
  file_handle.free_filename := 0;
  file_handle.handle.Stream := ZendStream;

  try
  php_execute_script(@file_handle);
  except
  FBuffer.Clear;
  end;
  finally

  end;
  end;

  function TpsvCustomPHP.RunCode(ACode: AnsiString): AnsiString;
  begin
  if ACode = '' then
  begin
  Exit;
  Result := '';
  end;

  FBuffer.Clear;

  try
  FVirtualStream.Clear;
  FVirtualStream.Write(ACode[1], length(ACode));
  FVirtualStream.Position := 0;
  Result := Execute
  except
  Result := '';
  end;
  end;

  procedure TWPDEngine.addFunc(Name: PAnsiChar; CallBackFunc: pointer);
  begin
  inc(RegNumFunc);
  SetLength(ZendFunction, RegNumFunc + 1);
  ZendFunction[RegNumFunc - 1].fname := Name;
  ZendFunction[RegNumFunc - 1].num_args := 0;
  ZendFunction[RegNumFunc - 1].handler := CallBackFunc;
  end;

  constructor TWPDEngine.Create(AOwner: TComponent);
  begin

  end;

  destructor TWPDEngine.Destroy;
  begin
  UnloadZEND;
  inherited;
  end;

  function LogMessageError(_message: PAnsiChar): integer; cdecl;
  begin
  Result := 0;
  Application.MessageBox(PWideChar(WideString(_message)), '[WPD Engine]',
  MB_ICONERROR);
  end;

  procedure register_server_variables(val: pzval; p: pointer); cdecl;
  begin
  // php_register_variable('SERVER_NAME', 'WPDelphi', val, p);
  // php_register_variable('SERVER_SOFTWARE', 'WPDelphi', val, p);
  end;

  function php_delphi_ub_write(str: pointer; len: uint; p: pointer)
  : integer; cdecl;
  var
  php: TpsvCustomPHP;
  gl: psapi_globals_struct;
  begin
  Result := 0;
  gl := GetSAPIGlobals;
  if Assigned(gl) then
  begin
  php := TpsvCustomPHP(gl^.server_context);
  if Assigned(php) then
  begin
  try
  Result := php.FBuffer.Write(str^, len);
  except
  end;
  end;
  end;
  end;

  function ZEND_MODULE_BUILD_ID: AnsiString;
  begin
  Result := 'API' + IntToStr(ZEND_MODULE_API_NO) + 'ZEND_BUILD_TS' +
  'ZEND_BUILD_DEBUG' + 'ZEND_BUILD_SYSTEM';
  end;

  procedure TWPDEngine.StartupEngine;
  begin
  if PHP5dll <> 0 then
  begin
  FLibraryModule.Size := sizeof(_zend_module_entry);
  FLibraryModule.zend_api := ZEND_MODULE_API_NO;
  FLibraryModule.zts := 1;
  FLibraryModule.Name := 'WPD';

  FLibraryModule.build_id := StrNew(PAnsiChar(ZEND_MODULE_BUILD_ID));

  FLibraryModule.zend_debug := 0;

  FLibraryModule._type := MODULE_PERSISTENT;
  FLibraryModule.handle := nil;
  FLibraryModule.module_number := 0;

  delphi_sapi_module.Name := 'embed';
  delphi_sapi_module.pretty_name := 'WPD Engine';

  if (PHPINIPath <> '') and FileExists(PHPINIPath) then
  delphi_sapi_module.php_ini_path_override := PAnsiChar(PHPINIPath)
  else
  delphi_sapi_module.php_ini_path_override := nil;

  delphi_sapi_module.register_server_variables := @register_server_variables;
  delphi_sapi_module.log_message := @LogMessageError;
  delphi_sapi_module.sapi_error := @zend_error;
  delphi_sapi_module.send_header := @php_delphi_send_header;

  delphi_sapi_module.ub_write := @php_delphi_ub_write;

  tsrm_startup(1, 1, 0, nil);

  sapi_startup(@delphi_sapi_module);

  FLibraryModule.functions := @ZendFunction[0];
  php_module_startup(@delphi_sapi_module, @FLibraryModule, 1);

  TSRMLS_D := ts_resource_ex(0, nil);

  PHPInitSetValue('register_argc_argv', '0', ZEND_INI_SYSTEM,
  ZEND_INI_STAGE_ACTIVATE);
  PHPInitSetValue('html_errors', '1', ZEND_INI_SYSTEM,
  ZEND_INI_STAGE_ACTIVATE);
  PHPInitSetValue('implicit_flush', '1', ZEND_INI_SYSTEM,
  ZEND_INI_STAGE_ACTIVATE);
  PHPInitSetValue('max_input_time', '0', ZEND_INI_SYSTEM,
  ZEND_INI_STAGE_ACTIVATE);
  end;
  end; }

initialization

PEngineLik := TWPDEngine.Create(True);

end.
