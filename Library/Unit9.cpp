//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit9.h"
#include "Unit10.h"
#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm9 *Form9;
bool IsClosedEye = true;
//---------------------------------------------------------------------------
__fastcall TForm9::TForm9(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm9::PassKeyPress(TObject *Sender, System::WideChar &Key)
{
if(Key == VK_BACK)
{
	return;
}
if(Key == VK_RETURN)
{
	if(Login->Text != "" && Pass->Text != "")
	{
			if(Login->Text =="" && Pass->Text =="")
	{
		ShowMessage("������� ������");
	}
		if(Login->Text =="" && Pass->Text !="")
	{
		ShowMessage("������� �����");
	}
		if(Login->Text !="" && Pass->Text =="")
	{
		ShowMessage("������� ������");
	}
	ADOTable1->Open();
	AnsiString a1 = Login->Text, ap = Pass->Text, b1, bp;
	ADOTable1->First();
	while(!ADOTable1->Eof)
	{
		b1 = ADOTable1->FieldByName("UserLogin")->AsString;
		bp = ADOTable1->FieldByName("UserPassword")->AsString;
		if((a1 == b1) && (ap==bp))
		{
			StaticText1->Caption = ADOTable1->FieldByName("UserName")->AsString;
			Base->Show();

			break;
		}
		ADOTable1->Next();
	}
	if((a1 != b1) && (ap != bp))
	{
		ShowMessage("�������� ����� ��� ������");
		Login->Clear();
		Pass->Clear();
	}
	}
}
}
//---------------------------------------------------------------------------

void __fastcall TForm9::LoginKeyPress(TObject *Sender, System::WideChar &Key)
{
if(Key == VK_BACK)
{
	return;
}
if(Key == VK_RETURN)
{
	if(Login->Text != "" && Pass->Text != "")
	{
			if(Login->Text =="" && Pass->Text =="")
	{
		ShowMessage("������� ������");
	}
		if(Login->Text =="" && Pass->Text !="")
	{
		ShowMessage("������� �����");
	}
		if(Login->Text !="" && Pass->Text =="")
	{
		ShowMessage("������� ������");
	}
	ADOTable1->Open();
	AnsiString a1 = Login->Text, ap = Pass->Text, b1, bp;
	ADOTable1->First();
	while(!ADOTable1->Eof)
	{
		b1 = ADOTable1->FieldByName("UserLogin")->AsString;
		bp = ADOTable1->FieldByName("UserPassword")->AsString;
		if((a1 == b1) && (ap==bp))
		{
			StaticText1->Caption = ADOTable1->FieldByName("UserName")->AsString;

			Base->Show();

			break;
		}
		ADOTable1->Next();
	}
	if((a1 != b1) && (ap != bp))
	{
		ShowMessage("�������� ����� ��� ������");
		Login->Clear();
		Pass->Clear();
	}
	}
}
}
//---------------------------------------------------------------------------

void __fastcall TForm9::Label3Click(TObject *Sender)
{
Form9->Hide();
Form2->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm9::RegisterMouseEnter(TObject *Sender)
{
Register->Picture->LoadFromFile(GetCurrentDir()+ "\\RegisterMouse.png");

}
//---------------------------------------------------------------------------

void __fastcall TForm9::RegisterMouseLeave(TObject *Sender)
{
  Register->Picture->LoadFromFile(GetCurrentDir()+ "\\Register.png");
}
//---------------------------------------------------------------------------

void __fastcall TForm9::RegisterClick(TObject *Sender)
{
  Form10->Show();
  Form9->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TForm9::EnterMouseLeave(TObject *Sender)
{
  if (Login->Text == "" || Pass->Text == "")
  {
	  Enter->Picture->LoadFromFile (GetCurrentDir() + "\\EnterDis.png");
  }
  else
  {
	Enter->Picture->LoadFromFile (GetCurrentDir() + "\\Enter.png");
  }
}
//---------------------------------------------------------------------------


void __fastcall TForm9::EnterMouseEnter(TObject *Sender)
{
     if (Login->Text == "" || Pass->Text == "")
  {
	  Enter->Picture->LoadFromFile (GetCurrentDir() + "\\EnterDis.png");
  }
  else
  {
	Enter->Picture->LoadFromFile (GetCurrentDir() + "\\EnterMouse.png");
  }
}
//---------------------------------------------------------------------------

void __fastcall TForm9::LoginChange(TObject *Sender)
{
if (Login->Text == "" || Pass->Text == "")
{
	Enter->Picture->LoadFromFile (GetCurrentDir() + "\\EnterDis.png");
}
else
{
	Enter->Picture->LoadFromFile (GetCurrentDir() + "\\Enter.png");
}
}
//---------------------------------------------------------------------------

void __fastcall TForm9::EnterClick(TObject *Sender)
{
	if(Login->Text =="" && Pass->Text =="")
	{
		Enter->Hint = "Missing login and password";
		Enter->ShowHint = true;
		return;
	}
		if(Login->Text =="" && Pass->Text !="")
	{
		Enter->Hint = "Missing login";
		Enter->ShowHint = true;
		return;
	}
		if(Login->Text !="" && Pass->Text =="")
	{
		Enter->Hint = "Missing password";
		Enter->ShowHint = true;
		return;
	}
	ADOTable1->Open();
	AnsiString a1 = Login->Text, ap = Pass->Text, b1, bp;
	ADOTable1->First();
	while(!ADOTable1->Eof)
	{
		b1 = ADOTable1->FieldByName("UserLogin")->AsString;
		bp = ADOTable1->FieldByName("UserPassword")->AsString;
		if((a1 == b1) && (ap==bp))
		{
			StaticText1->Caption = ADOTable1->FieldByName("UserName")->AsString;
			Base->Show();

			break;
		}
		ADOTable1->Next();
	}
	if((a1 != b1) && (ap != bp))
	{
		ShowMessage("Data is incrorrect");
		Login->Clear();
		Pass->Clear();
	}
}
//---------------------------------------------------------------------------



void __fastcall TForm9::EyeClick(TObject *Sender)
{
if (IsClosedEye)
{
Eye->Picture->LoadFromFile(GetCurrentDir() + "\\OpenEye.png");
IsClosedEye = false;
Pass->PasswordChar = '\0';
}
else
{
	Eye->Picture->LoadFromFile(GetCurrentDir() + "\\ClosedEye.png");
	IsClosedEye = true;
	Pass->PasswordChar = '*';
}
}
//---------------------------------------------------------------------------

void __fastcall TForm9::FormActivate(TObject *Sender)
{
ADOConnection1->ConnectionString = "Provider=Microsoft.Jet.OLEDB.4.0;Data Source=User's database.mdb;Persist Security Info=False";
ADOConnection1->Connected = true;
ADOTable1->Active = true;
}
//---------------------------------------------------------------------------

