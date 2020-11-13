//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include "Unit9.h"
bool IsSended = false;
bool IsFounded = false;
bool IsText = false;
bool IsntEmpty = false;
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;


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


//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TForm2::LoginChange(TObject *Sender)
{
if (Login->Text != "")
{
	 IsText = true;
	 Recover->Picture->LoadFromFile(GetCurrentDir() + "\\Recover.png");
}
else
{
	IsText = false;
	Recover->Picture->LoadFromFile(GetCurrentDir() + "\\RecoverDis.png");
}
}
//---------------------------------------------------------------------------

void __fastcall TForm2::FormActivate(TObject *Sender)
{
ADOConnection1->ConnectionString = " Provider=Microsoft.Jet.OLEDB.4.0;Data Source=User's database.mdb;Persist Security Info=False";
ADOConnection1->Connected = true;
ADOTable1->Active = true;
IsSended = false;
IsFounded = false;
IsText = false;
IsntEmpty = false;
Login->Text = "";
OldPass->Text = "";
NewPass->Text = "";
Fon->Picture->LoadFromFile(GetCurrentDir() + "\\RecoverPassFon.png");
OldPass->Visible = false;
NewPass->Visible = false;
Confirm->Visible = false;

}
//---------------------------------------------------------------------------

void __fastcall TForm2::RecoverMouseEnter(TObject *Sender)
{
if (IsText)
{
  Recover->Picture->LoadFromFile(GetCurrentDir() + "\\RecoverMouse.png");
}
else
{
 Recover->Picture->LoadFromFile(GetCurrentDir() + "\\RecoverDis.png");
}
}
//---------------------------------------------------------------------------

void __fastcall TForm2::RecoverClick(TObject *Sender)
{
	if (Login->Text != "")
	{
	String Password = "Oh, listen. Your password is a key to our premial library. Please, dont throw it like that :( \n";
	Password +="Your password is following: ";
	if (!IsSended)
	{
	ADOTable1->First();
	while (!ADOTable1->Eof)
	{
		if (ADOTable1->FieldByName("UserLogin")->AsString == Login->Text)
		{
			IsFounded = true;
			Password += ADOTable1->FieldByName("UserPassword")->AsString;
			break;
		}
		ADOTable1->Next();
	}
	if (IsFounded)
	{


	Password +="\n";
	Password +="\n";
	Password +="\n";
	Password +="\n";
	Password +="\n";
	Password +="Pleeeeeeeeeeeeeeeeeeeeeeeeeease";
	Password +="\n";
	Password +="\n";
	Password +="\n";
	Password +="With love, your premial library <3";
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
	IdMessage1->Recipients->EMailAddresses=ADOTable1->FieldByName("UserEmail")->AsString; //кому
	IdMessage1->Subject="Your forgotten password"; //тема сообщения


	String temp = "";
	IdMessage1->Body->Text=Password; //сам текст Вашего сообщения
	IdMessage1->Date = Now();//системная дата отправки

	TIdMessageBuilderPlain* MyMessage = new TIdMessageBuilderPlain();



	MyMessage->PlainTextCharSet = "windows-1251";
	MyMessage->PlainText->Text=Password;
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
	IsSended = true;
	ShowMessage ("Check your Email");
	}
	else
	{
	   Application->MessageBoxW (L"Required user is not found", L"Oh shit dude", NULL);
	}
	}
	else
	{
	 Application->MessageBoxW (L"Our Indian Internet cannot may you to sent more then 1 message. Be patient", L"Oh shit dude", NULL);
	}
	}
	else
	{
	   Application->MessageBoxW (L"Hey, your login field is empty. Try to type something there, it's simple and funny. Seriously, try it", L"Oh shit dude", NULL);
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Change_PassClick(TObject *Sender)
{
	Fon->Picture->LoadFromFile(GetCurrentDir()+ "\\RecoverPassFonAdd.png");
	OldPass->Visible = true;
	NewPass->Visible = true;
	Confirm->Visible = true;

}
//---------------------------------------------------------------------------

void __fastcall TForm2::OldPassChange(TObject *Sender)
{
if (OldPass->Text == "" || NewPass->Text == "")
{
  IsntEmpty = false;
}
else
{
	IsntEmpty = true;
	Confirm->Picture->LoadFromFile(GetCurrentDir() + "\\Confirm.png");
}
}
//---------------------------------------------------------------------------

void __fastcall TForm2::ConfirmMouseEnter(TObject *Sender)
{
if (IsntEmpty)
{
  Confirm->Picture->LoadFromFile(GetCurrentDir() + "\\ConfirmMouse.png");
}
else
{
 Confirm->Picture->LoadFromFile(GetCurrentDir() + "\\ConfirmDis.png");
}
}
//---------------------------------------------------------------------------

void __fastcall TForm2::ConfirmMouseLeave(TObject *Sender)
{
   if (IsntEmpty)
{
  Confirm->Picture->LoadFromFile(GetCurrentDir() + "\\Confirm.png");
}
else
{
 Confirm->Picture->LoadFromFile(GetCurrentDir() + "\\ConfirmDis.png");
}
}
//---------------------------------------------------------------------------

void __fastcall TForm2::RecoverMouseLeave(TObject *Sender)
{
if (IsText)
{
  Recover->Picture->LoadFromFile(GetCurrentDir() + "\\Recover.png");
}
else
{
 Recover->Picture->LoadFromFile(GetCurrentDir() + "\\RecoverDis.png");
}
}
//---------------------------------------------------------------------------

void __fastcall TForm2::FormClose(TObject *Sender, TCloseAction &Action)
{
Form2->Hide();
Form9->Show();

}
//---------------------------------------------------------------------------

void __fastcall TForm2::Change_PassMouseEnter(TObject *Sender)
{
Change_Pass->Picture->LoadFromFile(GetCurrentDir() + "\\ChangePassMouse.png");
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Change_PassMouseLeave(TObject *Sender)
{
  Change_Pass->Picture->LoadFromFile(GetCurrentDir() + "\\ChangePass.png");
}
//---------------------------------------------------------------------------

void __fastcall TForm2::ConfirmClick(TObject *Sender)
{
bool OldPassIsCorrect = false;
ADOTable1->First();
while (!ADOTable1->Eof)
{
	if (ADOTable1->FieldByName("UserPassword")->AsString == OldPass->Text && ADOTable1->FieldByName("UserPassword")->AsString == Login->Text)
	{
		OldPassIsCorrect = true;
		ADOTable1->Edit();
		ADOTable1->FieldByName("UserPassword")->AsString = NewPass->Text;
		ADOTable1->Post();
		Application->MessageBoxW (L"Everything went well", L"Success", NULL);
		return;
	}
	ADOTable1->Next();

}
   Application->MessageBoxW (L"We didn't find your password in our notebook", L"Something wrong", NULL);
}
//---------------------------------------------------------------------------

