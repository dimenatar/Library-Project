//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit10.h"
#include "Unit1.h"
#include "Unit9.h"
#include "Unit2.h"
  String Temp="";
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm10 *Form10;
#include "System.RegularExpressions.hpp"
using namespace std;
bool IsMail = false;
bool AccountDisabled = true;
bool IsPlayed = false;

//---------------------------------------------------------------------------
__fastcall TForm10::TForm10(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------



#include <vcl.h>
#pragma hdrstop

#include <IdSMTP.hpp>
#include <IdSSLOpenSSL.hpp>
#include <IdAntiFreeze.hpp>
#include <IdText.hpp>
#include <IdAttachmentFile.hpp>

#include <Lmcons.h>
#include <memory>

#pragma link "IdBaseComponent"
#pragma link "IdComponent"
#pragma link "IdExplicitTLSClientserverBase"
#pragma link "IdIOHandler"
#pragma link "IdIOHandlerSocket"
#pragma link "IdIOHandlerStack"
#pragma link "IdMessage"
#pragma link "IdMessageClient"
#pragma link "IdSMTP"
#pragma link "IdSMTPBase"
#pragma link "IdSSL"
#pragma link "IdSSLOpenSSL"
#pragma link "IdTCPClient"
#pragma link "IdTCPConnection"
#include <IdMessageBuilder.hpp>




void __fastcall TForm10::SendCodeClick(TObject *Sender)
{
	if (IsMail)
	{


	Temp ="";
	IdSMTP1->Host="smtp.yandex.by";  //хост  (smtp.mail.ru)
	IdSMTP1->Port=465;//
	IdSMTP1->Username = "TRPOSquadInc@yandex.by"; //логин (типа: [email]smit@mail.ru[/email] )
	IdSMTP1->Password="LenovoS650";//пароль   (qwerty)

	IdSSLIOHandlerSocketOpenSSL1->Destination=IdSMTP1->Host+":"+IntToStr(IdSMTP1->Port);
	IdSSLIOHandlerSocketOpenSSL1->Host=IdSMTP1->Host;
	IdSSLIOHandlerSocketOpenSSL1->Port=IdSMTP1->Port;
	IdSSLIOHandlerSocketOpenSSL1->SSLOptions->Method=sslvSSLv3;
	IdSMTP1->IOHandler=IdSSLIOHandlerSocketOpenSSL1;
	IdSMTP1->UseTLS=utUseImplicitTLS;

	IdMessage1->Clear();
	IdMessage1->ContentTransferEncoding="base64";
	IdMessage1->Encoding=mePlainText;
	IdMessage1->From->Text=IdSMTP1->Username;// логин
	IdMessage1->Recipients->EMailAddresses=Edit3->Text; //кому
	IdMessage1->Subject="Your special code is ready!"; //тема сообщения

	for (int i =0; i < 5; i++)
	{
		Temp+=Random(10);
	}
	String temp = "Greeting my dear friend. Today I with my team full of specialists will offer you to join our premial library. Your Special Code is following: " + Temp + "   Have fun :)";
	IdMessage1->Body->Text=Temp; //сам текст Вашего сообщения
	IdMessage1->Date = Now();//системная дата отправки

	TIdMessageBuilderPlain* MyMessage = new TIdMessageBuilderPlain();



	MyMessage->PlainTextCharSet = "windows-1251";
	MyMessage->PlainText->Text=temp;
	MyMessage->FillMessage(IdMessage1);
								   //windows-1251
   // try
	//{
		IdSMTP1->Connect();
		if (IdMessage1->MessageParts->Count)
		{
			IdMessage1->ContentType = "multipart/mixed";
			IdMessage1->Encoding = meMIME;
		}
		IdMessage1->CharSet = "windows-1251";
		IdMessage1->ContentTransferEncoding = "8BITMIME";
		IdSMTP1->Send(IdMessage1);
	//}
	//catch (...)
	//{
		//String a = "Ошибка отправления!!!";
		//Application->MessageBox(a.c_str(), L"Сообщение", MB_ICONINFORMATION | MB_OK);
   // }

	IdSMTP1->Disconnect(true);
	delete MyMessage;
	}
}
//---------------------------------------------------------------------------
//TRegEx Email ();

void __fastcall TForm10::Edit3Change(TObject *Sender)
{
IsMail = false;
if (Edit3->Text != "")
{
String Mail = Edit3->Text;
bool IsPsina = false;

if (Mail.Pos("@") < Mail.Pos(".") && Mail.Pos("@")>1 &&  Mail.Pos(".")>1 &&  Mail.Pos("@")!= Mail.Length() &&  Mail.Pos(".")!= Mail.Length())
{
	IsMail = true;
}

	if (IsMail)
	{

		SendCode->Picture->LoadFromFile(GetCurrentDir() + "\\SendCode.png");
		Edit3->Color = clMoneyGreen;
		EmailCheck->Picture->LoadFromFile(GetCurrentDir() + "\\Check.png");
	}
	else
	{

		SendCode->Picture->LoadFromFile(GetCurrentDir() + "\\SendCodeDis.png");
		EmailCheck->Picture->LoadFromFile(GetCurrentDir() + "\\Cross.png");
    }
}
}
//---------------------------------------------------------------------------


void __fastcall TForm10::FormActivate(TObject *Sender)
{
IsMail = false;
AccountDisabled = true;
ADOConnection1->ConnectionString = "Provider=Microsoft.Jet.OLEDB.4.0;Data Source=User's database.mdb;Persist Security Info=False";
ADOConnection1->Connected = true;
ADOTable1->Active = true;
ADOQuery1->Active = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm10::SendCodeMouseEnter(TObject *Sender)
{
  if (Edit3->Color == clMoneyGreen)
{
  SendCode->Picture->LoadFromFile(GetCurrentDir() + "\\SendCodeMouse.png");
}
else
{
  SendCode->Picture->LoadFromFile(GetCurrentDir() + "\\SendCodeDis.png");
}
}
//---------------------------------------------------------------------------

void __fastcall TForm10::SendCodeMouseLeave(TObject *Sender)
{
if (Edit3->Color == clMoneyGreen)
{
  SendCode->Picture->LoadFromFile(GetCurrentDir() + "\\SendCode.png");
}
else
{
  SendCode->Picture->LoadFromFile(GetCurrentDir() + "\\SendCodeDis.png");
}
}
//---------------------------------------------------------------------------

void __fastcall TForm10::Edit1Change(TObject *Sender)
{
if (Edit1->Text == "" || Edit2->Text == "" ||Edit4->Text == "" ||Edit6->Text == "" || !IsMail)
{
	AccountDisabled = true;
}
else
{
	AccountDisabled = false;
	GetAcc->Picture->LoadFromFile(GetCurrentDir()+"\\GetAcc.png");
}
}
//---------------------------------------------------------------------------

void __fastcall TForm10::GetAccMouseEnter(TObject *Sender)
{
 if (!AccountDisabled)
 {
	 GetAcc->Picture->LoadFromFile(GetCurrentDir()+"\\GetAccMouse.png");
 }
 else
 {
	 GetAcc->Picture->LoadFromFile(GetCurrentDir()+"\\GetAccDis.png");
 }
}
//---------------------------------------------------------------------------

void __fastcall TForm10::GetAccMouseLeave(TObject *Sender)
{
if (!AccountDisabled)
 {
	 GetAcc->Picture->LoadFromFile(GetCurrentDir()+"\\GetAcc.png");
 }
 else
 {
	 GetAcc->Picture->LoadFromFile(GetCurrentDir()+"\\GetAccDis.png");
 }
}
//---------------------------------------------------------------------------

void __fastcall TForm10::GetAccClick(TObject *Sender)
{
if(!AccountDisabled)
{
	 if (Edit6->Text == Temp)
	 {
	  ADOQuery1->Parameters->ParamByName("UserType")->Value = "User";
	 }
	 else
	 {
		ShowMessage ("Incorrect code!");
		return;
	 }
	int n =0;
	ADOTable1->Last();
	n = ADOTable1->FieldByName("UserNumber")->AsInteger + 1;
	ADOQuery1->Parameters->ParamByName("UserLogin")->Value = Edit1->Text;
	ADOQuery1->Parameters->ParamByName("UserPassword")->Value = Edit2->Text;
	ADOQuery1->Parameters->ParamByName("UserName")->Value = Edit4->Text;
	ADOQuery1->Parameters->ParamByName("UserEMail")->Value = Edit3->Text;
	ADOQuery1->Parameters->ParamByName("UserNumber")->Value = n;
	Form9->StaticText1->Caption =  ADOQuery1->Parameters->ParamByName("UserName")->Value;

	ADOQuery1->ExecSQL();
	ShowMessage("Success!");
	Form10->Close();
	Base->ShowModal();
	Form9->Close();
}

}
//---------------------------------------------------------------------------


void __fastcall TForm10::FormClose(TObject *Sender, TCloseAction &Action)
{
Form9->Show();
}
//---------------------------------------------------------------------------



void __fastcall TForm10::Edit1KeyPress(TObject *Sender, System::WideChar &Key)
{
if (((Key >= 'A' && Key <='Z')|| (Key>='a' && Key <='z') || (Key>='0' && Key <='9') || Key == '\\' || Key == '|' || Key =='/' || Key == '?' || Key == '-' || Key == '+' || Key == '_' || Key == '[' || Key == ']' || Key == '{' || Key == '}' || Key == '(' || Key == ')' || Key == '!' || Key == '#' || Key == '$' || Key == '%' || Key == '^' || Key == '&' || Key == '*' || Key == VK_BACK || Key == '@' || Key == '.'))
{
	if (!IsPlayed)
	{
		/*MediaPlayer1->FileName = GetCurrentDir() + "\\123.mp3";
	   MediaPlayer1->Play();
	   IsPlayed = true;
	   */
	}

return;

}
else
{
	Key = 0;
}
}
//---------------------------------------------------------------------------

