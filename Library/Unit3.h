//---------------------------------------------------------------------------

#ifndef Unit3H
#define Unit3H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Vcl.ComCtrls.hpp>
#include <System.ImageList.hpp>
#include <Vcl.ImgList.hpp>
//---------------------------------------------------------------------------
class TForm3 : public TForm
{
__published:	// IDE-managed Components
	TImage *CoverBook;
	TADOConnection *ADOConnection1;
	TADOTable *ADOTable1;
	TLabel *BookName;
	TLabel *BookAuthor;
	TLabel *BookGenre;
	TLabel *BookRating;
	TLabel *Name;
	TLabel *Genre;
	TLabel *Author;
	TLabel *Rating;
	TLabel *Page;
	TLabel *Page1;
	TLabel *Page2;
	TDataSource *DataSource1;
	TLabel *Vote;
	TADOTable *ADOTable2;
	TADOTable *ADOTable3;
	TADOTable *ADOTable4;
	TImage *Fon;
	TImage *VoteYes;
	TImage *VoteNo;
	TImage *Next;
	TImage *Prev;
	TImage *Back;
	TRichEdit *RichEdit1;
	TRichEdit *RichEdit2;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TImage *Post;
	TMemo *Memo1;
	TMemo *Memo2;
	TLabel *Label5;
	TBalloonHint *BalloonHint1;
	TImageList *ImageList1;
	TImage *Add_to_favorites;
	TImage *AddNewBook;
	TCheckBox *MLibrary_Check;
	TCheckBox *Dark_Check;
	TImage *ChangeTheme;
	void __fastcall FormActivate(TObject *Sender);
	void __fastcall VoteYesClick(TObject *Sender);
	void __fastcall VoteNoClick(TObject *Sender);
	void __fastcall PrevClick(TObject *Sender);
	void __fastcall NextClick(TObject *Sender);
	void __fastcall BackClick(TObject *Sender);
	void __fastcall PostClick(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall RichEdit2KeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall PostMouseEnter(TObject *Sender);
	void __fastcall PostMouseLeave(TObject *Sender);
	void __fastcall RichEdit2Change(TObject *Sender);
	void __fastcall BackMouseEnter(TObject *Sender);
	void __fastcall BackMouseLeave(TObject *Sender);
	void __fastcall addToFavorites(TObject *Sender);
	void __fastcall Add_to_favoritesMouseEnter(TObject *Sender);
	void __fastcall Add_to_favoritesMouseLeave(TObject *Sender);
	void __fastcall add(TObject *Sender);
	void __fastcall AddNewBookMouseEnter(TObject *Sender);
	void __fastcall AddNewBookMouseLeave(TObject *Sender);
	void __fastcall VoteYesMouseEnter(TObject *Sender);
	void __fastcall VoteYesMouseLeave(TObject *Sender);
	void __fastcall VoteNoMouseEnter(TObject *Sender);
	void __fastcall VoteNoMouseLeave(TObject *Sender);
	void __fastcall PrevMouseEnter(TObject *Sender);
	void __fastcall PrevMouseLeave(TObject *Sender);
	void __fastcall NextMouseEnter(TObject *Sender);
	void __fastcall NextMouseLeave(TObject *Sender);
	void __fastcall ChangeThemeClick(TObject *Sender);
	void __fastcall ChangeThemeMouseLeave(TObject *Sender);
	void __fastcall ChangeThemeMouseEnter(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm3(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm3 *Form3;
//---------------------------------------------------------------------------
#endif
