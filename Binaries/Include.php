<?php

Use \DClass\FMX\ {
	Types\TFMXObject,
	Forms\TApplication,
	Forms\TForm,
	StdCtrls\TButton,
	Memo\TMemo
};

function pre(...$a) {
	if(count($a) == 1) $a = $a[0];
	Message(print_r($a, true));
}
$Application = new TApplication([NULL]);
$Application->Initialize();
$Form = new TForm([NULL]);
$Form->Position = 'poScreenCenter';
$Form->Visible = true;
$Form->Width = 550;
$Form->Height = 500;
$Form->Caption = "🐆🐆🐆 .-=WPD=-. 🐆🐆🐆";
$Form->Name = "Frm";
$ab = new TButton($Form);
$ab->Name = "cli";
$ab->Parent = $Form;
$ab->Width = 200;
$ab->Height = 25;
$ab->Align = 'alTop';
$ab->RotationAngle = 35;
$bb = new TButton($Form);
$bb->Parent = $Form;
$bb->Position->x = 50;
$bb->Align = "alLeft";
$bb->Text = "test";
$bb->Width = 25;
$SynEdit = new TMemo($Form);
$SynEdit->Name = 'SynEdit1';
$Form2 = new TForm([NULL]);
$bb->OnClick = function($self) use($Form2)
{
	$Form2->Show();
};
$Form2->Position = 'poScreenCenter';
$Form2->Width = 550;
$Form2->Height = 500;
$Form2->Caption = ".-=Engine Test=-.";
$Form2->Name = "Frm2";

$ts = 
[
	[	
		"Functions",
		function($ths) 
		{
			pre( get_extension_funcs('wpd') );
			file_put_contents('classes.list', print_r(get_declared_classes(),true) );
		}
	],
	[	
		"Utf-8",
		function($ths) use($Form)
		{
			pre( "Unicode works in both directions, it can be transfered from the engine\r\nProof:" /*+*/. $Form->Caption );
			pre('Ыы ыыы ыЫ');
			pre('🐆🐆');
		}
	],
	[	
		"Test()",
		function($ths)
		{
			pre( test() == "🐆🐆🐆 .-=WPD=-. 🐆🐆🐆" );
		}
	],
];
foreach( $ts as $i=>$_ts )
{
	$ts_button = new TButton($Form2);
	$ts_button->Name = "bt_" . $i;
	$ts_button->Parent = $Form2;
	$ts_button->Text = $_ts[0];
	$ts_button->Width = 250;
	$ts_button->Height = 25;
	$ts_button->OnClick = $_ts[1];
	$ts_button->Position->X = (($i+1) % 2 == 0)? 255: 0;
	$ts_button->Position->Y = (($i+1) % 2 == 0)? ((($i+1) / 2)-1) * 30: $i * 15;
}

$ab->onClick = function($ths) use($Form2,$SynEdit)
{
	pre('Line Number:	' . __LINE__ , $SynEdit->selText);
};
$SynEdit->Parent = $Form;
$SynEdit->Align = 'alClient';
$SynEdit->TextSettings->FontColor = 14342874;
$SynEdit->TextSettings->Font->Size = 10;
$SynEdit->TextSettings->Font->Family = 'Consolas';

$SynEdit->text = file_get_contents(__FILE__);



$Application->run();