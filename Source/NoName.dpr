program NoName;
{$APPTYPE GUI}
{$R *.res}

uses
  Winapi.Windows,
  sSkinProvider,
  sSkinManager,
  System.TypInfo,
  Winapi.Messages,
  System.SysUtils,
  System.Variants,
  System.Generics.Collections,
  System.Classes,
  Vcl.Graphics,
  Vcl.Controls,
  Vcl.Forms,
  Vcl.Dialogs,
  Vcl.StdCtrls,
  LoadPhp,
  Vcl.ExtCtrls,
  Vcl.ActnList,
  WideStrUtils,
  System.Rtti,
  WPDFunction,
  RTTIOP,
  hzend_types,
  Vcl.CustomizeDlg,
  Vcl.ActnColorMaps,
  Vcl.ActnMan,
  Vcl.ActnCtrls,
  Vcl.ActnPopup,
  Vcl.ToolWin,
  Vcl.ActnMenus,
  Vcl.PlatformDefaultStyleActnCtrls,
  Vcl.DockTabSet,
  Vcl.ImgList,
  Vcl.Grids,
  Vcl.ButtonGroup,
  Vcl.CategoryButtons,
  Vcl.AppEvnts,
  Vcl.ValEdit,
  Vcl.Menus,
  Vcl.CheckLst,
  Vcl.Mask,
  Vcl.Buttons,
  System.Actions,
  Vcl.JumpList,
  System.Win.TaskbarCore,
  Vcl.Taskbar,
  Vcl.Tabs,
  Vcl.ShellAnimations,
  Vcl.XPMan,
  Vcl.ComCtrls,
  System.ImageList,
  System.Beacon,
  System.Bluetooth,
  Vcl.OleCtnrs,
  Vcl.MPlayer,
  System.Bluetooth.Components,
  System.Notification,
  Vcl.ExtDlgs,
  Vcl.ShareContract,
  Vcl.DdeMan,
  Vcl.OleCtrls,
  Vcl.OleServer,
  Vcl.CmAdmCtl,
  sBevel,
  sMaskEdit,
  System.Beacon.Components,
  sCheckListBox,
  sScrollBox,
  sSpeedButton,
  sBitBtn,
  sGroupBox,
  sScrollBar,
  sComboBox,
  sListBox,
  sRadioButton,
  sCheckBox,
  sButton,
  sMemo,
  sEdit,
  sGauge,
  Web.DBWeb,
  Vcl.WinXCtrls,
  System.Tether.Manager,
  System.Tether.AppProfile,
  SHDocVw,
  Web.DSProd,
  Web.DBXpressWeb,
  Xml.XMLDoc,
  Web.HTTPApp,
  Web.HTTPProd,
  Vcl.AppAnalytics,
  Vcl.Touch.GestureCtrls,
  Vcl.Touch.GestureMgr,
  acCoolBar,
  Vcl.Touch.Keyboard,
  Vcl.Samples.Calendar,
  Vcl.Outline,
  Vcl.Samples.DirOutln,
  Vcl.Samples.Spin,
  Vcl.ColorGrd,
  Vcl.Samples.Gauges,
  acImage,
  acNoteBook,
  sToolBar,
  sStatusBar,
  acHeaderControl,
  sListView,
  sUpDown,
  acProgressBar,
  sTrackBar,
  sRichEdit,
  sPageControl,
  sTabControl,
  sSplitter,
  acPageScroller,
  sLabel,
  acSlider,
  sSpinEdit,
  acShellCtrls,
  sPanel,
  sFrameBar,
  sFontCtrls,
  sFileCtrl,
  sToolEdit,
  sCurrEdit,
  sCurrencyEdit,
  sCustomComboEdit,
  sComboEdit,
  sMonthCalendar,
  sComboBoxes,
  acPathDialog,
  sColorSelect,
  acAlphaImageList,
  sDialogs,
  acTitleBar,
  acAlphaHints,
  acMagn,
  System.Net.HttpClient,
  sTreeView,
  acWebBrowser,
  System.Net.HttpClientComponent,
  IPPeerClient,
  IPPeerServer,
  sCalculator,
  Xml.xmldom,
  Xml.XMLIntf,
  System.Net.URLClient {, acMeter},
  SynHighlighterXML,
  SynHighlighterAsm,
  SynHighlighterVrml97,
  SynHighlighterVB,
  SynHighlighterURI,
  SynHighlighterUnreal,
  SynHighlighterUNIXShellScript,
  SynHighlighterTeX,
  SynHighlighterTclTk,
  SynHighlighterMsg,
  SynHighlighterST,
  SynHighlighterSml,
  SynHighlighterSQL,
  SynHighlighterSDD,
  SynHighlighterRuby,
  SynHighlighterRC,
  SynHighlighterPython,
  SynHighlighterProgress,
  SynHighlighterPHP,
  SynHighlighterPerl,
  SynHighlighterDWS,
  SynHighlighterBat,
  SynHighlighterVBScript,
  SynHighlighterM3,
  SynHighlighterModelica,
  SynHighlighterLDraw,
  SynHighlighterKix,
  SynHighlighterJSON,
  SynHighlighterJScript,
  SynHighlighterJava,
  SynHighlighterInno,
  SynHighlighterIni,
  SynHighlighterHtml,
  SynHighlighterHP48,
  SynHighlighterHaskell,
  SynHighlighterGWS,
  SynHighlighterGeneral,
  SynHighlighterDml,
  SynHighlighterGalaxy,
  SynHighlighterFoxpro,
  SynHighlighterFortran,
  SynHighlighterEiffel,
  SynHighlighterDOT,
  SynHighlighterIDL,
  SynHighlighterCobol,
  SynHighlighterCPM,
  SynHighlighterCSS,
  SynHighlighterCAC,
  SynHighlighterCache,
  SynHighlighterCpp,
  SynHighlighterCS,
  SynHighlighterDfm,
  SynHighlighterBaan,
  SynHighlighterAWK,
  SynHighlighterADSP21xx,
  SynHighlighterHC11,
  SynEditDocumentManager,
  SynURIOpener,
  SynEditOptionsDialog,
  SynEditRegexSearch,
  SynEditMiscClasses,
  SynEditSearch,
  SynAutoCorrect,
  SynEditPrintPreview,
  SynEditPrint,
  SynEditPlugins,
  SynMacroRecorder,
  SynCompletionProposal,
  SynEditHighlighter,
  SynHighlighterMulti,
  SynEditPythonBehaviour,
  SynExportTeX,
  SynExportRTF,
  SynEditExport,
  SynExportHTML,
  SynDBEdit,
  SynMemo,
  SynEdit,
  Vcl.StdActns,
  acArcControls;

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
    ShowMessage(ZvalGetStringA(Text));
  end;
end;

procedure TestCallMy(a1: pointer);
begin
  ShowMessage(integer(a1).ToString);
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
  tmp: pointer;

var
  RttiEventBase: PTEventBase;

procedure RttiMessage(_var: PAnsiChar); cdecl;
begin
  ShowMessage(_var);
end;

begin
  try

    registerArr([TMainMenu, TPopupMenu, TLabel, TEdit, TMemo, TButton,
      TCheckBox, TRadioButton, TListBox, TComboBox, TScrollBar, TGroupBox,
      TRadioGroup, TPanel, TActionList, TBitBtn, TSpeedButton, TMaskEdit,
      TStringGrid, TDrawGrid, TImage, TShape, TBevel, TScrollBox, TCheckListBox,
      TSplitter, TStaticText, TLinkLabel, TControlBar, TValueListEditor,
      TApplicationEvents, TLabeledEdit, TButtonedEdit, TColorBox, TColorListBox,
      TCategoryButtons, TButtonGroup, TDockTabSet, TTabSet, TTrayIcon,
      TFlowPanel, TGridPanel, TBalloonHint, TCategoryPanelGroup, TActionManager,
      TActionMainMenuBar, TPopupActionBar, TActionToolBar, TXPColorMap,
      TStandardColorMap, TTwilightColorMap, TCustomizeDlg, TTabControl,
      TPageControl, TImageList, TRichEdit, TTrackBar, TProgressBar, TUpDown,
      THotKey, TAnimate, TDateTimePicker, TMonthCalendar, TTreeView, TListView,
      THeaderControl, TStatusBar, TToolBar, TCoolBar, TPageScroller,
      TComboBoxEx, TXPManifest, TShellResources, TTaskbar, TJumpList,
      TBluetoothLE, TBluetooth, TBeacon, TBeaconDevice, TNotificationCenter,
      TTimer, TPaintBox, TMediaPlayer, TOleContainer, TCOMAdminCatalog,
      TDdeClientConv, TDdeClientItem, TDdeServerConv, TDdeServerItem,
      TSharingContract, TOpenDialog, TSaveDialog, TOpenPictureDialog,
      TSavePictureDialog, TOpenTextFileDialog, TSaveTextFileDialog, TFontDialog,
      TColorDialog, TPrintDialog, TPrinterSetupDialog, TFindDialog,
      TReplaceDialog, TPageSetupDialog, TsAlphaHints, TsTitleBar, TsOpenDialog,
      TsSaveDialog, TsOpenPictureDialog, TsSavePictureDialog, TsColorDialog,
      TsAlphaImageList, TsVirtualImageList, TsImage, TsWebLabel,
      TsDecimalSpinEdit, TsColorSelect, TsDragBar, TsComboBoxEx, TsColorBox,
      TsMonthCalendar, TsComboEdit, TsCurrencyEdit, TsDateEdit, TsCalcEdit,
      TsDirectoryEdit, TsFilenameEdit, TsFilterComboBox, TsFontComboBox,
      TsFontListBox, TsLabelFX, TsFrameBar, TsColorsPanel, TsStickyLabel,
      TsShellTreeView, TsShellComboBox, TsShellListView, TsTimePicker, TsSlider,
      TsHTMLLabel, TsPageScroller, TsWebBrowser, TsTreeViewEx, TsSkinManager,
      TsSkinProvider, TsCalculator, TsMagnifier, TsPathDialog, TFileOpenDialog,
      TFileSaveDialog, TTaskDialog, TGauge, TColorGrid, TSpinButton, TSpinEdit,
      TDirectoryOutline, TCalendar, TGestureManager, TGestureListView,
      TGesturePreview, TSynEdit, TSynMemo, TDBSynEdit, TSynExporterHTML,
      TSynExporterRTF, TSynExporterTeX, TSynEditPythonBehaviour, TSynMultiSyn,
      TSynCompletionProposal, TSynAutoComplete, TSynMacroRecorder,
      TSynEditPrint, TSynEditPrintPreview, TSynAutoCorrect, TSynEditSearch,
      TSynEditRegexSearch, TSynEditOptionsDialog, TSynURIOpener,
      TSynEditDocumentManager, TSynHC11Syn, TSynADSP21xxSyn, TSynAWKSyn,
      TSynBaanSyn, TSynDfmSyn, TSynCSSyn, TSynCppSyn, TSynCacheSyn, TSynCACSyn,
      TSynCssSyn, TSynCPMSyn, TSynCobolSyn, TSynIdlSyn, TSynDOTSyn,
      TSynEiffelSyn, TSynFortranSyn, TSynFoxproSyn, TSynGalaxySyn, TSynDmlSyn,
      TSynGeneralSyn, TSynGWScriptSyn, TSynHaskellSyn, TSynHP48Syn, TSynHTMLSyn,
      TSynIniSyn, TSynInnoSyn, TSynJavaSyn, TSynJScriptSyn, TSynJSONSyn,
      TSynKixSyn, TSynLDRSyn, TSynModelicaSyn, TSynM3Syn, TSynVBScriptSyn,
      TSynBatSyn, TSynDWSSyn, TSynPerlSyn, TSynPHPSyn, TSynProgressSyn,
      TSynPythonSyn, TSynRCSyn, TSynRubySyn, TSynSDDSyn, TSynSQLSyn, TSynSMLSyn,
      TSynSTSyn, TSynMsgSyn, TSynTclTkSyn, TSynTeXSyn, TSynUNIXShellScriptSyn,
      TSynUnrealSyn, TSynURISyn, TSynVBSyn, TSynVrml97Syn, TSynAsmSyn,
      TSynXMLSyn, TsLabel, TsEdit, TsMemo, TsButton, TsCheckBox, TsRadioButton,
      TsListBox, TsComboBox, TsScrollBar, TsGroupBox, TsRadioGroup, TsPanel,
      TsBitBtn, TsSpeedButton, TsMaskEdit, TsBevel, TsScrollBox, TsCheckListBox,
      TsSplitter, TsTabControl, TsPageControl, TsRichEdit, TsTrackBar,
      TsProgressBar, TsUpDown, TsTreeView, TsListView, TsHeaderControl,
      TsStatusBar, TsToolBar, TsGauge, TsSpinEdit, TsCoolBar, TsNotebook,
      TsImage, TsTabSheet, TAction, TWindowClose, TsImgLabel, TsArcGauge,
      TsArcPreloader, TsArcHandle, TsArcDial, TsRollOutPanel, TsSkinSelector,
      TacSkinEffects]);

    NEW(RttiEventBase);

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

    PEngineLik.PHPINIPath := 'php.ini';
    // TForm.Create().FindComponent;
    PEngineLik.StartupEngine;

    tmp := GetProcAddress(PHP5dll, 'zend_error_cb');
    asm
      mov edx, dword ptr [tmp]
      mov dword ptr [edx], offset zend_error_cb2
    end;

    PEngineLik.RunCode
      ('spl_autoload_register("ClassdSQLLoadMyRTTI::dSQLLoadMyRTTI");  include_once("Include.php"); ');

    PEngineLik.Destroy;
    // Engine.Destroy;
  except
    on E: Exception do
    begin
      ShowMessage(E.ClassName + ': ' + E.Message);
    end;
  end;

end.
