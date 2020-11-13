//---------------------------------------------------------------------------

#ifndef Unit7H
#define Unit7H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
//---------------------------------------------------------------------------
class TForm7 : public TForm
{
__published:	// IDE-managed Components
	TImage *FirstPicture;
	TImage *SecPicture;
	TImage *ThirdPicture;
	TImage *FourthPicture;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TCheckBox *First;
	TCheckBox *Sec;
	TCheckBox *Third;
	TCheckBox *Fourth;
	TTimer *Timer1;
	TTimer *Timer2;
	TTimer *Timer3;
	TTimer *Timer4;
	TTimer *Timer5;
	TTimer *Timer6;
	TImage *Image1;
	void __fastcall FormActivate(TObject *Sender);
	void __fastcall ThirdPictureMouseEnter(TObject *Sender);
	void __fastcall ThirdPictureMouseLeave(TObject *Sender);
	void __fastcall FirstPictureMouseEnter(TObject *Sender);
	void __fastcall FirstPictureMouseLeave(TObject *Sender);
	void __fastcall SecPictureMouseEnter(TObject *Sender);
	void __fastcall SecPictureMouseLeave(TObject *Sender);
	void __fastcall FourthPictureMouseEnter(TObject *Sender);
	void __fastcall FourthPictureMouseLeave(TObject *Sender);
	void __fastcall FirstPictureClick(TObject *Sender);
	void __fastcall SecPictureClick(TObject *Sender);
	void __fastcall ThirdPictureClick(TObject *Sender);
	void __fastcall FourthPictureClick(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall Timer1Timer(TObject *Sender);
	void __fastcall Timer2Timer(TObject *Sender);
	void __fastcall Timer3Timer(TObject *Sender);
	void __fastcall Timer4Timer(TObject *Sender);
	void __fastcall Timer5Timer(TObject *Sender);
	void __fastcall Timer6Timer(TObject *Sender);
	void __fastcall FormCloseQuery(TObject *Sender, bool &CanClose);
private:	// User declarations
public:		// User declarations
	__fastcall TForm7(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm7 *Form7;
//---------------------------------------------------------------------------
#endif
