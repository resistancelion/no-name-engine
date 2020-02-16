{$DEFINE FMX} {Possible values: FMX, CLI, VCL}
// Used for internals only
{$ifndef fpc}
	{$if Defined(CONSOLE) or Declared(CONSOLE)}
		{$DEFINE CLI}
	{$elseif defined(FireMonkeyVersion) or declared(FireMonkeyVersion) or not defined(MSWINDOWS)}
		{$DEFINE FMX}
  {$elseif FMX.Types.FireMonkeyVersion >= 0}
    {$DEFINE FMX}
  {$else}
		{$DEFINE VCL}
	{$endif}
{$endif}
{$DEFINE PHP_EDITED}