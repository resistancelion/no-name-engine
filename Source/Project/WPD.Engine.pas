unit WPD.Engine;

interface

uses Windows, Messages, SysUtils, Classes, Variants, rtti, WideStrUtils, WPD.Zend.Types, WPD.PHP;

type
  {$ifdef fpc}
  ZendFunctionEntries = specialize TArray<zend_function_entry>;
  {$else}
  ZendFunctionEntries = TArray<zend_function_entry>;
  {$endif}
  TWPDEngine = class
  public
    ISEngineLoad: Boolean;
    DebugMode, ActiveMode: Boolean;
    EDTRc: TRttiContext;
    Terminated: Boolean;
    PreDelimiter: string;
    SlitDelimiter: Boolean;
    TSRMLS_D: Pointer;
    wpd_sapi_module: sapi_module_struct;
    PHPINIPath: AnsiString;
    ZendAPIVersion: Integer;
    FLibraryModule: _zend_module_entry;
    ZendFunction: ZendFunctionEntries;
    RegNumFunc: Cardinal;
    function ZEND_MODULE_BUILD_ID: AnsiString;
    destructor Destroy; override;
    procedure StartupEngine; virtual;

    function addFunc(Name: PAnsiChar; CallBackFunc: Pointer;
    num: integer = 0): bool;
    procedure SetZendError(p: Pointer);
    function RunCode(ACode: AnsiString): Integer; overload;
    procedure ShutdownRequest;

    constructor Create(phpLibraryPath: String; IsDebugMode: Boolean = false; ZendApiVer: Integer = 20160303);
  end;

implementation

constructor TWPDEngine.Create(phpLibraryPath: String; IsDebugMode: Boolean = false; ZendApiVer: Integer = 20160303);
begin
  try
    PHPINIPath := 'php.ini';
    ZendAPIVersion := ZendApiVer;

    WPD.PHP.Load(phpLibraryPath);

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

  MessageBox(0, PChar(String(_message)), '[WPD Engine]', 0);
end;

function TWPDEngine.ZEND_MODULE_BUILD_ID: AnsiString;
begin
  Result := 'API' + IntToStr(Self.ZendAPIVersion) + 'ZEND_BUILD_TS' +
    'ZEND_BUILD_DEBUG' + 'ZEND_BUILD_SYSTEM';
end;

procedure TWPDEngine.SetZendError(p: Pointer);
begin
  ppointer(GetProcAddress(phpHandle, 'zend_error_cb'))^ := p;
end;

procedure TWPDEngine.StartupEngine;
begin

  try
    ISEngineLoad := false;

    if phpHandle <> 0 then
    begin
      FLibraryModule.size := SizeOf(_zend_module_entry);
      FLibraryModule.zend_api := Self.ZendAPIVersion;
      FLibraryModule.zts := 1;
      FLibraryModule.Name := 'WPD';

      FLibraryModule.build_id := StrNew(PAnsiChar(ZEND_MODULE_BUILD_ID));

      FLibraryModule.zend_debug := 0;

      FLibraryModule._type := MODULE_PERSISTENT;
      FLibraryModule.Handle := nil;
      FLibraryModule.module_number := 0;

      wpd_sapi_module.Name := 'wpd';
      wpd_sapi_module.pretty_name := 'WPD Engine';

      if FileExists(PHPINIPath) then
        wpd_sapi_module.php_ini_path_override := PAnsiChar(PHPINIPath)
      else
        wpd_sapi_module.php_ini_path_override := nil;

      wpd_sapi_module.log_message := @LogMessageError;
      wpd_sapi_module.sapi_error := @zend_error;

      tsrm_startup(128, 1, 0, nil);

      sapi_startup(@wpd_sapi_module);

      FLibraryModule.functions := @ZendFunction[0];
      php_module_startup(@wpd_sapi_module, @FLibraryModule, 1);

      TSRMLS_D := tsrm_get_ls_cache;

      PHPInitSetValue('register_argc_argv', '0', ZEND_INI_SYSTEM,
        ZEND_INI_STAGE_ACTIVATE);
      PHPInitSetValue('html_errors', '1', ZEND_INI_SYSTEM,
        ZEND_INI_STAGE_ACTIVATE);
      PHPInitSetValue('implicit_flush', '1', ZEND_INI_SYSTEM,
        ZEND_INI_STAGE_ACTIVATE);
      PHPInitSetValue('max_input_time', '0', ZEND_INI_SYSTEM,
        ZEND_INI_STAGE_ACTIVATE);

     Self.SetZendError(@zend_error_cb2);
      ISEngineLoad := True;
    end;

  except
    on E: Exception do
    begin
    end;
  end;
end;

function TWPDEngine.addFunc(Name: PAnsiChar; CallBackFunc: Pointer; num: integer = 0): bool;
var ar: {$ifdef fpc} specialize {$endif} TArray< zend_internal_arg_info >;
begin
  Result := False;
  inc(RegNumFunc);
  SetLength(ZendFunction, RegNumFunc + 1);
  ZendFunction[RegNumFunc - 1].fname := Name;
  ZendFunction[RegNumFunc - 1].num_args := 0;
  if num > 0 then
  begin
    ZendFunction[RegNumFunc - 1].num_args := num;
    SetLength(ar,1);
    ar[0].name := 'n';
    ar[0].type_hint := IS_LONG;
    ar[0].pass_by_reference := 1;
    ZendFunction[RegNumFunc - 1].arg_info := @ar[0];
  end;

  ZendFunction[RegNumFunc - 1].handler := CallBackFunc;
end;

end.
