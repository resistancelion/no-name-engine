unit WPD.Classes;

interface
  Uses Classes, Generics.Collections;
function RegisterClassAlias(ClassName: TPersistentClass; Alias: TPersistentClass): Boolean; overload;
function RegisterClassAlias(ClassName: String; Alias: String): Boolean; overload;
function GetClass(ClassName: String): TPersistentClass;
{$ifdef fpc}
var
  ListClassAlias: specialize TDictionary<String, String>;
{$else}
var
  ListClassAlias: TDictionary<String, String>;
{$endif}
implementation

function RegisterClassAlias(ClassName: TPersistentClass; Alias: TPersistentClass): Boolean; overload;
var tmp: String;
begin
  Result := True;
  if not ListClassAlias.TryGetValue(ClassName.ClassName, tmp) then
    ListClassAlias.Add(ClassName.ClassName, Alias.ClassName)
  else
    Result := False;
end;

function RegisterClassAlias(ClassName: String; Alias:String): Boolean; overload;
var tmp: String;
begin
  Result := True;
  if not ListClassAlias.TryGetValue(ClassName, tmp) then
    ListClassAlias.Add(ClassName, Alias)
  else
    Result := False;
end;

function GetClass(ClassName: String): TPersistentClass;
var tmp: String;
begin
  if ListClassAlias.TryGetValue(ClassName, tmp) then
    ClassName := tmp;

  Result := Classes.GetClass(ClassName);
end;

Initialization
  {$IFDEF fpc}
  ListClassAlias := specialize TDictionary<String, String>.Create;
  {$ELSE}
  ListClassAlias := TDictionary<String,String>.Create;
  {$ENDIF}

Finalization
  ListClassAlias.Destroy;
end.
