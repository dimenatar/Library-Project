//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit4.h"
#include "Unit3.h"
#include <string>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm4 *Form4;

String image = "";
String SubImage = "";
String Stock = "";
bool Add = false;
bool b1 = false;
bool b2 = false;
bool b3 = false;
bool b4 = false;
bool b5 = false;

//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner)
	: TForm(Owner)
{

}
//---------------------------------------------------------------------------



void __fastcall TForm4::Image4Click(TObject *Sender)
{
Stock = "Yes";
b4 = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Image5Click(TObject *Sender)
{
Stock = "No";
b4 = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Image3Click(TObject *Sender)
{
int  PosProb=0;
String temp = "";
OpenPictureDialog1->Execute();
image =  OpenPictureDialog1->FileName;
SubImage = image;
	if (image != "")
	{


		for (int i=image.Length()-1; i >0; i--)
		{
			if (image[i] == '.')
			{
			 PosProb = i;
			 break;
			}
		}



		temp = image.SubString(PosProb, image.Length()-PosProb+1);
		Image1->Picture->LoadFromFile(image);

		Image1->Picture->SaveToFile(GetCurrentDir() +"\\" + (DataSource1->DataSet->RecordCount+1) + temp);
		b5 = true;

	}

}
//---------------------------------------------------------------------------

void __fastcall TForm4::FormActivate(TObject *Sender)
{
ADOTable1->Active = true;
Form4->BorderStyle = bsNone;
Edit1->Clear();
Edit2->Clear();
Edit3->Clear();
Stock = "";
image = "";
Add = false;
SubImage = "";
b1 = false;
b2 = false;
b3 = false;
b4 = false;
b5 = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Edit1Change(TObject *Sender)
{
if (Edit1->Text == "")
{
	b1 = false;
}
else
{
	b1 = true;
	if (b1 && b2 && b3 && b4 && b5)
	{
	  Add = true;
	  AddButton->Picture->LoadFromFile(GetCurrentDir() + "\\Add.png");
	}
	else
	{
		Add = false;
	}
}

}

//---------------------------------------------------------------------------

void __fastcall TForm4::AddButtonMouseEnter(TObject *Sender)
{
if (Edit1->Text!="" && Edit2->Text !=""&&Edit3->Text!=""&&Stock!="" && SubImage!="")
{
	AddButton->Picture->LoadFromFile(GetCurrentDir() + "\\AddMouse.png");
}
else
{
  AddButton->Picture->LoadFromFile(GetCurrentDir() + "\\AddDis.png");
}
}
//---------------------------------------------------------------------------

void __fastcall TForm4::AddButtonMouseLeave(TObject *Sender)
{
   if (Edit1->Text!="" && Edit2->Text !=""&&Edit3->Text!=""&&Stock!="" && SubImage!="")
{
	AddButton->Picture->LoadFromFile(GetCurrentDir() + "\\Add.png");
}
else
{
  AddButton->Picture->LoadFromFile(GetCurrentDir() + "\\AddDis.png");
}
}
//---------------------------------------------------------------------------

void __fastcall TForm4::AddButtonClick(TObject *Sender)
{

   if (Edit1->Text!="" && Edit2->Text !=""&&Edit3->Text!=""&&Stock!="" && SubImage!="")
{
AddButton->Picture->LoadFromFile(GetCurrentDir() + "\\Add.png");
Form3->ADOTable1->Last();
int n = DataSource1->DataSet->RecordCount+1;
ShowMessage (IntToStr(n));
Form3->ADOTable1->Insert();
ShowMessage (IntToStr(n));
Form3->ADOTable1->FieldByName("BookName")->Value = Edit1->Text;
Form3->ADOTable1->FieldByName("Author")->Value = Edit2->Text;
Form3->ADOTable1->FieldByName("Genre")->Value = Edit3->Text;
Form3->ADOTable1->FieldByName("InStock1")->Value = Stock;
Form3->ADOTable1->FieldByName("Rating")->Value = "0";
Form3->ADOTable1->FieldByName("Number")->Value = DataSource1->DataSet->RecordCount+1;

Form3->ADOTable1->Post();

}
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Edit2Change(TObject *Sender)
{
  if (Edit2->Text == "")
{
	b2 = false;
}
else
{
	b2 = true;
    	if (b1 && b2 && b3 && b4 && b5)
	{
	  Add = true;
	  AddButton->Picture->LoadFromFile(GetCurrentDir() + "\\Add.png");
	}
	else
	{
		Add = false;
	}
}
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Edit3Change(TObject *Sender)
{
if (Edit3->Text == "")
{
	b3 = false;
}
else
{
	b3 = true;
    	if (b1 && b2 && b3 && b4 && b5)
	{
	  Add = true;
	  AddButton->Picture->LoadFromFile(GetCurrentDir() + "\\Add.png");
	}
	else
	{
		Add = false;
	}
}
}
//---------------------------------------------------------------------------



void __fastcall TForm4::BackMouseEnter(TObject *Sender)
{
 Back->Picture->LoadFromFile(GetCurrentDir() + "\\BackButtonMouse.png");
}
//---------------------------------------------------------------------------

void __fastcall TForm4::BackMouseLeave(TObject *Sender)
{
 Back->Picture->LoadFromFile(GetCurrentDir() + "\\BackButton.png");
}
//---------------------------------------------------------------------------

void __fastcall TForm4::BackClick(TObject *Sender)
{
Form4->Close();
}
//---------------------------------------------------------------------------

