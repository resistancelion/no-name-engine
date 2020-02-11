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
$SynEdit = new TMemo($Form);
$SynEdit->Name = 'SynEdit1';
$Form2 = new TForm([NULL]);
$Form2->Position = 'poScreenCenter';
$Form2->Width = 550;
$Form2->Height = 500;
$Form2->Caption = ".-=Engine Test=-.";
$Form2->Name = "Frm2";
$b2 = new TButton($Form2);
$b2->Name = "bt2";
$b2->Parent = $Form2;
$b2->Text = "Functions";
$b2->Width = 250;
$b2->Height = 25;
$b2->OnClick = function($ths) 
{
	pre( get_extension_funcs('wpd') );
	file_put_contents('classes.list', print_r(get_declared_classes(),true) );
};
$b3 = new TButton($Form2);
$b3->Name = "bt3";
$b3->Parent = $Form2;
$b3->Text = "Utf-8";
$b3->Position->x = 255;
$b3->Width = 250;
$b3->Height = 25;
$b3->OnClick = function($ths) use($Form)
{
	pre( "However, unicode is still cannot be transefered from engine, :(\r\nProof:" /*+*/. $Form->Caption );
	pre('Ыы ыыы ыЫ');
	pre('🐆🐆');
};
$ab->onClick = function($ths) use($Form2,$SynEdit)
{
	pre('Line Number:	' . __LINE__ , $SynEdit->selText);
		$Form2->Show();
};
$SynEdit->Parent = $Form;
$SynEdit->Align = 'alClient';
$SynEdit->TextSettings->FontColor = 14342874;
$SynEdit->TextSettings->Font->Size = 10;
$SynEdit->TextSettings->Font->Family = 'Consolas';

$SynEdit->text = file_get_contents(__FILE__);



$Application->run();