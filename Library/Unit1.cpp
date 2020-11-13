//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit9.h"
#include "Unit10.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit5.h"
#include "Unit6.h"
#include "Unit8.h"
#include "Unit7.h"
#include "Unit11.h"
#include <string>
#include <vector>

extern Login;
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TBase *Base;
//---------------------------------------------------------------------------
__fastcall TBase::TBase(TComponent* Owner)
	: TForm(Owner)
{


}
//---------------------------------------------------------------------------

void __fastcall TBase::FormActivate(TObject *Sender)
{
ADOTable1->Active = true;
Memo1->Clear();
std::vector<String> Quotes;
std::vector<String> BookNames;
std::vector<String> Authors;
Memo1->Lines->LoadFromFile("Quotes.txt");
for (int i =0; i < Memo1->Lines->Count/3; i++)
{
	Quotes.push_back(Memo1->Lines->Strings[i*3]);
	BookNames.push_back(Memo1->Lines->Strings[i*3+1]);
	Authors.push_back(Memo1->Lines->Strings[i*3+2]);
}
int RandNumber = Random(Memo1->Lines->Count/3);

std::vector<String>::iterator iter = Quotes.begin() + RandNumber;
Quote->Caption = *iter;
std::vector<String>::iterator iter1 = BookNames.begin() + RandNumber;
BookName->Caption = *iter1;
std::vector<String>::iterator iter2 = Authors.begin() + RandNumber;
Author->Caption = *iter2;


Base->BorderStyle = bsNone;
Base->WindowState = wsMaximized;
Back->Left = Base->Width-Back->Width;
Back->Top = Base->Height-Back->Height;
Greeting->Caption= "Welcome, dear " + Form9->StaticText1->Caption + "!";
Greeting->Left = Base->Width/2-Greeting->Width/2;

BookName->Left = Base->Width-BookName->Width- 100;
Author->Left = Base->Width-Author->Width-30;
Quote->Font->Size = 1920/Quote->Caption.Length()+1;

ADOTable1->First();
while (!ADOTable1->Eof)
{
	if (ADOTable1->FieldByName("UserName")->AsString == Form9->StaticText1->Caption)
	{
	  break;
	}
	ADOTable1->Next();
}
if (ADOTable1->FieldByName("UserType")->AsString == "admin")
{
	Image1->Visible = true;
}
else Image1->Visible = false;
}
//---------------------------------------------------------------------------




void __fastcall TBase::FormResize(TObject *Sender)
{
Fon->Height = Base->Height;
Fon->Width = Base->Width;
}
//---------------------------------------------------------------------------

void __fastcall TBase::BackClick(TObject *Sender)
{
Base->Close();
}
//---------------------------------------------------------------------------

void __fastcall TBase::MainClick(TObject *Sender)
{
Form3->Show();
}
//---------------------------------------------------------------------------


void __fastcall TBase::FavoritesClick(TObject *Sender)
{
Form5->ShowModal();
}
//---------------------------------------------------------------------------


void __fastcall TBase::PopClick(TObject *Sender)
{
Form6->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TBase::FavoritesMouseEnter(TObject *Sender)
{
if (Def_check->Checked )
{
  Favorites->Picture->LoadFromFile(GetCurrentDir() + "\\MyFavoritesDefMouse.png");
}
else if (Dark_Check->Checked)
	 {
	   Favorites->Picture->LoadFromFile(GetCurrentDir() + "\\MyFavoritesDarkMouse.png");
	 }
	 else
	Favorites->Picture->LoadFromFile(GetCurrentDir() + "\\MyFavoritesMouse.png");
}
//---------------------------------------------------------------------------

void __fastcall TBase::FavoritesMouseLeave(TObject *Sender)
{
if (Def_check->Checked )
{
  Favorites->Picture->LoadFromFile(GetCurrentDir() + "\\MyFavoritesDef.png");
}
else if (Dark_Check->Checked)
	 {
	   Favorites->Picture->LoadFromFile(GetCurrentDir() + "\\MyFavoritesDark.png");
	 }
	 else
	Favorites->Picture->LoadFromFile(GetCurrentDir() + "\\MyFavorites.png");
}
//---------------------------------------------------------------------------

void __fastcall TBase::PopMouseEnter(TObject *Sender)
{
if (Def_check->Checked )
{
	Pop->Picture->LoadFromFile(GetCurrentDir() + "\\TopRatedDefMouse.png");

}
else if (Dark_Check->Checked)
	 {
		Pop->Picture->LoadFromFile(GetCurrentDir() + "\\TopRatedDarkMouse.png");

	 }
	 else
	Pop->Picture->LoadFromFile(GetCurrentDir() + "\\TopRatedMouse.png");

}
//---------------------------------------------------------------------------

void __fastcall TBase::PopMouseLeave(TObject *Sender)
{
if (Def_check->Checked )
{
	Pop->Picture->LoadFromFile(GetCurrentDir() + "\\TopRatedDef.png");

}
else if (Dark_Check->Checked)
	 {
		Pop->Picture->LoadFromFile(GetCurrentDir() + "\\TopRatedDark.png");

	 }
	 else
	Pop->Picture->LoadFromFile(GetCurrentDir() + "\\TopRated.png");
}
//---------------------------------------------------------------------------


void __fastcall TBase::MainMouseLeave(TObject *Sender)
{
if (Def_check->Checked )
{
Main->Picture->LoadFromFile(GetCurrentDir() + "\\MainLibraryDef.png");

}
else if (Dark_Check->Checked)
	 {
		Main->Picture->LoadFromFile(GetCurrentDir() + "\\MainLibraryDark.png");

	 }
	 else
	Main->Picture->LoadFromFile(GetCurrentDir() + "\\MainLibrary.png");
}
//---------------------------------------------------------------------------

void __fastcall TBase::MainMouseEnter(TObject *Sender)
{
if (Def_check->Checked )
{
Main->Picture->LoadFromFile(GetCurrentDir() + "\\MainLibraryDefMouse.png");

}
else if (Dark_Check->Checked)
	 {
		Main->Picture->LoadFromFile(GetCurrentDir() + "\\MainLibraryDarkMouse.png");

	 }
	 else
	Main->Picture->LoadFromFile(GetCurrentDir() + "\\MainLibraryMouse.png");
}
//---------------------------------------------------------------------------

void __fastcall TBase::BackMouseEnter(TObject *Sender)
{
Back->Picture->LoadFromFile(GetCurrentDir() + "\\BackButtonMouse.png");
}
//---------------------------------------------------------------------------

void __fastcall TBase::BackMouseLeave(TObject *Sender)
{
Back->Picture->LoadFromFile(GetCurrentDir() + "\\BackButton.png");
}
//---------------------------------------------------------------------------


void __fastcall TBase::ChangeThemeClick(TObject *Sender)
{
	Main_Check->Checked = true;
	Form7->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TBase::DiaryMouseEnter(TObject *Sender)
{
   if (Def_check->Checked )
{
Diary->Picture->LoadFromFile(GetCurrentDir() + "\\MyDiaryDefMouse.png");

}
else if (Dark_Check->Checked)
	 {
		Diary->Picture->LoadFromFile(GetCurrentDir() + "\\MyDiaryDarkMouse.png");

	 }
	 else
	Diary->Picture->LoadFromFile(GetCurrentDir() + "\\MyDiaryMouse.png");
}
//---------------------------------------------------------------------------

void __fastcall TBase::DiaryMouseLeave(TObject *Sender)
{
	 if (Def_check->Checked )
{
Diary->Picture->LoadFromFile(GetCurrentDir() + "\\MyDiaryDef.png");

}
else if (Dark_Check->Checked)
	 {
		Diary->Picture->LoadFromFile(GetCurrentDir() + "\\MyDiaryDark.png");

	 }
	 else
	Diary->Picture->LoadFromFile(GetCurrentDir() + "\\MyDiary.png");
}
//---------------------------------------------------------------------------

void __fastcall TBase::DiaryClick(TObject *Sender)
{
   Form8->ShowModal();
}
//---------------------------------------------------------------------------


void __fastcall TBase::Image1Click(TObject *Sender)
{
Form11->Show();
}
//---------------------------------------------------------------------------

void __fastcall TBase::Image1MouseEnter(TObject *Sender)
{
Image1->Picture->LoadFromFile(GetCurrentDir() + "\\ManageUsersMouse.png");
}
//---------------------------------------------------------------------------

void __fastcall TBase::Image1MouseLeave(TObject *Sender)
{
Image1->Picture->LoadFromFile(GetCurrentDir() + "\\ManageUsers.png");
}
//---------------------------------------------------------------------------

void __fastcall TBase::ChangeThemeMouseEnter(TObject *Sender)
{
 ChangeTheme->Picture->LoadFromFile(GetCurrentDir()+ "\\ChangeThemeMouse.png");
}
//---------------------------------------------------------------------------

void __fastcall TBase::ChangeThemeMouseLeave(TObject *Sender)
{
 ChangeTheme->Picture->LoadFromFile(GetCurrentDir()+ "\\ChangeTheme.png");
}
//---------------------------------------------------------------------------


