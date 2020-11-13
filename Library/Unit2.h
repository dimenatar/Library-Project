//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
#include <IdBaseComponent.hpp>
#include <IdComponent.hpp>
#include <IdExplicitTLSClientServerBase.hpp>
#include <IdIOHandler.hpp>
#include <IdIOHandlerSocket.hpp>
#include <IdIOHandlerStack.hpp>
#include <IdMessage.hpp>
#include <IdMessageClient.hpp>
#include <IdSMTP.hpp>
#include <IdSMTPBase.hpp>
#include <IdSSL.hpp>
#include <IdSSLOpenSSL.hpp>
#include <IdTCPClient.hpp>
#include <IdTCPConnection.hpp>
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
	TEdit *Login;
	TLabel *Label1;
	TButton *Button1;
	TIdMessage *IdMessage1;
	TIdSMTP *IdSMTP1;
	TIdSMTP *IdSMTP2;
	TIdSSLIOHandlerSocketOpenSSL *IdSSLIOHandlerSocketOpenSSL1;
	TADOConnection *ADOConnection1;
	TADOTable *ADOTable1;
	TImage *Fon;
	TImage *Recover;
	TImage *Change_Pass;
	TEdit *OldPass;
	TEdit *NewPass;
	TImage *Confirm;
	void __fastcall LoginChange(TObject *Sender);
	void __fastcall FormActivate(TObject *Sender);
	void __fastcall RecoverMouseEnter(TObject *Sender);
	void __fastcall RecoverClick(TObject *Sender);
	void __fastcall Change_PassClick(TObject *Sender);
	void __fastcall OldPassChange(TObject *Sender);
	void __fastcall ConfirmMouseEnter(TObject *Sender);
	void __fastcall ConfirmMouseLeave(TObject *Sender);
	void __fastcall RecoverMouseLeave(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall Change_PassMouseEnter(TObject *Sender);
	void __fastcall Change_PassMouseLeave(TObject *Sender);
	void __fastcall ConfirmClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
