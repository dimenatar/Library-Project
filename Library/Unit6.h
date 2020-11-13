//---------------------------------------------------------------------------

#ifndef Unit6H
#define Unit6H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TForm6 : public TForm
{
__published:	// IDE-managed Components
	TLabel *Genre;
	TLabel *Name;
	TLabel *Author;
	TLabel *Rating;
	TImage *Image4;
	TImage *Image1;
	TLabel *Page2;
	TLabel *Page;
	TImage *CoverBook;
	TLabel *Page1;
	TADOQuery *ADOQuery1;
	TDataSource *DataSource1;
	TComboBox *Top;
	TLabel *BookName;
	TLabel *BookGenre;
	TLabel *BookAuthor;
	TLabel *BookRating;
	TImage *Fon;
	TImage *Back;
	TEdit *Edit1;
	TCheckBox *Top_Check;
	TImage *ChangeTheme;
	TTimer *Timer1;
	void __fastcall FormActivate(TObject *Sender);
	void __fastcall TopKeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall Image1Click(TObject *Sender);
	void __fastcall Image4Click(TObject *Sender);
	void __fastcall TopChange(TObject *Sender);
	void __fastcall BackClick(TObject *Sender);
	void __fastcall Edit1Click(TObject *Sender);
	void __fastcall BackMouseEnter(TObject *Sender);
	void __fastcall BackMouseLeave(TObject *Sender);
	void __fastcall ChangeThemeMouseLeave(TObject *Sender);
	void __fastcall ChangeThemeMouseEnter(TObject *Sender);
	void __fastcall ChangeThemeClick(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);

private:	// User declarations
public:		// User declarations
	__fastcall TForm6(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm6 *Form6;
//---------------------------------------------------------------------------
#endif
