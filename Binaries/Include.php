<?php

Use \DClass\Vcl\ {
	Forms\TApplication,
	Forms\TForm,
	StdCtrls\TButton,
	StdCtrls\TMemo
};
Use \DClass\System\TObject;
Use \DClass\SynEdit\TSynEdit;
Use \DClass\SynHighlighterPHP\TSynPHPSyn;

USE \DClass\sSkinManager\TsSkinManager;
USE \DClass\sSkinProvider\TsSkinProvider;

function pre(...$a) {
	if(count($a) == 1) $a = $a[0];
	Message(print_r($a, true));
}

$Application = new TApplication([NULL]);
$Application->Initialize();
$Application->MainFormOnTaskBar = true;

$Form = new TForm(TObject::DOwnerSelf());
$Application->CreateForm(TForm::AsInstance()->MetaClassType, $Form);

$Form->Caption = 'Моя форма';

$SynEdit = new TSynEdit($Form);
$SynEdit->Name = 'SynEdit1';

$SynEdit->onClick = function($self) {
	pre('Сообщение на строке: ' . __LINE__ , $self->selText);
};


$SynEdit->Options = '[eoAltSetsColumnMode,eoAutoIndent,
    eoAutoSizeMaxScrollWidth,eoDisableScrollArrows,eoDragDropEditing,
    eoEnhanceHomeKey,eoEnhanceEndKey,eoGroupUndo,eoHalfPageScroll,
    eoHideShowScrollbars,eoRightMouseMovesCursor,eoScrollPastEof,
    eoShowScrollHint,eoSmartTabDelete,eoTabIndent,
    eoTabsToSpaces,eoTrimTrailingSpaces]';


$SynEdit->Parent = $Form;
$SynEdit->Align = 'alClient';
$SynEdit->ActiveLineColor = 986895;
$SynEdit->BorderStyle = 'bsNone';
$SynEdit->Color = 1973790;
$SynEdit->Gutter->Color = 1973790;
$SynEdit->Gutter->BorderColor = 4605510;
$SynEdit->Gutter->Font->Color = 6579300;
$SynEdit->Gutter->Font->Size = 10;
$SynEdit->Gutter->Font->Name = 'Consolas';
$SynEdit->Gutter->LeftOffset = 10;
$SynEdit->Gutter->RightOffset = 4;
$SynEdit->Gutter->ShowLineNumbers = True;
$SynEdit->Font->Color = 14342874;
$SynEdit->Font->Size = 10;
$SynEdit->Font->Name = 'Consolas';

$SynEdit->Highlighter = new TSynPHPSyn($Form);
$SynEdit->Highlighter->CommentAttri->Foreground = 4892247;
$SynEdit->Highlighter->KeyAttri->Foreground = 15181656;
$SynEdit->Highlighter->NumberAttri->Foreground = 11585861;
$SynEdit->Highlighter->StringAttri->Foreground = 0x1AC9EC;
$SynEdit->Highlighter->VariableAttri->Foreground = 0x36EC1A;

$SynEdit->RightEdgeColor = 4605510;
$SynEdit->SelectedColor->Background = 0x2211CC;
$SynEdit->SelectedColor->Foreground = 16777215;
$SynEdit->TabWidth = 4;
$SynEdit->WantTabs = True;


$SynEdit->text = file_get_contents(__FILE__);



$Application->run();