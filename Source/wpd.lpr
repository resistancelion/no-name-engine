program wpd;

{$mode objfpc}{$H+}

uses
  {$IFDEF UNIX}{$IFDEF UseCThreads}
  cthreads,
  {$ENDIF}{$ENDIF}
  Interfaces, // this includes the LCL widgetset
  Classes, SysUtils, Forms, Controls, Graphics, Dialogs, Menus, StdCtrls,
  Buttons, ExtCtrls,

  WideStrUtils,
  Rtti,

  WPD.Zend.Types,
  WPD.PHP,
  WPD.RTTI.Procedures,
  WPD.Engine,
  WPD.Vis,

  System.Actions,

  { you can add units after this }


  Unit1, unit2;

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

type
  PTEventBase = ^TEventBase;

  TEventBase = packed record
    _FindControlVCL: function(obj: PAnsiChar): longint; cdecl;
    _TestVariant: function(var ZResult: Pzval; ZOwner, ZOwnerSelf: integer;
      Name: PAnsiChar; arr: Pzval): integer; cdecl;
    _RttiMessage: procedure(_var: PAnsiChar); cdecl;
  end;

var
  tmp, tmp2: pointer;

var
  RttiEventBase: PTEventBase;
  PengineLik: WPD.Engine.TWPDEngine;

procedure RttiMessage(_var: PAnsiChar); cdecl;
begin
  ShowMessage(_var);
end;

begin
  RequireDerivedFormResource:=False;
  Application.Scaled:=True;
  try
    registerArr([
    Forms.TApplication,
    TPersistent,
    TComponent,
    TBrush,
    TFont,
    TBitmap,
    TCanvas,

    TMainMenu, TPopupMenu, TLabel,
    TEdit, TMemo,
    TButton,
      TCheckBox, TRadioButton,
      TScrollBar, TGroupBox, TButton,
      TPanel,
      TSpeedButton,
      TSplitter,
      TTimer
      ]);
    NEW(RttiEventBase);
    PengineLik := TWPDEngine.Create
      (
        'php7ts' {$IFDEF CPUX64} + '_64' {$ENDIF},
        True
      );
    RttiEventBase._FindControlVCL := @FindControlVCL;
    RttiEventBase._TestVariant := @TestVariant;
    RttiEventBase._RttiMessage := @RttiMessage;
    PPointer(_TestCreate)^ := RttiEventBase;

    PEngineLik.addFunc('Message', @TestMessage);
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

