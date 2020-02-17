program wpd;

uses
  System.StartUpCopy,
  Winapi.Windows,
  System.TypInfo,
  Winapi.Messages,
  System.SysUtils,
  System.Variants,
  System.Generics.Collections,
  System.Classes,
  FMX.Graphics,
  FMX.Controls,
  FMX.Forms,
  FMX.Dialogs,
  FMX.StdCtrls,
  FMX.Types,
  FMX.ScrollBox,
  FMX.ExtCtrls,
  FMX.ActnList,
  FMX.Edit,
  FMX.Memo,
  FMX.Menus,
  WideStrUtils,
  System.Rtti,
  WPD.Zend.Types,
  WPD.PHP,
  WPD.RTTI.Procedures,
  WPD.Engine,
  WPD.Vis,
  System.Actions,
  FMX.StdActns;

{$R *.res}

procedure registerArr(Classes: array of TPersistentClass);
begin
  RegisterClasses(Classes);
end;

procedure TestMessage(execute_data: Pzend_execute_data;
  return_value: Pzval); cdecl;
var
  Text: Pzval;

begin
  if zend_parse_method_parameters(1, nil, 'z', @Text) = 0 then
  begin
    ShowMessage(ZvalGetString(Text));
  end;
end;
procedure t_(execute_data: Pzend_execute_data;
  return_value: Pzval); cdecl;
  var s: UTF8String;
begin
    s := '🐆🐆🐆 .-=WPD=-. 🐆🐆🐆';
    ZvalSetStr(return_value, s);
end;
procedure t_set(execute_data: Pzend_execute_data;
  return_value: Pzval); cdecl;
  var Text: pzval;
    p: pzval;
begin
  ShowMessage( 'Function count:'+ inttostr(EG.function_table.nNumOfElements) );
end;

type
  PTEventBase = ^TEventBase;

  TEventBase = packed record
    _FindControlVCL: function(obj: PAnsiChar): longint; cdecl;
    _TestVariant: function(var ZResult: Pzval; ZOwner, ZOwnerSelf: integer;
      Name: PAnsiChar; arr: Pzval): integer; cdecl;
    _RttiMessage: procedure(_var: PAnsiChar); cdecl;
  end;

var
  RttiEventBase: PTEventBase;
  PengineLik: WPD.Engine.TWPDEngine;

procedure RttiMessage(_var: PAnsiChar); cdecl;
begin
  ShowMessage(String(_var));
end;

begin
  try
    registerArr([
    FMX.Forms.TApplication,
    TPersistent,
    TComponent,
    TFmxObject,

    TGradientPoint,
    TGradientPoints,
    TGradient,
    TBrushResource,
    TBrushBitmap,
    TBrush,
    TStrokeBrush,
    TFont,
    TBitmap,
    TPathData,
    TCanvasSaveState,
    TCanvas,
    TAbstractPrinter,
    TPrinterCanvas,
    TBrushObject,
    TPathObject,
    TBitmapObject,
    TColorObject,
    TFontColorForState,
    TTextSettings,

    TMainMenu, TPopupMenu, TLabel,
    TEdit, TMemo,
    TButton,
      TCheckBox, TRadioButton,
      TScrollBar, TGroupBox, TButton,
      TPanel, TActionList,
      TSpeedButton,
      TSplitter,
      TStatusBar, TToolBar,
      TTimer
      ]);
    NEW(RttiEventBase);
    PengineLik := TWPDEngine.Create
      (
        'php7ts' {$IFDEF CPUX64}+ '_64' {$ENDIF},
        True
      );
    RttiEventBase._FindControlVCL := @FindControlVCL;
    RttiEventBase._TestVariant := @TestVariant;
    RttiEventBase._RttiMessage := @RttiMessage;
    PPointer(_TestCreate)^ := RttiEventBase;

    PEngineLik.addFunc('Message', @TestMessage);
    PEngineLik.addFunc('test', @t_, 1);
    PEngineLik.addFunc('settest', @t_set, 1);
    PEngineLik.addFunc('GUILoadComponentFromTextFile',
      @GUILoadComponentFromTextFile);
    PEngineLik.addFunc('GUIComponentToString', @GUIComponentToString);
    PEngineLik.addFunc('GUISaveComponentToTextFile',
      @GUISaveComponentToTextFile);
    PEngineLik.addFunc('GUIStringToComponent', @GUIStringToComponent);

    PEngineLik.StartupEngine;
    PEngineLik.RunCode
      ('spl_autoload_register("ClassdSQLLoadMyRTTI::dSQLLoadMyRTTI");  include_once("Include.php"); ');
    PEngineLik.Destroy;
  except
    on E: Exception do
    begin
      ShowMessage(E.ClassName + ': ' + E.Message);
    end;
  end;

end.
