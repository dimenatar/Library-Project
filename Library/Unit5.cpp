//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit5.h"
#include "Unit1.h"
#include "Unit9.h"
#include "Unit3.h"
#include "Unit7.h";
bool IsBooksInTable = false;
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm5 *Form5;
int id = 1;
int UserBookCount = 0;

//---------------------------------------------------------------------------
__fastcall TForm5::TForm5(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm5::FormActivate(TObject *Sender)
{
     ADOTable1->Active = true;
     ADOTable2->Active = true;
    Form5->BorderStyle = bsNone;
	id = 1;
	UserBookCount = 0;
	ADOTable2->First();
while (!ADOTable2->Eof)
	{
		if (ADOTable2->FieldByName("UserName")->AsString==Form9->StaticText1->Caption)
		{
		   UserBookCount++;
		}
		ADOTable2->Next();
	}
IsBooksInTable = false;
   ADOTable1->First();
   while (!ADOTable1->Eof)
	   {
		   if (ADOTable1->FieldByName("UserName")->AsString == Form9->StaticText1->Caption)
		   {
			 IsBooksInTable = true;

		   }
		   ADOTable1->Next();
	   }
  if (IsBooksInTable)
  {
	ADOTable1->First();
	while (!ADOTable1->Eof)
	{

	   if (ADOTable1->FieldByName("UserName")->AsString == Form9->StaticText1->Caption);
	   {
		 //id = ADOTable1->FieldByName("Number")->AsInteger;
		 break;

	   }
	   ADOTable1->Next();

	}
    CoverBook->Picture->LoadFromFile(GetCurrentDir() + "\\" + ADOTable1->FieldByName("Number")->AsInteger +".jpg");
	BookAuthor->Caption = ADOTable1->FieldByName("Author")->AsString;
	BookGenre->Caption = ADOTable1->FieldByName("Genre")->AsString;
	BookName->Caption = ADOTable1->FieldByName("BookName")->AsString;
	BookRating->Caption = ADOTable1->FieldByName("DateOfAdd")->AsString;

	Page->Caption = "1";
	Page1->Caption = "/";
	Page2->Caption = IntToStr(UserBookCount);
	Attention->Visible = false;
	Author->Visible = true;
	Genre->Visible = true;
	Name->Visible = true;
	Rating->Visible = true;
	BookAuthor->Visible = true;
	BookGenre->Visible = true;
	BookName->Visible = true;
	BookRating->Visible = true;
	CoverBook ->Visible = true;
	Next->Visible = true;
	Prev->Visible = true;
	Page->Visible = true;
	Page1->Visible = true;
	Page2->Visible = true;


  }
  else
  {
	Attention->Visible = true;
	Author->Visible = false;
	Genre->Visible = false;
	Name->Visible = false;
	Rating->Visible = false;
	BookAuthor->Visible = false;
	BookGenre->Visible = false;
	BookName->Visible = false;
	BookRating->Visible = false;
	CoverBook ->Visible = false;
	Next->Visible = false;
	Prev->Visible = false;
	Page->Visible = false;
	Page1->Visible = false;
	Page2->Visible = false;
  }
}
//---------------------------------------------------------------------------
void __fastcall TForm5::FormClose(TObject *Sender, TCloseAction &Action)
{
	Author->Visible = false;
	Genre->Visible = false;
	Name->Visible = false;
	Rating->Visible = false;
	BookAuthor->Visible = false;
	BookGenre->Visible = false;
	BookName->Visible = false;
	BookRating->Visible = false;
	CoverBook ->Visible = false;
	Next->Visible = false;
	Prev->Visible = false;
	Page->Visible = false;
	Page1->Visible = false;
	Page2->Visible = false;
	Attention->Visible = false;
	Form7->First->Checked =false;
	Form7->Sec->Checked =false;
	Form7->Third->Checked =false;
	Form7->Fourth->Checked =false;

}
//---------------------------------------------------------------------------
void __fastcall TForm5::NextClick(TObject *Sender)
{
	if (id <UserBookCount)
	{
	if (ADOTable1->FieldByName("UserName")->AsString==Form9->StaticText1->Caption)
	{
	id++;
	ADOTable1->Next();

	CoverBook->Picture->LoadFromFile(GetCurrentDir() + "\\" + ADOTable1->FieldByName("Number")->AsInteger +".jpg");
	BookName->Caption = ADOTable1->FieldByName("BookName")->AsString;
	BookGenre->Caption = ADOTable1->FieldByName("Genre")->AsString;
	BookAuthor->Caption = ADOTable1->FieldByName("Author")->AsString;
	BookRating->Caption = ADOTable1->FieldByName("DateOfAdd")->AsString;

	Page->Caption = IntToStr(id);
	Page1->Caption = "/";
	Page2->Caption = IntToStr(UserBookCount);
	}

	else
	{
		while (!ADOTable1->Eof)
		{

		if (ADOTable1->FieldByName("UserName")->AsString==Form9->StaticText1->Caption)
		{

		  break;
		}
		 else ADOTable1->Next();
		}
	if (ADOTable1->Eof)
	{
	 return;
	}
			id++;
	ADOTable1->Next();

	CoverBook->Picture->LoadFromFile(GetCurrentDir() + "\\" + ADOTable1->FieldByName("Number")->AsInteger +".jpg");
	BookName->Caption = ADOTable1->FieldByName("BookName")->AsString;
	BookGenre->Caption = ADOTable1->FieldByName("Genre")->AsString;
	BookAuthor->Caption = ADOTable1->FieldByName("Author")->AsString;
	BookRating->Caption = ADOTable1->FieldByName("DateOfAdd")->AsString;

	Page->Caption = IntToStr(id);
	Page1->Caption = "/";
	Page2->Caption = IntToStr(UserBookCount);
	}
	}


}
//---------------------------------------------------------------------------
void __fastcall TForm5::PrevClick(TObject *Sender)
{
if (id > 1)
{

	{
	if (ADOTable1->FieldByName("UserName")->AsString==Form9->StaticText1->Caption)
	{
	id--;
	ADOTable1->Prior();

	CoverBook->Picture->LoadFromFile(GetCurrentDir() + "\\" + ADOTable1->FieldByName("Number")->AsInteger +".jpg");
	BookName->Caption = ADOTable1->FieldByName("BookName")->AsString;
	BookGenre->Caption = ADOTable1->FieldByName("Genre")->AsString;
	BookAuthor->Caption = ADOTable1->FieldByName("Author")->AsString;
	BookRating->Caption = ADOTable1->FieldByName("DateOfAdd")->AsString;

	Page->Caption = IntToStr(id);
	Page1->Caption = "/";
	Page2->Caption = IntToStr(UserBookCount);
	}

	else
	{
		while (!ADOTable1->Eof)
		{

		if (ADOTable1->FieldByName("UserName")->AsString==Form9->StaticText1->Caption)
		{

		  break;
		}
		 else ADOTable1->Prior();
		}
	if (id == 1)
	{
	 return;
	}

			id--;
	ADOTable1->Prior();

	CoverBook->Picture->LoadFromFile(GetCurrentDir() + "\\" + ADOTable1->FieldByName("Number")->AsInteger +".jpg");
	BookName->Caption = ADOTable1->FieldByName("BookName")->AsString;
	BookGenre->Caption = ADOTable1->FieldByName("Genre")->AsString;
	BookAuthor->Caption = ADOTable1->FieldByName("Author")->AsString;
	BookRating->Caption = ADOTable1->FieldByName("DateOfAdd")->AsString;

	Page->Caption = IntToStr(id);
	Page1->Caption = "/";
	Page2->Caption = IntToStr(UserBookCount);
	}
	}
}


}
//---------------------------------------------------------------------------
void __fastcall TForm5::BackClick(TObject *Sender)
{
Form5->Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm5::BackMouseEnter(TObject *Sender)
{
Back->Picture->LoadFromFile(GetCurrentDir() + "\\BackButtonMouse.png");
}
//---------------------------------------------------------------------------

void __fastcall TForm5::BackMouseLeave(TObject *Sender)
{
Back->Picture->LoadFromFile(GetCurrentDir() + "\\BackButton.png");
}
//---------------------------------------------------------------------------

void __fastcall TForm5::ChangeThemeClick(TObject *Sender)
{
Fav_check->Checked = true;
Form7->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm5::ChangeThemeMouseEnter(TObject *Sender)
{
ChangeTheme->Picture->LoadFromFile(GetCurrentDir()+ "\\ChangeThemeMouse.png");
}
//---------------------------------------------------------------------------

void __fastcall TForm5::ChangeThemeMouseLeave(TObject *Sender)
{
 ChangeTheme->Picture->LoadFromFile(GetCurrentDir()+ "\\ChangeTheme.png");
}
//---------------------------------------------------------------------------

