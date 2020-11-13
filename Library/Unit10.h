//---------------------------------------------------------------------------

#ifndef Unit10H
#define Unit10H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Vcl.Imaging.jpeg.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
#include <IdBaseComponent.hpp>
#include <IdComponent.hpp>
#include <IdExplicitTLSClientServerBase.hpp>
#include <IdMessage.hpp>
#include <IdMessageClient.hpp>
#include <IdSMTP.hpp>
#include <IdSMTPBase.hpp>
#include <IdTCPClient.hpp>
#include <IdTCPConnection.hpp>
#include <IdIOHandler.hpp>
#include <IdIOHandlerSocket.hpp>
#include <IdIOHandlerStack.hpp>
#include <IdSSL.hpp>
#include <IdSSLOpenSSL.hpp>
#include <Vcl.MPlayer.hpp>
//---------------------------------------------------------------------------
class TForm10 : public TForm
{
__published:	// IDE-managed Components
	TEdit *Edit1;
	TEdit *Edit2;
	TADOConnection *ADOConnection1;
	TADOQuery *ADOQuery1;
	TEdit *Edit4;
	TImage *Fon;
	TEdit *Edit3;
	TADOTable *ADOTable1;
	TEdit *Edit6;
	TIdSMTP *IdSMTP1;
	TIdMessage *IdMessage1;
	TIdSSLIOHandlerSocketOpenSSL *IdSSLIOHandlerSocketOpenSSL1;
	TIdSMTP *IdSMTP2;
	TImage *SendCode;
	TImage *EmailCheck;
	TImage *GetAcc;
	void __fastcall SendCodeClick(TObject *Sender);
	void __fastcall Edit3Change(TObject *Sender);
	void __fastcall FormActivate(TObject *Sender);
	void __fastcall SendCodeMouseEnter(TObject *Sender);
	void __fastcall SendCodeMouseLeave(TObject *Sender);
	void __fastcall Edit1Change(TObject *Sender);
	void __fastcall GetAccMouseEnter(TObject *Sender);
	void __fastcall GetAccMouseLeave(TObject *Sender);
	void __fastcall GetAccClick(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall Edit1KeyPress(TObject *Sender, System::WideChar &Key);
private:	// User declarations
public:		// User declarations
	__fastcall TForm10(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm10 *Form10;
//---------------------------------------------------------------------------
#endif
