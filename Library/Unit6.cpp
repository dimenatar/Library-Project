//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit6.h"
#include "Unit9.h"
#include "Unit7.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm6 *Form6;
int id = 1;
int KolTop = 0;
int KolStroc = 0;
bool NetBooks = false;
//---------------------------------------------------------------------------
__fastcall TForm6::TForm6(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm6::FormActivate(TObject *Sender)
{
ADOQuery1->Active = true;
 Form6->BorderStyle = bsNone;
 Edit1->SetFocus();
 KolStroc = DataSource1->DataSet->RecordCount;
 KolTop = 0;
 if (Top->Text == "Top 3" && KolStroc>=3)
 {
	KolTop = 2;
 }
 else  if (Top->Text == "Top 5"&& KolStroc>=5)
 {
	KolTop = 4;
 }
 else if (Top->Text == "Top 10"&& KolStroc>=10)
 {
	KolTop = 9;
 }
 else NetBooks = true;
 if (!NetBooks)
 {


 Page2->Caption = KolTop+1;



ADOQuery1->First();
ADOQuery1->Next();
ADOQuery1->Prior();
id = 1;
CoverBook->Picture->LoadFromFile(GetCurrentDir() + "\\" + ADOQuery1->Fields->FieldByName("Number")->AsInteger +".jpg");
	BookName->Caption = ADOQuery1->Fields->FieldByName("BookName")->AsString;
	BookGenre->Caption = ADOQuery1->Fields->FieldByName("Genre")->AsString;
	BookAuthor->Caption = ADOQuery1->Fields->FieldByName("Author")->AsString;
	BookRating->Caption = ADOQuery1->Fields->FieldByName("Rating")->AsInteger;

Page->Caption = IntToStr(id);
Page1->Caption = "/";
 }
 else ShowMessage ("The amount of books is lower then required!");
}
//---------------------------------------------------------------------------
void __fastcall TForm6::TopKeyPress(TObject *Sender, System::WideChar &Key)

{
Key = 0;
}
//---------------------------------------------------------------------------
void __fastcall TForm6::Image1Click(TObject *Sender)
{
if (id <=KolTop)
{

	ADOQuery1->Next();
	id++;
	CoverBook->Picture->LoadFromFile(GetCurrentDir() + "\\" + ADOQuery1->Fields->FieldByName("Number")->AsInteger +".jpg");
	BookName->Caption = ADOQuery1->Fields->FieldByName("BookName")->AsString;
	BookGenre->Caption = ADOQuery1->Fields->FieldByName("Genre")->AsString;
	BookAuthor->Caption = ADOQuery1->Fields->FieldByName("Author")->AsString;
	BookRating->Caption = ADOQuery1->Fields->FieldByName("Rating")->AsInteger;

	Page->Caption = IntToStr(id);
	Page1->Caption = "/";
	Page2->Caption = KolTop+1;


}
}
//---------------------------------------------------------------------------
void __fastcall TForm6::Image4Click(TObject *Sender)
{
if (id >  1)
{

	ADOQuery1->Prior();
	id--;
	CoverBook->Picture->LoadFromFile(GetCurrentDir() + "\\" + ADOQuery1->Fields->FieldByName("Number")->AsInteger +".jpg");
	BookName->Caption = ADOQuery1->Fields->FieldByName("BookName")->AsString;
	BookGenre->Caption = ADOQuery1->Fields->FieldByName("Genre")->AsString;
	BookAuthor->Caption = ADOQuery1->Fields->FieldByName("Author")->AsString;
	BookRating->Caption = ADOQuery1->Fields->FieldByName("Rating")->AsInteger;

	Page->Caption = IntToStr(id);
	Page1->Caption = "/";
	Page2->Caption = KolTop+1;


}
}
//---------------------------------------------------------------------------
void __fastcall TForm6::TopChange(TObject *Sender)
{
  KolTop = 0;
 if (Top->Text == "Top 3" && KolStroc>=3)
 {
	KolTop = 2;
 }
 else  if (Top->Text == "Top 5"&& KolStroc>=5)
 {
	KolTop = 4;
 }
 else if (Top->Text == "Top 10"&& KolStroc>=10)
 {
	KolTop = 9;
 }
 else  NetBooks = true;
 if (!NetBooks)
 {


 Page2->Caption = KolTop+1;



 ADOQuery1->First();
id = 1;
CoverBook->Picture->LoadFromFile(GetCurrentDir() + "\\" + ADOQuery1->Fields->FieldByName("Number")->AsInteger +".jpg");
	BookName->Caption = ADOQuery1->Fields->FieldByName("BookName")->AsString;
	BookGenre->Caption = ADOQuery1->Fields->FieldByName("Genre")->AsString;
	BookAuthor->Caption = ADOQuery1->Fields->FieldByName("Author")->AsString;
	BookRating->Caption = ADOQuery1->Fields->FieldByName("Rating")->AsInteger;

Page->Caption = IntToStr(id);
Page1->Caption = "/";
 }
 else ShowMessage ("The amount of books is lower then required!");
}
//---------------------------------------------------------------------------
void __fastcall TForm6::BackClick(TObject *Sender)
{
Form6->Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm6::Edit1Click(TObject *Sender)
{
ShowMessage ("There is nothing here!!\n Get the fuck out your cursor >:(");
}
//---------------------------------------------------------------------------

void __fastcall TForm6::BackMouseEnter(TObject *Sender)
{
Back->Picture->LoadFromFile(GetCurrentDir() + "\\BackButtonMouse.png");
}
//---------------------------------------------------------------------------

void __fastcall TForm6::BackMouseLeave(TObject *Sender)
{
Back->Picture->LoadFromFile(GetCurrentDir() + "\\BackButton.png");
}
//---------------------------------------------------------------------------

void __fastcall TForm6::ChangeThemeMouseLeave(TObject *Sender)
{
 ChangeTheme->Picture->LoadFromFile(GetCurrentDir()+ "\\ChangeTheme.png");
}
//---------------------------------------------------------------------------


void __fastcall TForm6::ChangeThemeMouseEnter(TObject *Sender)
{
ChangeTheme->Picture->LoadFromFile(GetCurrentDir()+ "\\ChangeThemeMouse.png");
}
//---------------------------------------------------------------------------

void __fastcall TForm6::ChangeThemeClick(TObject *Sender)
{
Top_Check->Checked = true;
Form7->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm6::FormClose(TObject *Sender, TCloseAction &Action)
{
	Form7->First->Checked =false;
	Form7->Sec->Checked =false;
	Form7->Third->Checked =false;
	Form7->Fourth->Checked =false;
}
//---------------------------------------------------------------------------

