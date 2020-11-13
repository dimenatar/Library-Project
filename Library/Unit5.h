//---------------------------------------------------------------------------

#ifndef Unit5H
#define Unit5H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.jpeg.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Data.FMTBcd.hpp>
#include <Data.SqlExpr.hpp>
#include <Vcl.ComCtrls.hpp>
//---------------------------------------------------------------------------
class TForm5 : public TForm
{
__published:	// IDE-managed Components
	TLabel *Author;
	TLabel *Genre;
	TLabel *Name;
	TLabel *BookName;
	TLabel *BookGenre;
	TLabel *BookAuthor;
	TLabel *BookRating;
	TImage *Prev;
	TImage *Next;
	TImage *CoverBook;
	TLabel *Page;
	TLabel *Page1;
	TLabel *Page2;
	TImage *Fon;
	TLabel *Attention;
	TADOTable *ADOTable1;
	TLabel *Rating;
	TDataSource *DataSource1;
	TADOTable *ADOTable2;
	TImage *Back;
	TImage *ChangeTheme;
	TCheckBox *Fav_check;
	void __fastcall FormActivate(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall NextClick(TObject *Sender);
	void __fastcall PrevClick(TObject *Sender);
	void __fastcall BackClick(TObject *Sender);
	void __fastcall BackMouseEnter(TObject *Sender);
	void __fastcall BackMouseLeave(TObject *Sender);
	void __fastcall ChangeThemeClick(TObject *Sender);
	void __fastcall ChangeThemeMouseEnter(TObject *Sender);
	void __fastcall ChangeThemeMouseLeave(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm5(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm5 *Form5;
//---------------------------------------------------------------------------
#endif
