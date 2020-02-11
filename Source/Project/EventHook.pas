unit EventHook;

interface

uses
  Generics.Collections,
  Rtti,
  TypInfo,
  System.SysUtils, vcl.dialogs;

type
  TBaseEvent = class;

  TEventBeforeNotify = reference to procedure(Base: TBaseEvent;
    Params: TArray<TValue>);

  TTestCallVarArgs = procedure of object varargs;

  TBaseEvent = class
  private
    MethodDefault: TMethod;
    StackSize: Byte;
    ListEventsCallCount: Cardinal;
    ListEventsCall: array [0 .. 255] of TEventBeforeNotify;

    Procedure EventCall1(A1: NativeUInt);
    Procedure EventCall2(A1, A2: NativeUInt);
    Procedure EventCall3(A1, A2, A3: NativeUInt);
    Procedure EventCall4(A1, A2, A3, A4: NativeUInt);
    Procedure EventCall5(A1, A2, A3, A4, A5: NativeUInt);
    Procedure EventCall6(A1, A2, A3, A4, A5, A6: NativeUInt);
    Procedure EventCall7(A1, A2, A3, A4, A5, A6, A7: NativeUInt);
    Procedure EventCall8(A1, A2, A3, A4, A5, A6, A7, A8: NativeUInt);
    Procedure EventCall9(A1, A2, A3, A4, A5, A6, A7, A8, A9: NativeUInt);
    Procedure EventCall10(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10: NativeUInt);
    Procedure EventCall11(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10,
      A11: NativeUInt);
    Procedure EventCall12(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11,
      A12: NativeUInt);
    Procedure EventCall13(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12,
      A13: NativeUInt);
    Procedure EventCall14(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12,
      A13, A14: NativeUInt);
    Procedure EventCall15(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12,
      A13, A14, A15: NativeUInt);
    Procedure EventCall16(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12,
      A13, A14, A15, A16: NativeUInt);
    Procedure EventCall17(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12,
      A13, A14, A15, A16, A17: NativeUInt);
    Procedure EventCall18(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12,
      A13, A14, A15, A16, A17, A18: NativeUInt);
    Procedure EventCall19(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12,
      A13, A14, A15, A16, A17, A18, A19: NativeUInt);
    Procedure EventCall20(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12,
      A13, A14, A15, A16, A17, A18, A19, A20: NativeUInt);
    Procedure EventCall21(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12,
      A13, A14, A15, A16, A17, A18, A19, A20, A21: NativeUInt);
    Procedure EventCall22(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12,
      A13, A14, A15, A16, A17, A18, A19, A20, A21, A22: NativeUInt);
    Procedure EventCall23(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12,
      A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23: NativeUInt);
    Procedure EventCall24(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12,
      A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24: NativeUInt);
    Procedure EventCall25(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12,
      A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24,
      A25: NativeUInt);
    Procedure EventCall26(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12,
      A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25,
      A26: NativeUInt);
    Procedure EventCall27(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12,
      A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26,
      A27: NativeUInt);
    Procedure EventCall28(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12,
      A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27,
      A28: NativeUInt);
    Procedure EventCall29(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12,
      A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27,
      A28, A29: NativeUInt);
    Procedure EventCall30(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12,
      A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27,
      A28, A29, A30: NativeUInt);
    Procedure EventCall31(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12,
      A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27,
      A28, A29, A30, A31: NativeUInt);
    Procedure EventCall32(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12,
      A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27,
      A28, A29, A30, A31, A32: NativeUInt);
    Procedure EventCall33(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12,
      A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27,
      A28, A29, A30, A31, A32, A33: NativeUInt);
    Procedure EventCall34(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12,
      A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27,
      A28, A29, A30, A31, A32, A33, A34: NativeUInt);
    Procedure EventCall35(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12,
      A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27,
      A28, A29, A30, A31, A32, A33, A34, A35: NativeUInt);
    Procedure EventCall36(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12,
      A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27,
      A28, A29, A30, A31, A32, A33, A34, A35, A36: NativeUInt);

    procedure Handler;
  public
    PointArgs: array [0 .. 35] of Pointer;

    Sender: TObject;
    InfoArgs: TArray<TRttiParameter>;
    LengthArgs: Byte;
    PropType: TRttiProperty;
    EventName: string;
    OrigCall: Boolean;
    constructor Create(aSender: TObject; _PropType: TRttiProperty;
      _OrigCall: Boolean = false);
    destructor Destroy;
  end;

  TEventHook = class
  private
    RttiContext: TRttiContext;
    FlList: TDictionary<String, TBaseEvent>;
    FOnBefore: TEventBeforeNotify;
  public
    property OnBefore: TEventBeforeNotify read FOnBefore write FOnBefore;

    function IsSet(aSender: TObject; PropName: string; var Base: TBaseEvent)
      : Boolean; overload;
    function IsSet(aSender: TObject; Prop: TRttiProperty; var Base: TBaseEvent)
      : Boolean; overload;

    function IsSet(aSender: TObject; PropName: string): Boolean; overload;
    function IsSet(aSender: TObject; Prop: TRttiProperty): Boolean; overload;

    function ESet(aSender: TObject; PropName: string; OrigCall: Boolean = false)
      : Boolean; overload;
    function ESet(aSender: TObject; Prop: TRttiProperty;
      OrigCall: Boolean = false): Boolean; overload;

    function EAdd(aSender: TObject; PropName: string; Event: TEventBeforeNotify;
      OrigCall: Boolean = false): Boolean; overload;
    function EAdd(aSender: TObject; Prop: TRttiProperty;
      Event: TEventBeforeNotify; OrigCall: Boolean = false): Boolean; overload;

    function ERem(aSender: TObject; PropName: string): Boolean;
    constructor Create();
    destructor Destroy;
  end;

var
  EventHookObject: TEventHook;

implementation

constructor TEventHook.Create();
begin
  FlList := TDictionary<String, TBaseEvent>.Create();
end;

procedure TBaseEvent.Handler;
var
  I: Integer;
  Params: TArray<TValue>;
  P: Pointer;
begin
  SetLength(Params, LengthArgs);
  for I := Low(InfoArgs) to High(InfoArgs) do
  begin
    P := self.PointArgs[I];
    if InfoArgs[I].Flags * [pfVar, pfOut] <> [] then
      P := PPointer(P)^;

    TValue.Make(P, InfoArgs[I].ParamType.Handle, Params[I]);
  end;

  if @EventHookObject.OnBefore <> nil then
    EventHookObject.OnBefore(self, Params);

  for I := Low(ListEventsCall) to ListEventsCallCount - 1 do
    ListEventsCall[I](self, Params);
end;

constructor TBaseEvent.Create(aSender: TObject; _PropType: TRttiProperty;
  _OrigCall: Boolean = false);
begin
  OrigCall := _OrigCall;
  Sender := aSender;
  PropType := _PropType;
  EventName := PropType.Name;
  InfoArgs := TRttiInvokableType(PropType.PropertyType).GetParameters;
  LengthArgs := _PropType.PropertyType.Handle.TypeData.ParamCount;
  ListEventsCallCount := 0;
  MethodDefault := GetMethodProp(aSender, EventName);
end;

destructor TBaseEvent.Destroy;
begin
  if @Sender <> nil then
    setMethodProp(Sender, EventName, MethodDefault);
  SetLength(InfoArgs, 0);
  ListEventsCallCount := 0;
end;

function TEventHook.IsSet(aSender: TObject; Prop: TRttiProperty;
  var Base: TBaseEvent): Boolean;
begin
  Result := Prop <> nil;
  if Result then
    Result := FlList.TryGetValue(IntToStr(NativeUInt(aSender)) + '_' +
      Prop.Name, Base);
end;

function TEventHook.IsSet(aSender: TObject; PropName: string;
  var Base: TBaseEvent): Boolean;
begin
  Result := FlList.TryGetValue(IntToStr(NativeUInt(aSender)) + '_' +
    PropName, Base);
end;

function TEventHook.IsSet(aSender: TObject; Prop: TRttiProperty): Boolean;
var
  Base: TBaseEvent;
begin
  Result := IsSet(aSender, string(Prop), TBaseEvent(Base));
end;

function TEventHook.IsSet(aSender: TObject; PropName: string): Boolean;
var
  Base: TBaseEvent;
begin
  Result := IsSet(aSender, PropName, Base);
end;

function TEventHook.ESet(aSender: TObject; Prop: TRttiProperty;
  OrigCall: Boolean = false): Boolean;
var
  m: TMethod;
  Base: TBaseEvent;
  NameCase, PropName: string;
begin
  if (@aSender <> nil) and (Prop <> nil) then
  begin
    PropName := Prop.Name;
    NameCase := IntToStr(NativeUInt(aSender)) + '_' + PropName;
    if not FlList.TryGetValue(NameCase, Base) then
    begin
      Result := true;

      case Prop.PropertyType.Handle.TypeData.ParamCount of
        0:
          m.Code := @TBaseEvent.Handler;
        1:
          m.Code := @TBaseEvent.EventCall1;
        2:
          m.Code := @TBaseEvent.EventCall2;
        3:
          m.Code := @TBaseEvent.EventCall3;
        4:
          m.Code := @TBaseEvent.EventCall4;
        5:
          m.Code := @TBaseEvent.EventCall5;
        6:
          m.Code := @TBaseEvent.EventCall6;
        7:
          m.Code := @TBaseEvent.EventCall7;
        8:
          m.Code := @TBaseEvent.EventCall8;
        9:
          m.Code := @TBaseEvent.EventCall9;
        10:
          m.Code := @TBaseEvent.EventCall10;
        11:
          m.Code := @TBaseEvent.EventCall11;
        12:
          m.Code := @TBaseEvent.EventCall12;
        13:
          m.Code := @TBaseEvent.EventCall13;
        14:
          m.Code := @TBaseEvent.EventCall14;
        15:
          m.Code := @TBaseEvent.EventCall15;
        16:
          m.Code := @TBaseEvent.EventCall16;
        17:
          m.Code := @TBaseEvent.EventCall17;
        18:
          m.Code := @TBaseEvent.EventCall18;
        19:
          m.Code := @TBaseEvent.EventCall19;
        20:
          m.Code := @TBaseEvent.EventCall20;
        21:
          m.Code := @TBaseEvent.EventCall21;
        22:
          m.Code := @TBaseEvent.EventCall22;
        23:
          m.Code := @TBaseEvent.EventCall23;
        24:
          m.Code := @TBaseEvent.EventCall24;
        25:
          m.Code := @TBaseEvent.EventCall25;
        26:
          m.Code := @TBaseEvent.EventCall26;
        27:
          m.Code := @TBaseEvent.EventCall27;
        28:
          m.Code := @TBaseEvent.EventCall28;
        29:
          m.Code := @TBaseEvent.EventCall29;
        30:
          m.Code := @TBaseEvent.EventCall30;
        31:
          m.Code := @TBaseEvent.EventCall31;
        32:
          m.Code := @TBaseEvent.EventCall32;
        33:
          m.Code := @TBaseEvent.EventCall33;
        34:
          m.Code := @TBaseEvent.EventCall34;
        35:
          m.Code := @TBaseEvent.EventCall35;
        36:
          m.Code := @TBaseEvent.EventCall36;
      else
        Result := false;
      end;
      if Result then
      begin
        Base := TBaseEvent.Create(aSender, Prop, OrigCall);

        TObject(m.Data) := Base;
        setMethodProp(aSender, PropName, m);

        FlList.Add(NameCase, Base);
      end;
    end;
  end;
end;

function TEventHook.ESet(aSender: TObject; PropName: string;
  OrigCall: Boolean = false): Boolean;
begin
  if @aSender <> nil then
    Result := ESet(aSender, RttiContext.GetType(aSender.ClassInfo)
      .GetProperty(PropName), OrigCall)
  else
    Result := false;
end;

function TEventHook.EAdd(aSender: TObject; Prop: TRttiProperty;
  Event: TEventBeforeNotify; OrigCall: Boolean = false): Boolean;
var
  Base: TBaseEvent;
begin
  Result := IsSet(aSender, Prop, Base);
  if not Result then
  begin
    ESet(aSender, Prop);
    Result := IsSet(aSender, Prop, Base);
  end;
  if Result then
  begin
    Base.ListEventsCall[Base.ListEventsCallCount] := Event;
    inc(Base.ListEventsCallCount);
    Base.OrigCall := OrigCall;
  end;
end;

function TEventHook.EAdd(aSender: TObject; PropName: string;
  Event: TEventBeforeNotify; OrigCall: Boolean = false): Boolean;
var
  Base: TBaseEvent;
begin
  Result := IsSet(aSender, PropName, Base);
  if not Result then
  begin
    ESet(aSender, PropName);
    Result := IsSet(aSender, PropName, Base);
  end;
  if Result then
  begin
    Base.ListEventsCall[Base.ListEventsCallCount] := Event;
    inc(Base.ListEventsCallCount);
    Base.OrigCall := OrigCall;
  end;
end;

function TEventHook.ERem(aSender: TObject; PropName: string): Boolean;
var
  Base: TBaseEvent;
begin
  Result := IsSet(aSender, PropName, Base);

  if Result then
  begin
    Base.Destroy;
    FlList.Remove(IntToStr(NativeUInt(aSender)) + '_' + PropName);
  end;
end;

destructor TEventHook.Destroy;
var
  Item: TPair<String, TBaseEvent>;
begin
  for Item in FlList do
    Item.Value.Destroy;

  FlList.Free;
end;

Procedure TBaseEvent.EventCall1;
begin
  PointArgs[0] := @A1;
  Handler;
  if OrigCall and (MethodDefault.Code <> nil) then
    TTestCallVarArgs(MethodDefault)(A1);
end;

Procedure TBaseEvent.EventCall2;
begin
  PointArgs[0] := @A1;
  PointArgs[1] := @A2;
  Handler;
  if OrigCall and (MethodDefault.Code <> nil) then
    TTestCallVarArgs(MethodDefault)(A1, A2);
end;

Procedure TBaseEvent.EventCall3;
begin
  PointArgs[0] := @A1;
  PointArgs[1] := @A2;
  PointArgs[2] := @A3;
  Handler;
  if OrigCall and (MethodDefault.Code <> nil) then
    TTestCallVarArgs(MethodDefault)(A1, A2, A3);
end;

Procedure TBaseEvent.EventCall4;
begin
  PointArgs[0] := @A1;
  PointArgs[1] := @A2;
  PointArgs[2] := @A3;
  PointArgs[3] := @A4;
  Handler;
  if OrigCall and (MethodDefault.Code <> nil) then
    TTestCallVarArgs(MethodDefault)(A1, A2, A3, A4);
end;

Procedure TBaseEvent.EventCall5;
begin
  PointArgs[0] := @A1;
  PointArgs[1] := @A2;
  PointArgs[2] := @A3;
  PointArgs[3] := @A4;
  PointArgs[4] := @A5;
  Handler;
  if OrigCall and (MethodDefault.Code <> nil) then
    TTestCallVarArgs(MethodDefault)(A1, A2, A3, A4, A5);
end;

Procedure TBaseEvent.EventCall6;
begin
  PointArgs[0] := @A1;
  PointArgs[1] := @A2;
  PointArgs[2] := @A3;
  PointArgs[3] := @A4;
  PointArgs[4] := @A5;
  PointArgs[5] := @A6;
  Handler;
  if OrigCall and (MethodDefault.Code <> nil) then
    TTestCallVarArgs(MethodDefault)(A1, A2, A3, A4, A5, A6);
end;

Procedure TBaseEvent.EventCall7;
begin
ShowMessage('here');
  PointArgs[0] := @A1;
  PointArgs[1] := @A2;
  PointArgs[2] := @A3;
  PointArgs[3] := @A4;
  PointArgs[4] := @A5;
  PointArgs[5] := @A6;
  PointArgs[6] := @A7;
  Handler;
  if OrigCall and (MethodDefault.Code <> nil) then
    TTestCallVarArgs(MethodDefault)(A1, A2, A3, A4, A5, A6, A7);
end;

Procedure TBaseEvent.EventCall8;
begin
  PointArgs[0] := @A1;
  PointArgs[1] := @A2;
  PointArgs[2] := @A3;
  PointArgs[3] := @A4;
  PointArgs[4] := @A5;
  PointArgs[5] := @A6;
  PointArgs[6] := @A7;
  PointArgs[7] := @A8;
  Handler;
  if OrigCall and (MethodDefault.Code <> nil) then
    TTestCallVarArgs(MethodDefault)(A1, A2, A3, A4, A5, A6, A7, A8);
end;

Procedure TBaseEvent.EventCall9;
begin
  PointArgs[0] := @A1;
  PointArgs[1] := @A2;
  PointArgs[2] := @A3;
  PointArgs[3] := @A4;
  PointArgs[4] := @A5;
  PointArgs[5] := @A6;
  PointArgs[6] := @A7;
  PointArgs[7] := @A8;
  PointArgs[8] := @A9;
  Handler;
  if OrigCall and (MethodDefault.Code <> nil) then
    TTestCallVarArgs(MethodDefault)(A1, A2, A3, A4, A5, A6, A7, A8, A9);
end;

Procedure TBaseEvent.EventCall10;
begin
  PointArgs[0] := @A1;
  PointArgs[1] := @A2;
  PointArgs[2] := @A3;
  PointArgs[3] := @A4;
  PointArgs[4] := @A5;
  PointArgs[5] := @A6;
  PointArgs[6] := @A7;
  PointArgs[7] := @A8;
  PointArgs[8] := @A9;
  PointArgs[9] := @A10;
  Handler;
  if OrigCall and (MethodDefault.Code <> nil) then
    TTestCallVarArgs(MethodDefault)(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10);
end;

Procedure TBaseEvent.EventCall11;
begin
  PointArgs[0] := @A1;
  PointArgs[1] := @A2;
  PointArgs[2] := @A3;
  PointArgs[3] := @A4;
  PointArgs[4] := @A5;
  PointArgs[5] := @A6;
  PointArgs[6] := @A7;
  PointArgs[7] := @A8;
  PointArgs[8] := @A9;
  PointArgs[9] := @A10;
  PointArgs[10] := @A11;
  Handler;
  if OrigCall and (MethodDefault.Code <> nil) then
    TTestCallVarArgs(MethodDefault)(A1, A2, A3, A4, A5, A6, A7, A8, A9,
      A10, A11);
end;

Procedure TBaseEvent.EventCall12;
begin
  PointArgs[0] := @A1;
  PointArgs[1] := @A2;
  PointArgs[2] := @A3;
  PointArgs[3] := @A4;
  PointArgs[4] := @A5;
  PointArgs[5] := @A6;
  PointArgs[6] := @A7;
  PointArgs[7] := @A8;
  PointArgs[8] := @A9;
  PointArgs[9] := @A10;
  PointArgs[10] := @A11;
  PointArgs[11] := @A12;
  Handler;
  if OrigCall and (MethodDefault.Code <> nil) then
    TTestCallVarArgs(MethodDefault)(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10,
      A11, A12);
end;

Procedure TBaseEvent.EventCall13;
begin
  PointArgs[0] := @A1;
  PointArgs[1] := @A2;
  PointArgs[2] := @A3;
  PointArgs[3] := @A4;
  PointArgs[4] := @A5;
  PointArgs[5] := @A6;
  PointArgs[6] := @A7;
  PointArgs[7] := @A8;
  PointArgs[8] := @A9;
  PointArgs[9] := @A10;
  PointArgs[10] := @A11;
  PointArgs[11] := @A12;
  PointArgs[12] := @A13;
  Handler;
  if OrigCall and (MethodDefault.Code <> nil) then
    TTestCallVarArgs(MethodDefault)(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10,
      A11, A12, A13);
end;

Procedure TBaseEvent.EventCall14;
begin
  PointArgs[0] := @A1;
  PointArgs[1] := @A2;
  PointArgs[2] := @A3;
  PointArgs[3] := @A4;
  PointArgs[4] := @A5;
  PointArgs[5] := @A6;
  PointArgs[6] := @A7;
  PointArgs[7] := @A8;
  PointArgs[8] := @A9;
  PointArgs[9] := @A10;
  PointArgs[10] := @A11;
  PointArgs[11] := @A12;
  PointArgs[12] := @A13;
  PointArgs[13] := @A14;
  Handler;
  if OrigCall and (MethodDefault.Code <> nil) then
    TTestCallVarArgs(MethodDefault)(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10,
      A11, A12, A13, A14);
end;

Procedure TBaseEvent.EventCall15;
begin
  PointArgs[0] := @A1;
  PointArgs[1] := @A2;
  PointArgs[2] := @A3;
  PointArgs[3] := @A4;
  PointArgs[4] := @A5;
  PointArgs[5] := @A6;
  PointArgs[6] := @A7;
  PointArgs[7] := @A8;
  PointArgs[8] := @A9;
  PointArgs[9] := @A10;
  PointArgs[10] := @A11;
  PointArgs[11] := @A12;
  PointArgs[12] := @A13;
  PointArgs[13] := @A14;
  PointArgs[14] := @A15;
  Handler;
  if OrigCall and (MethodDefault.Code <> nil) then
    TTestCallVarArgs(MethodDefault)(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10,
      A11, A12, A13, A14, A15);
end;

Procedure TBaseEvent.EventCall16;
begin
  PointArgs[0] := @A1;
  PointArgs[1] := @A2;
  PointArgs[2] := @A3;
  PointArgs[3] := @A4;
  PointArgs[4] := @A5;
  PointArgs[5] := @A6;
  PointArgs[6] := @A7;
  PointArgs[7] := @A8;
  PointArgs[8] := @A9;
  PointArgs[9] := @A10;
  PointArgs[10] := @A11;
  PointArgs[11] := @A12;
  PointArgs[12] := @A13;
  PointArgs[13] := @A14;
  PointArgs[14] := @A15;
  PointArgs[15] := @A16;
  Handler;
  if OrigCall and (MethodDefault.Code <> nil) then
    TTestCallVarArgs(MethodDefault)(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10,
      A11, A12, A13, A14, A15, A16);
end;

Procedure TBaseEvent.EventCall17;
begin
  PointArgs[0] := @A1;
  PointArgs[1] := @A2;
  PointArgs[2] := @A3;
  PointArgs[3] := @A4;
  PointArgs[4] := @A5;
  PointArgs[5] := @A6;
  PointArgs[6] := @A7;
  PointArgs[7] := @A8;
  PointArgs[8] := @A9;
  PointArgs[9] := @A10;
  PointArgs[10] := @A11;
  PointArgs[11] := @A12;
  PointArgs[12] := @A13;
  PointArgs[13] := @A14;
  PointArgs[14] := @A15;
  PointArgs[15] := @A16;
  PointArgs[16] := @A17;
  Handler;
  if OrigCall and (MethodDefault.Code <> nil) then
    TTestCallVarArgs(MethodDefault)(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10,
      A11, A12, A13, A14, A15, A16, A17);
end;

Procedure TBaseEvent.EventCall18;
begin
  PointArgs[0] := @A1;
  PointArgs[1] := @A2;
  PointArgs[2] := @A3;
  PointArgs[3] := @A4;
  PointArgs[4] := @A5;
  PointArgs[5] := @A6;
  PointArgs[6] := @A7;
  PointArgs[7] := @A8;
  PointArgs[8] := @A9;
  PointArgs[9] := @A10;
  PointArgs[10] := @A11;
  PointArgs[11] := @A12;
  PointArgs[12] := @A13;
  PointArgs[13] := @A14;
  PointArgs[14] := @A15;
  PointArgs[15] := @A16;
  PointArgs[16] := @A17;
  PointArgs[17] := @A18;
  Handler;
  if OrigCall and (MethodDefault.Code <> nil) then
    TTestCallVarArgs(MethodDefault)(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10,
      A11, A12, A13, A14, A15, A16, A17, A18);
end;

Procedure TBaseEvent.EventCall19;
begin
  PointArgs[0] := @A1;
  PointArgs[1] := @A2;
  PointArgs[2] := @A3;
  PointArgs[3] := @A4;
  PointArgs[4] := @A5;
  PointArgs[5] := @A6;
  PointArgs[6] := @A7;
  PointArgs[7] := @A8;
  PointArgs[8] := @A9;
  PointArgs[9] := @A10;
  PointArgs[10] := @A11;
  PointArgs[11] := @A12;
  PointArgs[12] := @A13;
  PointArgs[13] := @A14;
  PointArgs[14] := @A15;
  PointArgs[15] := @A16;
  PointArgs[16] := @A17;
  PointArgs[17] := @A18;
  PointArgs[18] := @A19;
  Handler;
  if OrigCall and (MethodDefault.Code <> nil) then
    TTestCallVarArgs(MethodDefault)(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10,
      A11, A12, A13, A14, A15, A16, A17, A18, A19);
end;

Procedure TBaseEvent.EventCall20;
begin
  PointArgs[0] := @A1;
  PointArgs[1] := @A2;
  PointArgs[2] := @A3;
  PointArgs[3] := @A4;
  PointArgs[4] := @A5;
  PointArgs[5] := @A6;
  PointArgs[6] := @A7;
  PointArgs[7] := @A8;
  PointArgs[8] := @A9;
  PointArgs[9] := @A10;
  PointArgs[10] := @A11;
  PointArgs[11] := @A12;
  PointArgs[12] := @A13;
  PointArgs[13] := @A14;
  PointArgs[14] := @A15;
  PointArgs[15] := @A16;
  PointArgs[16] := @A17;
  PointArgs[17] := @A18;
  PointArgs[18] := @A19;
  PointArgs[19] := @A20;
  Handler;
  if OrigCall and (MethodDefault.Code <> nil) then
    TTestCallVarArgs(MethodDefault)(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10,
      A11, A12, A13, A14, A15, A16, A17, A18, A19, A20);
end;

Procedure TBaseEvent.EventCall21;
begin
  PointArgs[0] := @A1;
  PointArgs[1] := @A2;
  PointArgs[2] := @A3;
  PointArgs[3] := @A4;
  PointArgs[4] := @A5;
  PointArgs[5] := @A6;
  PointArgs[6] := @A7;
  PointArgs[7] := @A8;
  PointArgs[8] := @A9;
  PointArgs[9] := @A10;
  PointArgs[10] := @A11;
  PointArgs[11] := @A12;
  PointArgs[12] := @A13;
  PointArgs[13] := @A14;
  PointArgs[14] := @A15;
  PointArgs[15] := @A16;
  PointArgs[16] := @A17;
  PointArgs[17] := @A18;
  PointArgs[18] := @A19;
  PointArgs[19] := @A20;
  PointArgs[20] := @A21;
  Handler;
  if OrigCall and (MethodDefault.Code <> nil) then
    TTestCallVarArgs(MethodDefault)(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10,
      A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21);
end;

Procedure TBaseEvent.EventCall22;
begin
  PointArgs[0] := @A1;
  PointArgs[1] := @A2;
  PointArgs[2] := @A3;
  PointArgs[3] := @A4;
  PointArgs[4] := @A5;
  PointArgs[5] := @A6;
  PointArgs[6] := @A7;
  PointArgs[7] := @A8;
  PointArgs[8] := @A9;
  PointArgs[9] := @A10;
  PointArgs[10] := @A11;
  PointArgs[11] := @A12;
  PointArgs[12] := @A13;
  PointArgs[13] := @A14;
  PointArgs[14] := @A15;
  PointArgs[15] := @A16;
  PointArgs[16] := @A17;
  PointArgs[17] := @A18;
  PointArgs[18] := @A19;
  PointArgs[19] := @A20;
  PointArgs[20] := @A21;
  PointArgs[21] := @A22;
  Handler;
  if OrigCall and (MethodDefault.Code <> nil) then
    TTestCallVarArgs(MethodDefault)(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10,
      A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22);
end;

Procedure TBaseEvent.EventCall23;
begin
  PointArgs[0] := @A1;
  PointArgs[1] := @A2;
  PointArgs[2] := @A3;
  PointArgs[3] := @A4;
  PointArgs[4] := @A5;
  PointArgs[5] := @A6;
  PointArgs[6] := @A7;
  PointArgs[7] := @A8;
  PointArgs[8] := @A9;
  PointArgs[9] := @A10;
  PointArgs[10] := @A11;
  PointArgs[11] := @A12;
  PointArgs[12] := @A13;
  PointArgs[13] := @A14;
  PointArgs[14] := @A15;
  PointArgs[15] := @A16;
  PointArgs[16] := @A17;
  PointArgs[17] := @A18;
  PointArgs[18] := @A19;
  PointArgs[19] := @A20;
  PointArgs[20] := @A21;
  PointArgs[21] := @A22;
  PointArgs[22] := @A23;
  Handler;
  if OrigCall and (MethodDefault.Code <> nil) then
    TTestCallVarArgs(MethodDefault)(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10,
      A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23);
end;

Procedure TBaseEvent.EventCall24;
begin
  PointArgs[0] := @A1;
  PointArgs[1] := @A2;
  PointArgs[2] := @A3;
  PointArgs[3] := @A4;
  PointArgs[4] := @A5;
  PointArgs[5] := @A6;
  PointArgs[6] := @A7;
  PointArgs[7] := @A8;
  PointArgs[8] := @A9;
  PointArgs[9] := @A10;
  PointArgs[10] := @A11;
  PointArgs[11] := @A12;
  PointArgs[12] := @A13;
  PointArgs[13] := @A14;
  PointArgs[14] := @A15;
  PointArgs[15] := @A16;
  PointArgs[16] := @A17;
  PointArgs[17] := @A18;
  PointArgs[18] := @A19;
  PointArgs[19] := @A20;
  PointArgs[20] := @A21;
  PointArgs[21] := @A22;
  PointArgs[22] := @A23;
  PointArgs[23] := @A24;
  Handler;
  if OrigCall and (MethodDefault.Code <> nil) then
    TTestCallVarArgs(MethodDefault)(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10,
      A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24);
end;

Procedure TBaseEvent.EventCall25;
begin
  PointArgs[0] := @A1;
  PointArgs[1] := @A2;
  PointArgs[2] := @A3;
  PointArgs[3] := @A4;
  PointArgs[4] := @A5;
  PointArgs[5] := @A6;
  PointArgs[6] := @A7;
  PointArgs[7] := @A8;
  PointArgs[8] := @A9;
  PointArgs[9] := @A10;
  PointArgs[10] := @A11;
  PointArgs[11] := @A12;
  PointArgs[12] := @A13;
  PointArgs[13] := @A14;
  PointArgs[14] := @A15;
  PointArgs[15] := @A16;
  PointArgs[16] := @A17;
  PointArgs[17] := @A18;
  PointArgs[18] := @A19;
  PointArgs[19] := @A20;
  PointArgs[20] := @A21;
  PointArgs[21] := @A22;
  PointArgs[22] := @A23;
  PointArgs[23] := @A24;
  PointArgs[24] := @A25;
  Handler;
  if OrigCall and (MethodDefault.Code <> nil) then
    TTestCallVarArgs(MethodDefault)(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10,
      A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23,
      A24, A25);
end;

Procedure TBaseEvent.EventCall26;
begin
  PointArgs[0] := @A1;
  PointArgs[1] := @A2;
  PointArgs[2] := @A3;
  PointArgs[3] := @A4;
  PointArgs[4] := @A5;
  PointArgs[5] := @A6;
  PointArgs[6] := @A7;
  PointArgs[7] := @A8;
  PointArgs[8] := @A9;
  PointArgs[9] := @A10;
  PointArgs[10] := @A11;
  PointArgs[11] := @A12;
  PointArgs[12] := @A13;
  PointArgs[13] := @A14;
  PointArgs[14] := @A15;
  PointArgs[15] := @A16;
  PointArgs[16] := @A17;
  PointArgs[17] := @A18;
  PointArgs[18] := @A19;
  PointArgs[19] := @A20;
  PointArgs[20] := @A21;
  PointArgs[21] := @A22;
  PointArgs[22] := @A23;
  PointArgs[23] := @A24;
  PointArgs[24] := @A25;
  PointArgs[25] := @A26;
  Handler;
  if OrigCall and (MethodDefault.Code <> nil) then
    TTestCallVarArgs(MethodDefault)(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10,
      A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24,
      A25, A26);
end;

Procedure TBaseEvent.EventCall27;
begin
  PointArgs[0] := @A1;
  PointArgs[1] := @A2;
  PointArgs[2] := @A3;
  PointArgs[3] := @A4;
  PointArgs[4] := @A5;
  PointArgs[5] := @A6;
  PointArgs[6] := @A7;
  PointArgs[7] := @A8;
  PointArgs[8] := @A9;
  PointArgs[9] := @A10;
  PointArgs[10] := @A11;
  PointArgs[11] := @A12;
  PointArgs[12] := @A13;
  PointArgs[13] := @A14;
  PointArgs[14] := @A15;
  PointArgs[15] := @A16;
  PointArgs[16] := @A17;
  PointArgs[17] := @A18;
  PointArgs[18] := @A19;
  PointArgs[19] := @A20;
  PointArgs[20] := @A21;
  PointArgs[21] := @A22;
  PointArgs[22] := @A23;
  PointArgs[23] := @A24;
  PointArgs[24] := @A25;
  PointArgs[25] := @A26;
  PointArgs[26] := @A27;
  Handler;
  if OrigCall and (MethodDefault.Code <> nil) then
    TTestCallVarArgs(MethodDefault)(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10,
      A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25,
      A26, A27);
end;

Procedure TBaseEvent.EventCall28;
begin
  PointArgs[0] := @A1;
  PointArgs[1] := @A2;
  PointArgs[2] := @A3;
  PointArgs[3] := @A4;
  PointArgs[4] := @A5;
  PointArgs[5] := @A6;
  PointArgs[6] := @A7;
  PointArgs[7] := @A8;
  PointArgs[8] := @A9;
  PointArgs[9] := @A10;
  PointArgs[10] := @A11;
  PointArgs[11] := @A12;
  PointArgs[12] := @A13;
  PointArgs[13] := @A14;
  PointArgs[14] := @A15;
  PointArgs[15] := @A16;
  PointArgs[16] := @A17;
  PointArgs[17] := @A18;
  PointArgs[18] := @A19;
  PointArgs[19] := @A20;
  PointArgs[20] := @A21;
  PointArgs[21] := @A22;
  PointArgs[22] := @A23;
  PointArgs[23] := @A24;
  PointArgs[24] := @A25;
  PointArgs[25] := @A26;
  PointArgs[26] := @A27;
  PointArgs[27] := @A28;
  Handler;;
  if OrigCall and (MethodDefault.Code <> nil) then
    TTestCallVarArgs(MethodDefault)(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10,
      A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25,
      A26, A27, A28);
end;

Procedure TBaseEvent.EventCall29;
begin
  PointArgs[0] := @A1;
  PointArgs[1] := @A2;
  PointArgs[2] := @A3;
  PointArgs[3] := @A4;
  PointArgs[4] := @A5;
  PointArgs[5] := @A6;
  PointArgs[6] := @A7;
  PointArgs[7] := @A8;
  PointArgs[8] := @A9;
  PointArgs[9] := @A10;
  PointArgs[10] := @A11;
  PointArgs[11] := @A12;
  PointArgs[12] := @A13;
  PointArgs[13] := @A14;
  PointArgs[14] := @A15;
  PointArgs[15] := @A16;
  PointArgs[16] := @A17;
  PointArgs[17] := @A18;
  PointArgs[18] := @A19;
  PointArgs[19] := @A20;
  PointArgs[20] := @A21;
  PointArgs[21] := @A22;
  PointArgs[22] := @A23;
  PointArgs[23] := @A24;
  PointArgs[24] := @A25;
  PointArgs[25] := @A26;
  PointArgs[26] := @A27;
  PointArgs[27] := @A28;
  PointArgs[28] := @A29;
  Handler;
  if OrigCall and (MethodDefault.Code <> nil) then
    TTestCallVarArgs(MethodDefault)(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10,
      A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25,
      A26, A27, A28, A29);
end;

Procedure TBaseEvent.EventCall30;
begin
  PointArgs[0] := @A1;
  PointArgs[1] := @A2;
  PointArgs[2] := @A3;
  PointArgs[3] := @A4;
  PointArgs[4] := @A5;
  PointArgs[5] := @A6;
  PointArgs[6] := @A7;
  PointArgs[7] := @A8;
  PointArgs[8] := @A9;
  PointArgs[9] := @A10;
  PointArgs[10] := @A11;
  PointArgs[11] := @A12;
  PointArgs[12] := @A13;
  PointArgs[13] := @A14;
  PointArgs[14] := @A15;
  PointArgs[15] := @A16;
  PointArgs[16] := @A17;
  PointArgs[17] := @A18;
  PointArgs[18] := @A19;
  PointArgs[19] := @A20;
  PointArgs[20] := @A21;
  PointArgs[21] := @A22;
  PointArgs[22] := @A23;
  PointArgs[23] := @A24;
  PointArgs[24] := @A25;
  PointArgs[25] := @A26;
  PointArgs[26] := @A27;
  PointArgs[27] := @A28;
  PointArgs[28] := @A29;
  PointArgs[29] := @A30;
  Handler;
  if OrigCall and (MethodDefault.Code <> nil) then
    TTestCallVarArgs(MethodDefault)(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10,
      A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25,
      A26, A27, A28, A29, A30);
end;

Procedure TBaseEvent.EventCall31;
begin
  PointArgs[0] := @A1;
  PointArgs[1] := @A2;
  PointArgs[2] := @A3;
  PointArgs[3] := @A4;
  PointArgs[4] := @A5;
  PointArgs[5] := @A6;
  PointArgs[6] := @A7;
  PointArgs[7] := @A8;
  PointArgs[8] := @A9;
  PointArgs[9] := @A10;
  PointArgs[10] := @A11;
  PointArgs[11] := @A12;
  PointArgs[12] := @A13;
  PointArgs[13] := @A14;
  PointArgs[14] := @A15;
  PointArgs[15] := @A16;
  PointArgs[16] := @A17;
  PointArgs[17] := @A18;
  PointArgs[18] := @A19;
  PointArgs[19] := @A20;
  PointArgs[20] := @A21;
  PointArgs[21] := @A22;
  PointArgs[22] := @A23;
  PointArgs[23] := @A24;
  PointArgs[24] := @A25;
  PointArgs[25] := @A26;
  PointArgs[26] := @A27;
  PointArgs[27] := @A28;
  PointArgs[28] := @A29;
  PointArgs[29] := @A30;
  PointArgs[30] := @A31;
  Handler;
  if OrigCall and (MethodDefault.Code <> nil) then
    TTestCallVarArgs(MethodDefault)(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10,
      A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25,
      A26, A27, A28, A29, A30, A31);
end;

Procedure TBaseEvent.EventCall32;
begin
  PointArgs[0] := @A1;
  PointArgs[1] := @A2;
  PointArgs[2] := @A3;
  PointArgs[3] := @A4;
  PointArgs[4] := @A5;
  PointArgs[5] := @A6;
  PointArgs[6] := @A7;
  PointArgs[7] := @A8;
  PointArgs[8] := @A9;
  PointArgs[9] := @A10;
  PointArgs[10] := @A11;
  PointArgs[11] := @A12;
  PointArgs[12] := @A13;
  PointArgs[13] := @A14;
  PointArgs[14] := @A15;
  PointArgs[15] := @A16;
  PointArgs[16] := @A17;
  PointArgs[17] := @A18;
  PointArgs[18] := @A19;
  PointArgs[19] := @A20;
  PointArgs[20] := @A21;
  PointArgs[21] := @A22;
  PointArgs[22] := @A23;
  PointArgs[23] := @A24;
  PointArgs[24] := @A25;
  PointArgs[25] := @A26;
  PointArgs[26] := @A27;
  PointArgs[27] := @A28;
  PointArgs[28] := @A29;
  PointArgs[29] := @A30;
  PointArgs[30] := @A31;
  PointArgs[31] := @A32;
  Handler;
  if OrigCall and (MethodDefault.Code <> nil) then
    TTestCallVarArgs(MethodDefault)(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10,
      A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25,
      A26, A27, A28, A29, A30, A31, A32);
end;

Procedure TBaseEvent.EventCall33;
begin
  PointArgs[0] := @A1;
  PointArgs[1] := @A2;
  PointArgs[2] := @A3;
  PointArgs[3] := @A4;
  PointArgs[4] := @A5;
  PointArgs[5] := @A6;
  PointArgs[6] := @A7;
  PointArgs[7] := @A8;
  PointArgs[8] := @A9;
  PointArgs[9] := @A10;
  PointArgs[10] := @A11;
  PointArgs[11] := @A12;
  PointArgs[12] := @A13;
  PointArgs[13] := @A14;
  PointArgs[14] := @A15;
  PointArgs[15] := @A16;
  PointArgs[16] := @A17;
  PointArgs[17] := @A18;
  PointArgs[18] := @A19;
  PointArgs[19] := @A20;
  PointArgs[20] := @A21;
  PointArgs[21] := @A22;
  PointArgs[22] := @A23;
  PointArgs[23] := @A24;
  PointArgs[24] := @A25;
  PointArgs[25] := @A26;
  PointArgs[26] := @A27;
  PointArgs[27] := @A28;
  PointArgs[28] := @A29;
  PointArgs[29] := @A30;
  PointArgs[30] := @A31;
  PointArgs[31] := @A32;
  PointArgs[32] := @A33;
  Handler;
  if OrigCall and (MethodDefault.Code <> nil) then
    TTestCallVarArgs(MethodDefault)(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10,
      A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25,
      A26, A27, A28, A29, A30, A31, A32, A33);
end;

Procedure TBaseEvent.EventCall34;
begin
  PointArgs[0] := @A1;
  PointArgs[1] := @A2;
  PointArgs[2] := @A3;
  PointArgs[3] := @A4;
  PointArgs[4] := @A5;
  PointArgs[5] := @A6;
  PointArgs[6] := @A7;
  PointArgs[7] := @A8;
  PointArgs[8] := @A9;
  PointArgs[9] := @A10;
  PointArgs[10] := @A11;
  PointArgs[11] := @A12;
  PointArgs[12] := @A13;
  PointArgs[13] := @A14;
  PointArgs[14] := @A15;
  PointArgs[15] := @A16;
  PointArgs[16] := @A17;
  PointArgs[17] := @A18;
  PointArgs[18] := @A19;
  PointArgs[19] := @A20;
  PointArgs[20] := @A21;
  PointArgs[21] := @A22;
  PointArgs[22] := @A23;
  PointArgs[23] := @A24;
  PointArgs[24] := @A25;
  PointArgs[25] := @A26;
  PointArgs[26] := @A27;
  PointArgs[27] := @A28;
  PointArgs[28] := @A29;
  PointArgs[29] := @A30;
  PointArgs[30] := @A31;
  PointArgs[31] := @A32;
  PointArgs[32] := @A33;
  PointArgs[33] := @A34;
  Handler;
  if OrigCall and (MethodDefault.Code <> nil) then
    TTestCallVarArgs(MethodDefault)(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10,
      A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25,
      A26, A27, A28, A29, A30, A31, A32, A33, A34);
end;

Procedure TBaseEvent.EventCall35;
begin
  PointArgs[0] := @A1;
  PointArgs[1] := @A2;
  PointArgs[2] := @A3;
  PointArgs[3] := @A4;
  PointArgs[4] := @A5;
  PointArgs[5] := @A6;
  PointArgs[6] := @A7;
  PointArgs[7] := @A8;
  PointArgs[8] := @A9;
  PointArgs[9] := @A10;
  PointArgs[10] := @A11;
  PointArgs[11] := @A12;
  PointArgs[12] := @A13;
  PointArgs[13] := @A14;
  PointArgs[14] := @A15;
  PointArgs[15] := @A16;
  PointArgs[16] := @A17;
  PointArgs[17] := @A18;
  PointArgs[18] := @A19;
  PointArgs[19] := @A20;
  PointArgs[20] := @A21;
  PointArgs[21] := @A22;
  PointArgs[22] := @A23;
  PointArgs[23] := @A24;
  PointArgs[24] := @A25;
  PointArgs[25] := @A26;
  PointArgs[26] := @A27;
  PointArgs[27] := @A28;
  PointArgs[28] := @A29;
  PointArgs[29] := @A30;
  PointArgs[30] := @A31;
  PointArgs[31] := @A32;
  PointArgs[32] := @A33;
  PointArgs[33] := @A34;
  PointArgs[34] := @A35;
  Handler;
  if OrigCall and (MethodDefault.Code <> nil) then
    TTestCallVarArgs(MethodDefault)(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10,
      A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25,
      A26, A27, A28, A29, A30, A31, A32, A33, A34, A35);
end;

Procedure TBaseEvent.EventCall36;
begin
  PointArgs[0] := @A1;
  PointArgs[1] := @A2;
  PointArgs[2] := @A3;
  PointArgs[3] := @A4;
  PointArgs[4] := @A5;
  PointArgs[5] := @A6;
  PointArgs[6] := @A7;
  PointArgs[7] := @A8;
  PointArgs[8] := @A9;
  PointArgs[9] := @A10;
  PointArgs[10] := @A11;
  PointArgs[11] := @A12;
  PointArgs[12] := @A13;
  PointArgs[13] := @A14;
  PointArgs[14] := @A15;
  PointArgs[15] := @A16;
  PointArgs[16] := @A17;
  PointArgs[17] := @A18;
  PointArgs[18] := @A19;
  PointArgs[19] := @A20;
  PointArgs[20] := @A21;
  PointArgs[21] := @A22;
  PointArgs[22] := @A23;
  PointArgs[23] := @A24;
  PointArgs[24] := @A25;
  PointArgs[25] := @A26;
  PointArgs[26] := @A27;
  PointArgs[27] := @A28;
  PointArgs[28] := @A29;
  PointArgs[29] := @A30;
  PointArgs[30] := @A31;
  PointArgs[31] := @A32;
  PointArgs[32] := @A33;
  PointArgs[33] := @A34;
  PointArgs[34] := @A35;
  PointArgs[35] := @A36;
  Handler;

  if OrigCall and (MethodDefault.Code <> nil) then
    TTestCallVarArgs(MethodDefault)(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10,
      A11, A12, A13, A14, A15, A16, A17, A18, A19, A20, A21, A22, A23, A24, A25,
      A26, A27, A28, A29, A30, A31, A32, A33, A34, A35, A36);
end;

initialization

EventHookObject := TEventHook.Create;

finalization

EventHookObject.Destroy;

end.
