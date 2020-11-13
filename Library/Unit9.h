//---------------------------------------------------------------------------

#ifndef Unit9H
#define Unit9H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
#include <Vcl.Imaging.jpeg.hpp>
#include <Vcl.Imaging.pngimage.hpp>
//---------------------------------------------------------------------------
class TForm9 : public TForm
{
__published:	// IDE-managed Components
	TEdit *Login;
	TEdit *Pass;
	TADOTable *ADOTable1;
	TADOConnection *ADOConnection1;
	TLabel *Label3;
	TStaticText *StaticText1;
	TImage *Register;
	TImage *Enter;
	TImage *Image1;
	TBalloonHint *BalloonHint1;
	TImage *Eye;
	TStaticText *StaticText2;
	void __fastcall PassKeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall LoginKeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall Label3Click(TObject *Sender);
	void __fastcall RegisterMouseEnter(TObject *Sender);
	void __fastcall RegisterMouseLeave(TObject *Sender);
	void __fastcall RegisterClick(TObject *Sender);
	void __fastcall EnterMouseLeave(TObject *Sender);
	void __fastcall EnterMouseEnter(TObject *Sender);
	void __fastcall LoginChange(TObject *Sender);
	void __fastcall EnterClick(TObject *Sender);
	void __fastcall EyeClick(TObject *Sender);
    void __fastcall FormActivate(TObject *Sender);

private:	// User declarations
public:		// User declarations
	__fastcall TForm9(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm9 *Form9;
//---------------------------------------------------------------------------
#endif
