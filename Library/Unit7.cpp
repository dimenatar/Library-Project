//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "Unit1.h"
#include "Unit7.h"
#include "Unit6.h"
#include "Unit5.h"
#include "Unit8.h"
#include "Unit3.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm7 *Form7;
int X = - 270;
bool Close_Form = false;


void MouseLeaveAnyPicture ()
{
if (Form6->Top_Check->Checked)
	{

	if (Form7->First->Checked)
	{
	  Form6->Fon->Picture->LoadFromFile(GetCurrentDir() + "\\TopFon.png");
	  Form6->BookName->Font->Color = clGreen;
	  Form6->BookAuthor->Font->Color = clGreen;
	  Form6->BookGenre->Font->Color = clGreen;
	  Form6->BookRating->Font->Color = clGreen;
	  Form6->Author->Font->Color = clGreen;
	  Form6->Name->Font->Color = clGreen;
	  Form6->Rating->Font->Color = clGreen;
	  Form6->Genre->Font->Color = clGreen;
	  Form6->Page->Font->Color = clGreen;
	  Form6->Page1->Font->Color = clGreen;
	  Form6->Page2->Font->Color = clGreen;
	  Form6->Top->Color = clMoneyGreen;
	}
	else if (Form7->Sec->Checked)
	{
	  Form6->Fon->Picture->LoadFromFile(GetCurrentDir() + "\\TopFonDark.png");

	  Form6->BookName->Font->Color = clSilver;
	  Form6->BookAuthor->Font->Color = clSilver;
	  Form6->BookGenre->Font->Color = clSilver;
	  Form6->BookRating->Font->Color = clSilver;
	  Form6->Author->Font->Color = clSilver;
	  Form6->Name->Font->Color = clSilver;
	  Form6->Rating->Font->Color = clSilver;
	  Form6->Genre->Font->Color = clSilver;
	  Form6->Page->Font->Color = clSilver;
	  Form6->Page1->Font->Color = clSilver;
	  Form6->Page2->Font->Color = clSilver;
	  Form6->Top->Color = clSilver;
	}
	else if(Form7->Third->Checked)
	{
		Form6->Fon->Picture->LoadFromFile(GetCurrentDir() + "\\TopFonStrict.png");

		Form6->BookName->Font->Color = clBlack;
	  Form6->BookAuthor->Font->Color = clBlack;
	  Form6->BookGenre->Font->Color = clBlack;
	  Form6->BookRating->Font->Color = clBlack;
	  Form6->Author->Font->Color = clBlack;
	  Form6->Name->Font->Color = clBlack;
	  Form6->Rating->Font->Color = clBlack;
	  Form6->Genre->Font->Color = clBlack;
	  Form6->Page->Font->Color = clBlack;
	  Form6->Page1->Font->Color = clBlack;
	  Form6->Page2->Font->Color = clBlack;
	 Form6->Top->Color = clSilver;
	}
	else if (Form7->Fourth->Checked)
	{
	   Form6->Fon->Picture->LoadFromFile(GetCurrentDir() + "\\TopFonColorful.png");

		Form6->BookName->Font->Color = clTeal;
	  Form6->BookAuthor->Font->Color = clTeal;
	  Form6->BookGenre->Font->Color = clTeal;
	  Form6->BookRating->Font->Color = clTeal;
	  Form6->Author->Font->Color = clTeal;
	  Form6->Name->Font->Color = clTeal;
	  Form6->Rating->Font->Color = clTeal;
	  Form6->Genre->Font->Color = clTeal;
	  Form6->Page->Font->Color = clTeal;
	  Form6->Page1->Font->Color = clTeal;
	  Form6->Page2->Font->Color = clTeal;
	 Form6->Top->Color = clSilver;

	}
	else
	{
		Form6->Fon->Picture->LoadFromFile(GetCurrentDir() + "\\TopFon.png");
	  Form6->BookName->Font->Color = clGreen;
	  Form6->BookAuthor->Font->Color = clGreen;
	  Form6->BookGenre->Font->Color = clGreen;
	  Form6->BookRating->Font->Color = clGreen;
	  Form6->Author->Font->Color = clGreen;
	  Form6->Name->Font->Color = clGreen;
	  Form6->Rating->Font->Color = clGreen;
	  Form6->Genre->Font->Color = clGreen;
	  Form6->Page->Font->Color = clGreen;
	  Form6->Page1->Font->Color = clGreen;
	  Form6->Page2->Font->Color = clGreen;
	  Form6->Top->Color = clMoneyGreen;
	}
	}
	//

	//

	else if (Form5->Fav_check->Checked)
	{

		if (Form7->First->Checked)
	{
	  Form5->Fon->Picture->LoadFromFile(GetCurrentDir() + "\\FavFon.png");
	  Form5->BookName->Font->Color = clNavy;
	  Form5->BookAuthor->Font->Color = clNavy;
	  Form5->BookGenre->Font->Color = clNavy;
	  Form5->BookRating->Font->Color = clNavy;
	  Form5->Author->Font->Color = clNavy;
	  Form5->Name->Font->Color = clNavy;
	  Form5->Rating->Font->Color = clNavy;
	  Form5->Genre->Font->Color = clNavy;
	  Form5->Page->Font->Color = clNavy;
	  Form5->Page1->Font->Color = clNavy;
	  Form5->Page2->Font->Color = clNavy;
	}
	else if (Form7->Sec->Checked)
	{
				Form5->Fon->Picture->LoadFromFile(GetCurrentDir()+ "\\FavFonDark.png");

				Form5->BookName->Font->Color = clSilver;
				Form5->BookAuthor->Font->Color = clSilver;
				Form5->BookGenre->Font->Color = clSilver;
				Form5->BookRating->Font->Color = clSilver;
				Form5->Author->Font->Color = clSilver;
				Form5->Name->Font->Color = clSilver;
				Form5->Rating->Font->Color = clSilver;
				Form5->Genre->Font->Color = clSilver;
				Form5->Page->Font->Color = clSilver;
				Form5->Page1->Font->Color = clSilver;
				Form5->Page2->Font->Color = clSilver;
	}
	else if(Form7->Third->Checked)
	{
				Form5->Fon->Picture->LoadFromFile(GetCurrentDir() + "\\FavFonStrict.png");

				Form5->BookName->Font->Color = clBlack;
				Form5->BookAuthor->Font->Color = clBlack;
				Form5->BookGenre->Font->Color = clBlack;
				Form5->BookRating->Font->Color = clBlack;
				Form5->Author->Font->Color = clBlack;
				Form5->Name->Font->Color = clBlack;
				Form5->Rating->Font->Color = clBlack;
				Form5->Genre->Font->Color = clBlack;
				Form5->Page->Font->Color = clBlack;
				Form5->Page1->Font->Color = clBlack;
				Form5->Page2->Font->Color = clBlack;
	}
	else if (Form7->Fourth->Checked)
	{
				Form5->Fon->Picture->LoadFromFile(GetCurrentDir() + "\\FavFonColorful.png");

				Form5->BookName->Font->Color = clTeal;
				Form5->BookAuthor->Font->Color = clTeal;
				Form5->BookGenre->Font->Color = clTeal;
				Form5->BookRating->Font->Color = clTeal;
				Form5->Author->Font->Color = clTeal;
				Form5->Name->Font->Color = clTeal;
				Form5->Rating->Font->Color = clTeal;
				Form5->Genre->Font->Color = clTeal;
				Form5->Page->Font->Color = clTeal;
				Form5->Page1->Font->Color = clTeal;
				Form5->Page2->Font->Color = clTeal;

	}
	else
	{
	  Form5->Fon->Picture->LoadFromFile(GetCurrentDir() + "\\FavFon.png");
	  Form5->BookName->Font->Color = clNavy;
	  Form5->BookAuthor->Font->Color = clNavy;
	  Form5->BookGenre->Font->Color = clNavy;
	  Form5->BookRating->Font->Color = clNavy;
	  Form5->Author->Font->Color = clNavy;
	  Form5->Name->Font->Color = clNavy;
	  Form5->Rating->Font->Color = clNavy;
	  Form5->Genre->Font->Color = clNavy;
	  Form5->Page->Font->Color = clNavy;
	  Form5->Page1->Font->Color = clNavy;
	  Form5->Page2->Font->Color = clNavy;
	}
	}
	else if (Form8->Diary_Check->Checked)
		{
				  if (Form7->Third->Checked)
		{
				Form8->Post->Picture->LoadFromFile(GetCurrentDir() + "\\PostDis.png");
				Form8->Fon->Picture->LoadFromFile(GetCurrentDir() + "\\DiaryFonStrict.png");
				Form8->Dark_Check->Checked = false;
				Form8->RichEdit1->Color = clGray;
				Form8->RichEdit2->Color = clGray;
				Form8->ComboBox1->Color = clGray;
				Form8->ListBox1->Color = clGray;
				Form8->ListBox2->Color = clGray;
				Form8->Label1->Font->Color = clBlack;
				Form8->Label3->Font->Color = clBlack;
				Form8->Label2->Font->Color = clBlack;
				Form8->Dash->Font->Color = clBlack;
				Form8->Symbol->Font->Color = clBlack;
		}
				else if (Form7->First->Checked)
		{
				Form8->Post->Picture->LoadFromFile(GetCurrentDir() + "\\PostDis.png");
				Form8->Fon->Picture->LoadFromFile(GetCurrentDir() + "\\DiaryFon.png");
				Form8->Dark_Check->Checked = false;
				Form8->RichEdit1->Color = clMoneyGreen;
				Form8->RichEdit2->Color = clMoneyGreen;
				Form8->ComboBox1->Color = clMoneyGreen;
				Form8->ListBox1->Color = clMoneyGreen;
				Form8->ListBox2->Color = clMoneyGreen;
				Form8->Label1->Font->Color = clBlack;
				Form8->Label3->Font->Color = clBlack;
				Form8->Label2->Font->Color = clBlack;
				Form8->Dash->Font->Color = clBlack;
				Form8->Symbol->Font->Color = clBlack;
		}
				else if (Form7->Sec->Checked)
		{
				Form8->Post->Picture->LoadFromFile(GetCurrentDir() + "\\PostDis.png");
				Form8->Fon->Picture->LoadFromFile(GetCurrentDir() + "\\DiaryFonDark.png");
				Form8->Dark_Check->Checked = true;
				Form8->RichEdit1->Color = clGray;
				Form8->RichEdit2->Color = clGray;
				Form8->ComboBox1->Color = clGray;
				Form8->ListBox1->Color = clGray;
				Form8->ListBox2->Color = clGray;
				Form8->Label1->Font->Color = clOlive;
				Form8->Label3->Font->Color = clOlive;
				Form8->Label2->Font->Color = clOlive;
				Form8->Dash->Font->Color = clOlive;
				Form8->Symbol->Font->Color = clOlive;
		}
				else if (Form7->Fourth->Checked)
		{
			Form8->Post->Picture->LoadFromFile(GetCurrentDir() + "\\PostDis.png");
				Form8->Fon->Picture->LoadFromFile(GetCurrentDir() + "\\DiaryFonBlue.png");
				Form8->Dark_Check->Checked = false;
				Form8->RichEdit1->Color = clSkyBlue;
				Form8->RichEdit2->Color = clSkyBlue;
				Form8->ComboBox1->Color = clSkyBlue;
				Form8->ListBox1->Color = clSkyBlue;
				Form8->ListBox2->Color = clSkyBlue;
				Form8->Label1->Font->Color = clBlue;
				Form8->Label3->Font->Color = clBlue;
				Form8->Label2->Font->Color = clBlack;
				Form8->Dash->Font->Color = clBlack;
				Form8->Symbol->Font->Color = clBlack;

				Form8->Post->Picture->LoadFromFile(GetCurrentDir() + "\\PostDarkDis.png");
		}
			else
			{
				Form8->Fon->Picture->LoadFromFile(GetCurrentDir() + "\\DiaryFon.png");
				Form8->Post->Picture->LoadFromFile(GetCurrentDir() + "\\PostDis.png");
				Form8->Dark_Check->Checked = false;
				Form8->RichEdit1->Color = clMoneyGreen;
				Form8->RichEdit2->Color = clMoneyGreen;
				Form8->ComboBox1->Color = clMoneyGreen;
				Form8->ListBox1->Color = clMoneyGreen;
				Form8->ListBox2->Color = clMoneyGreen;
				Form8->Label1->Font->Color = clBlack;
				Form8->Label3->Font->Color = clBlack;
				Form8->Label2->Font->Color = clBlack;
				Form8->Dash->Font->Color = clBlack;
				Form8->Symbol->Font->Color = clBlack;
            }
		}
		else if (Base->Main_Check->Checked)
		{
			if (Form7->First->Checked)
		{
		  Base->Fon->Picture->LoadFromFile(GetCurrentDir()+"\\MainFon.png");

		  Base->Pop->Picture->LoadFromFile(GetCurrentDir() + "\\TopRated.png");
		  Base->Main->Picture->LoadFromFile(GetCurrentDir() + "\\MainLibraryButton.png");
		  Base->Favorites->Picture->LoadFromFile(GetCurrentDir() + "\\MyFavorites.png");
		  Base->Diary->Picture->LoadFromFile(GetCurrentDir() + "\\MyDiary.png");

		  Base->Author->Font->Color = clMoneyGreen;
		  Base->BookName->Font->Color = clMoneyGreen;
		  Base->Greeting->Font->Color = clWhite;
		  Base->Quote->Font->Color = clMoneyGreen;

		  Base->Dark_Check->Checked = false;
		  Base->Def_check->Checked = false;
		}
				else if (Form7->Sec->Checked)
		{
		  Base->Fon->Picture->LoadFromFile(GetCurrentDir()+"\\MainFonDark.png");

		  Base->Pop->Picture->LoadFromFile(GetCurrentDir() + "\\TopRatedDark.png");
		  Base->Main->Picture->LoadFromFile(GetCurrentDir() + "\\MainLibraryDark.png");
		  Base->Favorites->Picture->LoadFromFile(GetCurrentDir() + "\\MyFavoritesDark.png");
		  Base->Diary->Picture->LoadFromFile(GetCurrentDir() + "\\MyDiaryDark.png");

		  Base->Author->Font->Color = clOlive;
		  Base->BookName->Font->Color = clOlive;
		  Base->Greeting->Font->Color = clOlive;
		  Base->Quote->Font->Color = clOlive;
		  Base->Dark_Check->Checked = true;
		  Base->Def_check->Checked = false;
		}
				else if (Form7->Third->Checked)
		{
		  Base->Fon->Picture->LoadFromFile(GetCurrentDir()+"\\MainFonStrict.png");

		  Base->Pop->Picture->LoadFromFile(GetCurrentDir() + "\\TopRatedDef.png");
		  Base->Main->Picture->LoadFromFile(GetCurrentDir() + "\\MainLibraryDef.png");
		  Base->Favorites->Picture->LoadFromFile(GetCurrentDir() + "\\MyFavoritesDef.png");
		  Base->Diary->Picture->LoadFromFile(GetCurrentDir() + "\\MyDiaryDef.png");

		  Base->Author->Font->Color = clSilver;
		  Base->BookName->Font->Color = clSilver;
		  Base->Greeting->Font->Color = clSilver;
		  Base->Quote->Font->Color = clSilver;
          		  Base->Dark_Check->Checked = false;
		  Base->Def_check->Checked = true;
		}
				else if (Form7->Fourth->Checked)
		{
		  Base->Fon->Picture->LoadFromFile(GetCurrentDir()+"\\MainFonCool.png");

		  Base->Pop->Picture->LoadFromFile(GetCurrentDir() + "\\TopRatedDef.png");
		  Base->Main->Picture->LoadFromFile(GetCurrentDir() + "\\MainLibraryDef.png");
		  Base->Favorites->Picture->LoadFromFile(GetCurrentDir() + "\\MyFavoritesDef.png");
		  Base->Diary->Picture->LoadFromFile(GetCurrentDir() + "\\MyDiaryDef.png");

		  Base->Author->Font->Color = clWhite;
		  Base->BookName->Font->Color = clWhite;
		  Base->Greeting->Font->Color = clWhite;
		  Base->Quote->Font->Color = clWhite;
				  Base->Dark_Check->Checked = false;
		  Base->Def_check->Checked = true;
		}
		else
		{

		  Base->Fon->Picture->LoadFromFile(GetCurrentDir()+"\\MainFon.png");

		  Base->Pop->Picture->LoadFromFile(GetCurrentDir() + "\\TopRated.png");
		  Base->Main->Picture->LoadFromFile(GetCurrentDir() + "\\MainLibraryButton.png");
		  Base->Favorites->Picture->LoadFromFile(GetCurrentDir() + "\\MyFavorites.png");
		  Base->Diary->Picture->LoadFromFile(GetCurrentDir() + "\\MyDiary.png");

		  Base->Author->Font->Color = clMoneyGreen;
		  Base->BookName->Font->Color = clMoneyGreen;
		  Base->Greeting->Font->Color = clWhite;
		  Base->Quote->Font->Color = clMoneyGreen;
				  Base->Dark_Check->Checked = false;
		  Base->Def_check->Checked = false;
		}
		}
		else if (Form3->MLibrary_Check->Checked)
			 {
			   if (Form7->First->Checked)
	{
	  Form3->Fon->Picture->LoadFromFile(GetCurrentDir() + "\\MLibraryFon.png");
	  Form3->BookName->Font->Color = clInactiveCaption;
	  Form3->BookAuthor->Font->Color = clInactiveCaption;
	  Form3->BookGenre->Font->Color = clInactiveCaption;
	  Form3->BookRating->Font->Color = clInactiveCaption;
	  Form3->Author->Font->Color = clInactiveCaption;
	  Form3->Name->Font->Color = clInactiveCaption;
	  Form3->Rating->Font->Color = clInactiveCaption;
	  Form3->Genre->Font->Color = clInactiveCaption;
	  Form3->Page->Font->Color = clInactiveCaption;
	  Form3->Page1->Font->Color = clInactiveCaption;
	  Form3->Page2->Font->Color = clInactiveCaption;

	  Form3->Vote->Font->Color = clInactiveCaption;
	  Form3->Label1->Font->Color = clInactiveCaption;
	  Form3->Label2->Font->Color = clInactiveCaption;
	  Form3->Label3->Font->Color = clInactiveCaption;
	  Form3->Label4->Font->Color = clInactiveCaption;
	  Form3->Label5->Font->Color = clInactiveCaption;

	  Form3->RichEdit1->Color = clMoneyGreen;
	  Form3->RichEdit2->Color = clMoneyGreen;

	  Form3->Dark_Check->Checked = false;

	}
	else if (Form7->Sec->Checked)
	{
	  Form3->Fon->Picture->LoadFromFile(GetCurrentDir() + "\\MLibraryFonDark.png");
	  Form3->BookName->Font->Color = clOlive;
	  Form3->BookAuthor->Font->Color = clOlive;
	  Form3->BookGenre->Font->Color = clOlive;
	  Form3->BookRating->Font->Color = clOlive;
	  Form3->Author->Font->Color = clOlive;
	  Form3->Name->Font->Color = clOlive;
	  Form3->Rating->Font->Color = clOlive;
	  Form3->Genre->Font->Color = clOlive;
	  Form3->Page->Font->Color = clOlive;
	  Form3->Page1->Font->Color = clOlive;
	  Form3->Page2->Font->Color = clOlive;

	  Form3->Vote->Font->Color = clOlive;
	  Form3->Label1->Font->Color = clOlive;
	  Form3->Label2->Font->Color = clOlive;
	  Form3->Label3->Font->Color = clOlive;
	  Form3->Label4->Font->Color = clOlive;
	  Form3->Label5->Font->Color = clOlive;

	  Form3->Dark_Check->Checked = true;
	  Form3->Post->Picture->LoadFromFile(GetCurrentDir()+ "\\PostDark.png");
	  Form3->RichEdit1->Color = clGray;
	  Form3->RichEdit2->Color = clGray;
	}
	else if(Form7->Third->Checked)
	{
	  Form3->Fon->Picture->LoadFromFile(GetCurrentDir() + "\\MLibraryFonStrict.png");
	  Form3->BookName->Font->Color = clInactiveCaption;
	  Form3->BookAuthor->Font->Color = clInactiveCaption;
	  Form3->BookGenre->Font->Color = clInactiveCaption;
	  Form3->BookRating->Font->Color = clInactiveCaption;
	  Form3->Author->Font->Color = clInactiveCaption;
	  Form3->Name->Font->Color = clInactiveCaption;
	  Form3->Rating->Font->Color = clInactiveCaption;
	  Form3->Genre->Font->Color = clInactiveCaption;
	  Form3->Page->Font->Color = clInactiveCaption;
	  Form3->Page1->Font->Color = clInactiveCaption;
	  Form3->Page2->Font->Color = clInactiveCaption;

	  Form3->Vote->Font->Color = clInactiveCaption;
	  Form3->Label1->Font->Color = clInactiveCaption;
	  Form3->Label2->Font->Color = clInactiveCaption;
	  Form3->Label3->Font->Color = clInactiveCaption;
	  Form3->Label4->Font->Color = clInactiveCaption;
	  Form3->Label5->Font->Color = clInactiveCaption;
	  Form3->Dark_Check->Checked = false;
	}
	else if (Form7->Fourth->Checked)
	{
	  Form3->Fon->Picture->LoadFromFile(GetCurrentDir() + "\\MLibraryFonColorful.png");
	  Form3->BookName->Font->Color = clBlack;
	  Form3->BookAuthor->Font->Color = clBlack;
	  Form3->BookGenre->Font->Color = clBlack;
	  Form3->BookRating->Font->Color = clBlack;
	  Form3->Author->Font->Color = clBlack;
	  Form3->Name->Font->Color = clBlack;
	  Form3->Rating->Font->Color = clBlack;
	  Form3->Genre->Font->Color = clBlack;
	  Form3->Page->Font->Color = clBlack;
	  Form3->Page1->Font->Color = clBlack;
	  Form3->Page2->Font->Color = clBlack;

	  Form3->Vote->Font->Color = clBlack;
	  Form3->Label1->Font->Color = clBlack;
	  Form3->Label2->Font->Color = clBlack;
	  Form3->Label3->Font->Color = clBlack;
	  Form3->Label4->Font->Color = clBlack;
	  Form3->Label5->Font->Color = clBlack;
	  Form3->Dark_Check->Checked = false;

	  Form3->RichEdit1->Color = clSilver;
	  Form3->RichEdit2->Color = clSilver;

	}
	else
	{
	  Form3->Fon->Picture->LoadFromFile(GetCurrentDir() + "\\MLibraryFon.png");
	  Form3->BookName->Font->Color = clInactiveCaption;
	  Form3->BookAuthor->Font->Color = clInactiveCaption;
	  Form3->BookGenre->Font->Color = clInactiveCaption;
	  Form3->BookRating->Font->Color = clInactiveCaption;
	  Form3->Author->Font->Color = clInactiveCaption;
	  Form3->Name->Font->Color = clInactiveCaption;
	  Form3->Rating->Font->Color = clInactiveCaption;
	  Form3->Genre->Font->Color = clInactiveCaption;
	  Form3->Page->Font->Color = clInactiveCaption;
	  Form3->Page1->Font->Color = clInactiveCaption;
	  Form3->Page2->Font->Color = clInactiveCaption;

	  Form3->Vote->Font->Color = clInactiveCaption;
	  Form3->Label1->Font->Color = clInactiveCaption;
	  Form3->Label2->Font->Color = clInactiveCaption;
	  Form3->Label3->Font->Color = clInactiveCaption;
	  Form3->Label4->Font->Color = clInactiveCaption;
	  Form3->Label5->Font->Color = clInactiveCaption;
	  Form3->Dark_Check->Checked = false;

	  Form3->RichEdit1->Color = clMoneyGreen;
	  Form3->RichEdit2->Color = clMoneyGreen;
	}
			 }
}
//---------------------------------------------------------------------------
__fastcall TForm7::TForm7(TComponent* Owner)
	: TForm(Owner)
{

}
//---------------------------------------------------------------------------
void __fastcall TForm7::FormActivate(TObject *Sender)
{
	Close_Form = false;
	Timer1->Enabled = true;
	Timer2->Enabled = false;
	Timer3->Enabled = false;
	Timer4->Enabled = false;
	Timer5->Enabled = false;
	Timer6->Enabled = false;

	 Form7->BorderStyle = bsNone;
	 X = -270;
	 Form7->Top = -270;
	 if (Form6->Top_Check->Checked)
	 {
		FirstPicture->Picture->LoadFromFile(GetCurrentDir()+ "\\Classic Green.png");
		SecPicture->Picture->LoadFromFile(GetCurrentDir()+ "\\TopFonDarkEx.png");
		ThirdPicture->Picture->LoadFromFile(GetCurrentDir()+ "\\TopFonStrictEx.png");
		FourthPicture->Picture->LoadFromFile(GetCurrentDir()+ "\\TopFonColorfulEx.png");
	 }
	 else if (Form5->Fav_check->Checked)
	 {
	 FirstPicture->Picture->LoadFromFile(GetCurrentDir()+ "\\FavClassicFonEx.png");
		SecPicture->Picture->LoadFromFile(GetCurrentDir()+ "\\FavFonDarkEx.png");
		ThirdPicture->Picture->LoadFromFile(GetCurrentDir()+ "\\FavFonStrictEx.png");
		FourthPicture->Picture->LoadFromFile(GetCurrentDir()+ "\\FavFonColorfulEx.png");
	 }
	 else if (Form8->Diary_Check->Checked)
		  {
				FirstPicture->Picture->LoadFromFile(GetCurrentDir()+ "\\DiaryFonEx.png");
				SecPicture->Picture->LoadFromFile(GetCurrentDir()+ "\\DiaryFonDarkEx.png");
				ThirdPicture->Picture->LoadFromFile(GetCurrentDir()+ "\\DiaryFonStrictEx.png");
				FourthPicture->Picture->LoadFromFile(GetCurrentDir()+ "\\DiaryFonBlueEx.png");
		  }
	 else if (Base->Main_Check->Checked)
			{
				FirstPicture->Picture->LoadFromFile(GetCurrentDir()+ "\\MainFonEx.png");
				SecPicture->Picture->LoadFromFile(GetCurrentDir()+ "\\MainFonDarkEx.png");
				ThirdPicture->Picture->LoadFromFile(GetCurrentDir()+ "\\MainFonStrictEx.png");
				FourthPicture->Picture->LoadFromFile(GetCurrentDir()+ "\\MainFonCoolEx.png");
			}
			else if (Form3->MLibrary_Check->Checked)
			{
				FirstPicture->Picture->LoadFromFile(GetCurrentDir()+ "\\MLibraryFonEx.png");
				SecPicture->Picture->LoadFromFile(GetCurrentDir()+ "\\MLibraryFonDarkEx.png");
				ThirdPicture->Picture->LoadFromFile(GetCurrentDir()+ "\\MLibraryFonStrictEx.png");
				FourthPicture->Picture->LoadFromFile(GetCurrentDir()+ "\\MLibraryFonColorfulEx.png");
			}
}
//---------------------------------------------------------------------------
void __fastcall TForm7::ThirdPictureMouseEnter(TObject *Sender)
{
  if (Form6->Top_Check->Checked)
  {
	  		Form6->Fon->Picture->LoadFromFile(GetCurrentDir() + "\\TopFonStrict.png");

		Form6->BookName->Font->Color = clBlack;
	  Form6->BookAuthor->Font->Color = clBlack;
	  Form6->BookGenre->Font->Color = clBlack;
	  Form6->BookRating->Font->Color = clBlack;
	  Form6->Author->Font->Color = clBlack;
	  Form6->Name->Font->Color = clBlack;
	  Form6->Rating->Font->Color = clBlack;
	  Form6->Genre->Font->Color = clBlack;
	  Form6->Page->Font->Color = clBlack;
	  Form6->Page1->Font->Color = clBlack;
	  Form6->Page2->Font->Color = clBlack;
	  Form6->Top->Color = clSilver;
  }
  else if (Form5->Fav_check->Checked)
		{
				Form5->Fon->Picture->LoadFromFile(GetCurrentDir() + "\\FavFonStrict.png");

				Form5->BookName->Font->Color = clBlack;
				Form5->BookAuthor->Font->Color = clBlack;
				Form5->BookGenre->Font->Color = clBlack;
				Form5->BookRating->Font->Color = clBlack;
				Form5->Author->Font->Color = clBlack;
				Form5->Name->Font->Color = clBlack;
				Form5->Rating->Font->Color = clBlack;
				Form5->Genre->Font->Color = clBlack;
				Form5->Page->Font->Color = clBlack;
				Form5->Page1->Font->Color = clBlack;
				Form5->Page2->Font->Color = clBlack;
		}
		  else if (Form8->Diary_Check->Checked)
		{
				Form8->Post->Picture->LoadFromFile(GetCurrentDir() + "\\PostDis.png");
				Form8->Fon->Picture->LoadFromFile(GetCurrentDir() + "\\DiaryFonStrict.png");
				Form8->Dark_Check->Checked = false;
				Form8->RichEdit1->Color = clGray;
				Form8->RichEdit2->Color = clGray;
				Form8->ComboBox1->Color = clGray;
				Form8->ListBox1->Color = clGray;
				Form8->ListBox2->Color = clGray;
				Form8->Label1->Font->Color = clBlack;
				Form8->Label3->Font->Color = clBlack;
				Form8->Label2->Font->Color = clBlack;
				Form8->Dash->Font->Color = clBlack;
				Form8->Symbol->Font->Color = clBlack;
		}
		else if (Base->Main_Check->Checked)
		{
		  Base->Fon->Picture->LoadFromFile(GetCurrentDir()+"\\MainFonStrict.png");

		  Base->Pop->Picture->LoadFromFile(GetCurrentDir() + "\\TopRatedDef.png");
		  Base->Main->Picture->LoadFromFile(GetCurrentDir() + "\\MainLibraryDef.png");
		  Base->Favorites->Picture->LoadFromFile(GetCurrentDir() + "\\MyFavoritesDef.png");
		  Base->Diary->Picture->LoadFromFile(GetCurrentDir() + "\\MyDiaryDef.png");

		  Base->Author->Font->Color = clSilver;
		  Base->BookName->Font->Color = clSilver;
		  Base->Greeting->Font->Color = clSilver;
		  Base->Quote->Font->Color = clSilver;

			Base->Dark_Check->Checked = false;
		  Base->Def_check->Checked = true;
		}
		else if(Form3->MLibrary_Check->Checked)
	{
	  Form3->Fon->Picture->LoadFromFile(GetCurrentDir() + "\\MLibraryFonStrict.png");
	  Form3->BookName->Font->Color = clInactiveCaption;
	  Form3->BookAuthor->Font->Color = clInactiveCaption;
	  Form3->BookGenre->Font->Color = clInactiveCaption;
	  Form3->BookRating->Font->Color = clInactiveCaption;
	  Form3->Author->Font->Color = clInactiveCaption;
	  Form3->Name->Font->Color = clInactiveCaption;
	  Form3->Rating->Font->Color = clInactiveCaption;
	  Form3->Genre->Font->Color = clInactiveCaption;
	  Form3->Page->Font->Color = clInactiveCaption;
	  Form3->Page1->Font->Color = clInactiveCaption;
	  Form3->Page2->Font->Color = clInactiveCaption;

	  Form3->Vote->Font->Color = clInactiveCaption;
	  Form3->Label1->Font->Color = clInactiveCaption;
	  Form3->Label2->Font->Color = clInactiveCaption;
	  Form3->Label3->Font->Color = clInactiveCaption;
	  Form3->Label4->Font->Color = clInactiveCaption;
	  Form3->Label5->Font->Color = clInactiveCaption;
	  Form3->Dark_Check->Checked = false;

		  Form3->RichEdit1->Color = clGray;
	  Form3->RichEdit2->Color = clGray;
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm7::ThirdPictureMouseLeave(TObject *Sender)
{
	MouseLeaveAnyPicture();
}
//---------------------------------------------------------------------------
void __fastcall TForm7::FirstPictureMouseEnter(TObject *Sender)
{
	 if (Form6->Top_Check->Checked)
  {
		  Form6->Fon->Picture->LoadFromFile(GetCurrentDir() + "\\TopFon.png");
	  Form6->BookName->Font->Color = clGreen;
	  Form6->BookAuthor->Font->Color = clGreen;
	  Form6->BookGenre->Font->Color = clGreen;
	  Form6->BookRating->Font->Color = clGreen;
	  Form6->Author->Font->Color = clGreen;
	  Form6->Name->Font->Color = clGreen;
	  Form6->Rating->Font->Color = clGreen;
	  Form6->Genre->Font->Color = clGreen;
	  Form6->Page->Font->Color = clGreen;
	  Form6->Page1->Font->Color = clGreen;
	  Form6->Page2->Font->Color = clGreen;
	  Form6->Top->Color = clMoneyGreen;
  }
	else if (Form5->Fav_check->Checked)
		{
				Form5->Fon->Picture->LoadFromFile(GetCurrentDir() + "\\FavFon.png");

				Form5->BookName->Font->Color = clGreen;
				Form5->BookAuthor->Font->Color = clGreen;
				Form5->BookGenre->Font->Color = clGreen;
				Form5->BookRating->Font->Color = clGreen;
				Form5->Author->Font->Color = clGreen;
				Form5->Name->Font->Color = clGreen;
				Form5->Rating->Font->Color = clGreen;
				Form5->Genre->Font->Color = clGreen;
				Form5->Page->Font->Color = clGreen;
				Form5->Page1->Font->Color = clGreen;
				Form5->Page2->Font->Color = clGreen;
		}

		else if (Form8->Diary_Check->Checked)
		{
				Form8->Post->Picture->LoadFromFile(GetCurrentDir() + "\\PostDis.png");
				Form8->Fon->Picture->LoadFromFile(GetCurrentDir() + "\\DiaryFon.png");
				Form8->Dark_Check->Checked = false;
				Form8->RichEdit1->Color = clMoneyGreen;
				Form8->RichEdit2->Color = clMoneyGreen;
				Form8->ComboBox1->Color = clMoneyGreen;
				Form8->ListBox1->Color = clMoneyGreen;
				Form8->ListBox2->Color = clMoneyGreen;
				Form8->Label1->Font->Color = clBlack;
				Form8->Label3->Font->Color = clBlack;
				Form8->Label2->Font->Color = clBlack;
				Form8->Dash->Font->Color = clBlack;
				Form8->Symbol->Font->Color = clBlack;
		}

		else if (Base->Main_Check->Checked)
		{
		  Base->Fon->Picture->LoadFromFile(GetCurrentDir()+"\\MainFon.png");

		  Base->Pop->Picture->LoadFromFile(GetCurrentDir() + "\\TopRated.png");
		  Base->Main->Picture->LoadFromFile(GetCurrentDir() + "\\MainLibrary.png");
		  Base->Favorites->Picture->LoadFromFile(GetCurrentDir() + "\\MyFavorites.png");
		  Base->Diary->Picture->LoadFromFile(GetCurrentDir() + "\\MyDiary.png");

		  Base->Author->Font->Color = clMoneyGreen;
		  Base->BookName->Font->Color = clMoneyGreen;
		  Base->Greeting->Font->Color = clWhite;
		  Base->Quote->Font->Color = clMoneyGreen;
          		  Base->Dark_Check->Checked = false;
		  Base->Def_check->Checked = false;
		}
	 else	if (Form3->MLibrary_Check->Checked)
	{
	  Form3->Fon->Picture->LoadFromFile(GetCurrentDir() + "\\MLibraryFon.png");
	  Form3->BookName->Font->Color = clInactiveCaption;
	  Form3->BookAuthor->Font->Color = clInactiveCaption;
	  Form3->BookGenre->Font->Color = clInactiveCaption;
	  Form3->BookRating->Font->Color = clInactiveCaption;
	  Form3->Author->Font->Color = clInactiveCaption;
	  Form3->Name->Font->Color = clInactiveCaption;
	  Form3->Rating->Font->Color = clInactiveCaption;
	  Form3->Genre->Font->Color = clInactiveCaption;
	  Form3->Page->Font->Color = clInactiveCaption;
	  Form3->Page1->Font->Color = clInactiveCaption;
	  Form3->Page2->Font->Color = clInactiveCaption;

	  Form3->Vote->Font->Color = clInactiveCaption;
	  Form3->Label1->Font->Color = clInactiveCaption;
	  Form3->Label2->Font->Color = clInactiveCaption;
	  Form3->Label3->Font->Color = clInactiveCaption;
	  Form3->Label4->Font->Color = clInactiveCaption;
	  Form3->Label5->Font->Color = clInactiveCaption;
	  Form3->Dark_Check->Checked = false;
      	  Form3->RichEdit1->Color = clMoneyGreen;
	  Form3->RichEdit2->Color = clMoneyGreen;
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm7::FirstPictureMouseLeave(TObject *Sender)
{
		MouseLeaveAnyPicture();
}
//---------------------------------------------------------------------------
void __fastcall TForm7::SecPictureMouseEnter(TObject *Sender)
{
       if (Form6->Top_Check->Checked)
  {
	  	  Form6->Fon->Picture->LoadFromFile(GetCurrentDir() + "\\TopFonDark.png");

	  Form6->BookName->Font->Color = clSilver;
	  Form6->BookAuthor->Font->Color = clSilver;
	  Form6->BookGenre->Font->Color = clSilver;
	  Form6->BookRating->Font->Color = clSilver;
	  Form6->Author->Font->Color = clSilver;
	  Form6->Name->Font->Color = clSilver;
	  Form6->Rating->Font->Color = clSilver;
	  Form6->Genre->Font->Color = clSilver;
	  Form6->Page->Font->Color = clSilver;
	  Form6->Page1->Font->Color = clSilver;
	  Form6->Page2->Font->Color = clSilver;
	  Form6->Top->Color = clSilver;
  }

	  else if (Form5->Fav_check->Checked)
		{
				Form5->Fon->Picture->LoadFromFile(GetCurrentDir() + "\\FavFonDark.png");

				Form5->BookName->Font->Color = clSilver;
				Form5->BookAuthor->Font->Color = clSilver;
				Form5->BookGenre->Font->Color = clSilver;
				Form5->BookRating->Font->Color = clSilver;
				Form5->Author->Font->Color = clSilver;
				Form5->Name->Font->Color = clSilver;
				Form5->Rating->Font->Color = clSilver;
				Form5->Genre->Font->Color = clSilver;
				Form5->Page->Font->Color = clSilver;
				Form5->Page1->Font->Color = clSilver;
				Form5->Page2->Font->Color = clSilver;
		}
		else if (Form8->Diary_Check->Checked)
		{
				Form8->Post->Picture->LoadFromFile(GetCurrentDir() + "\\PostDarkDis.png");
				Form8->Fon->Picture->LoadFromFile(GetCurrentDir() + "\\DiaryFonDark.png");
				Form8->Dark_Check->Checked = true;
				Form8->RichEdit1->Color = clGray;
				Form8->RichEdit2->Color = clGray;
				Form8->ComboBox1->Color = clGray;
				Form8->ListBox1->Color = clGray;
				Form8->ListBox2->Color = clGray;
				Form8->Label1->Font->Color = clOlive;
				Form8->Label3->Font->Color = clOlive;
				Form8->Label2->Font->Color = clOlive;
				Form8->Dash->Font->Color = clOlive;
				Form8->Symbol->Font->Color = clOlive;
		}

		else if (Base->Main_Check->Checked)
		{
		  Base->Fon->Picture->LoadFromFile(GetCurrentDir()+"\\MainFonDark.png");

		  Base->Pop->Picture->LoadFromFile(GetCurrentDir() + "\\TopRatedDark.png");
		  Base->Main->Picture->LoadFromFile(GetCurrentDir() + "\\MainLibraryDark.png");
		  Base->Favorites->Picture->LoadFromFile(GetCurrentDir() + "\\MyFavoritesDark.png");
		  Base->Diary->Picture->LoadFromFile(GetCurrentDir() + "\\MyDiaryDark.png");

		  Base->Author->Font->Color = clOlive;
		  Base->BookName->Font->Color = clOlive;
		  Base->Greeting->Font->Color = clOlive;
		  Base->Quote->Font->Color = clOlive;
				  Base->Dark_Check->Checked = true;
		  Base->Def_check->Checked = false;
		}
			else if (Form3->MLibrary_Check->Checked)
	{
	  Form3->Fon->Picture->LoadFromFile(GetCurrentDir() + "\\MLibraryFonDark.png");
	  Form3->BookName->Font->Color = clOlive;
	  Form3->BookAuthor->Font->Color = clOlive;
	  Form3->BookGenre->Font->Color = clOlive;
	  Form3->BookRating->Font->Color = clOlive;
	  Form3->Author->Font->Color = clOlive;
	  Form3->Name->Font->Color = clOlive;
	  Form3->Rating->Font->Color = clOlive;
	  Form3->Genre->Font->Color = clOlive;
	  Form3->Page->Font->Color = clOlive;
	  Form3->Page1->Font->Color = clOlive;
	  Form3->Page2->Font->Color = clOlive;

	  Form3->Vote->Font->Color = clOlive;
	  Form3->Label1->Font->Color = clOlive;
	  Form3->Label2->Font->Color = clOlive;
	  Form3->Label3->Font->Color = clOlive;
	  Form3->Label4->Font->Color = clOlive;
	  Form3->Label5->Font->Color = clOlive;

	  Form3->Dark_Check->Checked = true;
	  Form3->Post->Picture->LoadFromFile(GetCurrentDir()+ "\\PostDark.png");
		  Form3->RichEdit1->Color = clSilver;
	  Form3->RichEdit2->Color = clSilver;
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm7::SecPictureMouseLeave(TObject *Sender)
{
	MouseLeaveAnyPicture();
}
//---------------------------------------------------------------------------
void __fastcall TForm7::FourthPictureMouseEnter(TObject *Sender)
{
	if (Form6->Top_Check->Checked)
	{


	  	   Form6->Fon->Picture->LoadFromFile(GetCurrentDir() + "\\TopFonColorful.png");

		Form6->BookName->Font->Color = clTeal;
	  Form6->BookAuthor->Font->Color = clTeal;
	  Form6->BookGenre->Font->Color = clTeal;
	  Form6->BookRating->Font->Color = clTeal;
	  Form6->Author->Font->Color = clTeal;
	  Form6->Name->Font->Color = clTeal;
	  Form6->Rating->Font->Color = clTeal;
	  Form6->Genre->Font->Color = clTeal;
	  Form6->Page->Font->Color = clTeal;
	  Form6->Page1->Font->Color = clTeal;
	  Form6->Page2->Font->Color = clTeal;
	  Form6->Top->Color = clSilver;
	}
		  else if (Form5->Fav_check->Checked)
		{

				Form5->Fon->Picture->LoadFromFile(GetCurrentDir() + "\\FavFonColorful.png");

				Form5->BookName->Font->Color = clTeal;
				Form5->BookAuthor->Font->Color = clTeal;
				Form5->BookGenre->Font->Color = clTeal;
				Form5->BookRating->Font->Color = clTeal;
				Form5->Author->Font->Color = clTeal;
				Form5->Name->Font->Color = clTeal;
				Form5->Rating->Font->Color = clTeal;
				Form5->Genre->Font->Color = clTeal;
				Form5->Page->Font->Color = clTeal;
				Form5->Page1->Font->Color = clTeal;
				Form5->Page2->Font->Color = clTeal;
		}
		else if (Form8->Diary_Check->Checked)
		{
				Form8->Post->Picture->LoadFromFile(GetCurrentDir() + "\\PostDis.png");
				Form8->Fon->Picture->LoadFromFile(GetCurrentDir() + "\\DiaryFonBlue.png");
				Form8->Dark_Check->Checked = false;
				Form8->RichEdit1->Color = clSkyBlue;
				Form8->RichEdit2->Color = clSkyBlue;
				Form8->ComboBox1->Color = clSkyBlue;
				Form8->ListBox1->Color = clSkyBlue;
				Form8->ListBox2->Color = clSkyBlue;
				Form8->Label1->Font->Color = clBlue;
				Form8->Label3->Font->Color = clBlue;
				Form8->Label2->Font->Color = clBlack;
				Form8->Dash->Font->Color = clBlack;
				Form8->Symbol->Font->Color = clBlack;
		}
		else if (Base->Main_Check->Checked)
		{
		  Base->Fon->Picture->LoadFromFile(GetCurrentDir()+"\\MainFonCool.png");

		  Base->Pop->Picture->LoadFromFile(GetCurrentDir() + "\\TopRatedDef.png");
		  Base->Main->Picture->LoadFromFile(GetCurrentDir() + "\\MainLibraryDef.png");
		  Base->Favorites->Picture->LoadFromFile(GetCurrentDir() + "\\MyFavoritesDef.png");
		  Base->Diary->Picture->LoadFromFile(GetCurrentDir() + "\\MyDiaryDef.png");

		  Base->Author->Font->Color = clWhite;
		  Base->BookName->Font->Color = clWhite;
		  Base->Greeting->Font->Color = clWhite;
		  Base->Quote->Font->Color = clWhite;
          		  Base->Dark_Check->Checked = false;
		  Base->Def_check->Checked = true;
		}
	else if (Form3->MLibrary_Check->Checked)
	{
	  Form3->Fon->Picture->LoadFromFile(GetCurrentDir() + "\\MLibraryFonColorful.png");
	  Form3->BookName->Font->Color = clBlack;
	  Form3->BookAuthor->Font->Color = clBlack;
	  Form3->BookGenre->Font->Color = clBlack;
	  Form3->BookRating->Font->Color = clBlack;
	  Form3->Author->Font->Color = clBlack;
	  Form3->Name->Font->Color = clBlack;
	  Form3->Rating->Font->Color = clBlack;
	  Form3->Genre->Font->Color = clBlack;
	  Form3->Page->Font->Color = clBlack;
	  Form3->Page1->Font->Color = clBlack;
	  Form3->Page2->Font->Color = clBlack;

	  Form3->Vote->Font->Color = clBlack;
	  Form3->Label1->Font->Color = clBlack;
	  Form3->Label2->Font->Color = clBlack;
	  Form3->Label3->Font->Color = clBlack;
	  Form3->Label4->Font->Color = clBlack;
	  Form3->Label5->Font->Color = clBlack;
	  Form3->Dark_Check->Checked = false;

		  Form3->RichEdit1->Color = clSkyBlue;
	  Form3->RichEdit2->Color = clSkyBlue;
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm7::FourthPictureMouseLeave(TObject *Sender)
{
	MouseLeaveAnyPicture();
}
//---------------------------------------------------------------------------
void __fastcall TForm7::FirstPictureClick(TObject *Sender)
{
  if (Form6->Top_Check->Checked)
  {
	  Form6->Fon->Picture->LoadFromFile(GetCurrentDir() + "\\TopFon.png");
	  Form6->BookName->Font->Color = clGreen;
	  Form6->BookAuthor->Font->Color = clGreen;
	  Form6->BookGenre->Font->Color = clGreen;
	  Form6->BookRating->Font->Color = clGreen;
	  Form6->Author->Font->Color = clGreen;
	  Form6->Name->Font->Color = clGreen;
	  Form6->Rating->Font->Color = clGreen;
	  Form6->Genre->Font->Color = clGreen;
	  Form6->Page->Font->Color = clGreen;
	  Form6->Page1->Font->Color = clGreen;
	  Form6->Page2->Font->Color = clGreen;
	  Form6->Top->Color = clMoneyGreen;
  }
	else if (Form5->Fav_check->Checked)
  {
	  Form5->Fon->Picture->LoadFromFile(GetCurrentDir() + "\\FavFon.png");
	  Form5->BookName->Font->Color = clNavy;
	  Form5->BookAuthor->Font->Color = clNavy;
	  Form5->BookGenre->Font->Color = clNavy;
	  Form5->BookRating->Font->Color = clNavy;
	  Form5->Author->Font->Color = clNavy;
	  Form5->Name->Font->Color = clNavy;
	  Form5->Rating->Font->Color = clNavy;
	  Form5->Genre->Font->Color = clNavy;
	  Form5->Page->Font->Color = clNavy;
	  Form5->Page1->Font->Color = clNavy;
	  Form5->Page2->Font->Color = clNavy;
  }
  		else if (Form8->Diary_Check->Checked)
		{
				Form8->Post->Picture->LoadFromFile(GetCurrentDir() + "\\PostDis.png");
				Form8->Fon->Picture->LoadFromFile(GetCurrentDir() + "\\DiaryFon.png");
				Form8->Dark_Check->Checked = false;
				Form8->RichEdit1->Color = clMoneyGreen;
				Form8->RichEdit2->Color = clMoneyGreen;
				Form8->ComboBox1->Color = clMoneyGreen;
				Form8->ListBox1->Color = clMoneyGreen;
				Form8->ListBox2->Color = clMoneyGreen;
				Form8->Label1->Font->Color = clBlack;
				Form8->Label3->Font->Color = clBlack;
				Form8->Label2->Font->Color = clBlack;
				Form8->Dash->Font->Color = clBlack;
				Form8->Symbol->Font->Color = clBlack;
		}
				else if (Base->Main_Check->Checked)
		{
		  Base->Fon->Picture->LoadFromFile(GetCurrentDir()+"\\MainFon.png");

		  Base->Pop->Picture->LoadFromFile(GetCurrentDir() + "\\TopRated.png");
		  Base->Main->Picture->LoadFromFile(GetCurrentDir() + "\\MainLibraryButton.png");
		  Base->Favorites->Picture->LoadFromFile(GetCurrentDir() + "\\MyFavorites.png");
		  Base->Diary->Picture->LoadFromFile(GetCurrentDir() + "\\MyDiary.png");

		  Base->Author->Font->Color = clMoneyGreen;
		  Base->BookName->Font->Color = clMoneyGreen;
		  Base->Greeting->Font->Color = clWhite;
		  Base->Quote->Font->Color = clMoneyGreen;
          		  Base->Dark_Check->Checked = false;
		  Base->Def_check->Checked = false;
		}
		if (Form3->MLibrary_Check->Checked)
	{
	  Form3->Fon->Picture->LoadFromFile(GetCurrentDir() + "\\MLibraryFon.png");
	  Form3->BookName->Font->Color = clInactiveCaption;
	  Form3->BookAuthor->Font->Color = clInactiveCaption;
	  Form3->BookGenre->Font->Color = clInactiveCaption;
	  Form3->BookRating->Font->Color = clInactiveCaption;
	  Form3->Author->Font->Color = clInactiveCaption;
	  Form3->Name->Font->Color = clInactiveCaption;
	  Form3->Rating->Font->Color = clInactiveCaption;
	  Form3->Genre->Font->Color = clInactiveCaption;
	  Form3->Page->Font->Color = clInactiveCaption;
	  Form3->Page1->Font->Color = clInactiveCaption;
	  Form3->Page2->Font->Color = clInactiveCaption;

	  Form3->Vote->Font->Color = clInactiveCaption;
	  Form3->Label1->Font->Color = clInactiveCaption;
	  Form3->Label2->Font->Color = clInactiveCaption;
	  Form3->Label3->Font->Color = clInactiveCaption;
	  Form3->Label4->Font->Color = clInactiveCaption;
	  Form3->Label5->Font->Color = clInactiveCaption;
	  Form3->Dark_Check->Checked = false;
      	  Form3->RichEdit1->Color = clMoneyGreen;
	  Form3->RichEdit2->Color = clMoneyGreen;
	}

  First->Checked = true;
  Sec->Checked = false;
  Third->Checked = false;
  Fourth->Checked = false;
  Form7->Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm7::SecPictureClick(TObject *Sender)
{
	 if (Form6->Top_Check->Checked)
  {
	  	  Form6->Fon->Picture->LoadFromFile(GetCurrentDir() + "\\TopFonDark.png");

	  Form6->BookName->Font->Color = clSilver;
	  Form6->BookAuthor->Font->Color = clSilver;
	  Form6->BookGenre->Font->Color = clSilver;
	  Form6->BookRating->Font->Color = clSilver;
	  Form6->Author->Font->Color = clSilver;
	  Form6->Name->Font->Color = clSilver;
	  Form6->Rating->Font->Color = clSilver;
	  Form6->Genre->Font->Color = clSilver;
	  Form6->Page->Font->Color = clSilver;
	  Form6->Page1->Font->Color = clSilver;
	  Form6->Page2->Font->Color = clSilver;
	  Form6->Top->Color = clSilver;
  }
	else if (Form5->Fav_check->Checked)
  {
	  Form5->Fon->Picture->LoadFromFile(GetCurrentDir() + "\\FavFonDark.png");
	  Form5->BookName->Font->Color = clSilver;
	  Form5->BookAuthor->Font->Color = clSilver;
	  Form5->BookGenre->Font->Color = clSilver;
	  Form5->BookRating->Font->Color = clSilver;
	  Form5->Author->Font->Color = clSilver;
	  Form5->Name->Font->Color = clSilver;
	  Form5->Rating->Font->Color = clSilver;
	  Form5->Genre->Font->Color = clSilver;
	  Form5->Page->Font->Color = clSilver;
	  Form5->Page1->Font->Color = clSilver;
	  Form5->Page2->Font->Color = clSilver;
  }
  		else if (Form8->Diary_Check->Checked)
		{
				Form8->Post->Picture->LoadFromFile(GetCurrentDir() + "\\PostDarkDis.png");
				Form8->Fon->Picture->LoadFromFile(GetCurrentDir() + "\\DiaryFonDark.png");
				Form8->Dark_Check->Checked = true;
				Form8->RichEdit1->Color = clGray;
				Form8->RichEdit2->Color = clGray;
				Form8->ComboBox1->Color = clGray;
				Form8->ListBox1->Color = clGray;
				Form8->ListBox2->Color = clGray;
				Form8->Label1->Font->Color = clOlive;
				Form8->Label3->Font->Color = clOlive;
				Form8->Label2->Font->Color = clOlive;
				Form8->Dash->Font->Color = clOlive;
				Form8->Symbol->Font->Color = clOlive;
		}
        		else if (Base->Main_Check->Checked)
		{
		  Base->Fon->Picture->LoadFromFile(GetCurrentDir()+"\\MainFonDark.png");

		  Base->Pop->Picture->LoadFromFile(GetCurrentDir() + "\\TopRatedDark.png");
		  Base->Main->Picture->LoadFromFile(GetCurrentDir() + "\\MainLibraryDark.png");
		  Base->Favorites->Picture->LoadFromFile(GetCurrentDir() + "\\MyFavoritesDark.png");
		  Base->Diary->Picture->LoadFromFile(GetCurrentDir() + "\\MyDiaryDark.png");

		  Base->Author->Font->Color = clOlive;
		  Base->BookName->Font->Color = clOlive;
		  Base->Greeting->Font->Color = clOlive;
		  Base->Quote->Font->Color = clOlive;
				  Base->Dark_Check->Checked = true;
		  Base->Def_check->Checked = false;
		}
			else if (Form3->MLibrary_Check->Checked)
	{
	  Form3->Fon->Picture->LoadFromFile(GetCurrentDir() + "\\MLibraryFonDark.png");
	  Form3->BookName->Font->Color = clOlive;
	  Form3->BookAuthor->Font->Color = clOlive;
	  Form3->BookGenre->Font->Color = clOlive;
	  Form3->BookRating->Font->Color = clOlive;
	  Form3->Author->Font->Color = clOlive;
	  Form3->Name->Font->Color = clOlive;
	  Form3->Rating->Font->Color = clOlive;
	  Form3->Genre->Font->Color = clOlive;
	  Form3->Page->Font->Color = clOlive;
	  Form3->Page1->Font->Color = clOlive;
	  Form3->Page2->Font->Color = clOlive;

	  Form3->Vote->Font->Color = clOlive;
	  Form3->Label1->Font->Color = clOlive;
	  Form3->Label2->Font->Color = clOlive;
	  Form3->Label3->Font->Color = clOlive;
	  Form3->Label4->Font->Color = clOlive;
	  Form3->Label5->Font->Color = clOlive;

	  Form3->Dark_Check->Checked = true;
      Form3->Post->Picture->LoadFromFile(GetCurrentDir()+ "\\PostDark.png");
		Form3->RichEdit1->Color = clSilver;
	  Form3->RichEdit2->Color = clSilver;
	}
  First->Checked = false;
  Sec->Checked = true;
  Third->Checked = false;
  Fourth->Checked = false;
	Form7->Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm7::ThirdPictureClick(TObject *Sender)
{
  if (Form6->Top_Check->Checked)
  {
	  		Form6->Fon->Picture->LoadFromFile(GetCurrentDir() + "\\TopFonStrict.png");

		Form6->BookName->Font->Color = clBlack;
	  Form6->BookAuthor->Font->Color = clBlack;
	  Form6->BookGenre->Font->Color = clBlack;
	  Form6->BookRating->Font->Color = clBlack;
	  Form6->Author->Font->Color = clBlack;
	  Form6->Name->Font->Color = clBlack;
	  Form6->Rating->Font->Color = clBlack;
	  Form6->Genre->Font->Color = clBlack;
	  Form6->Page->Font->Color = clBlack;
	  Form6->Page1->Font->Color = clBlack;
	  Form6->Page2->Font->Color = clBlack;
	  Form6->Top->Color = clSilver;
  }
	else if (Form5->Fav_check->Checked)
  {
	  Form5->Fon->Picture->LoadFromFile(GetCurrentDir() + "\\FavFonStrict.png");
	  Form5->BookName->Font->Color = clBlack;
	  Form5->BookAuthor->Font->Color = clBlack;
	  Form5->BookGenre->Font->Color = clBlack;
	  Form5->BookRating->Font->Color = clBlack;
	  Form5->Author->Font->Color = clBlack;
	  Form5->Name->Font->Color = clBlack;
	  Form5->Rating->Font->Color = clBlack;
	  Form5->Genre->Font->Color = clBlack;
	  Form5->Page->Font->Color = clBlack;
	  Form5->Page1->Font->Color = clBlack;
	  Form5->Page2->Font->Color = clBlack;
  }
  		  else if (Form8->Diary_Check->Checked)
		{
				Form8->Post->Picture->LoadFromFile(GetCurrentDir() + "\\PostDis.png");
				Form8->Fon->Picture->LoadFromFile(GetCurrentDir() + "\\DiaryFonStrict.png");
				Form8->Dark_Check->Checked = false;
				Form8->RichEdit1->Color = clGray;
				Form8->RichEdit2->Color = clGray;
				Form8->ComboBox1->Color = clGray;
				Form8->ListBox1->Color = clGray;
				Form8->ListBox2->Color = clGray;
				Form8->Label1->Font->Color = clBlack;
				Form8->Label3->Font->Color = clBlack;
				Form8->Label2->Font->Color = clBlack;
				Form8->Dash->Font->Color = clBlack;
				Form8->Symbol->Font->Color = clBlack;
		}
        		else if (Base->Main_Check->Checked)
		{
		  Base->Fon->Picture->LoadFromFile(GetCurrentDir()+"\\MainFonStrict.png");

		  Base->Pop->Picture->LoadFromFile(GetCurrentDir() + "\\TopRatedDef.png");
		  Base->Main->Picture->LoadFromFile(GetCurrentDir() + "\\MainLibraryDef.png");
		  Base->Favorites->Picture->LoadFromFile(GetCurrentDir() + "\\MyFavoritesDef.png");
		  Base->Diary->Picture->LoadFromFile(GetCurrentDir() + "\\MyDiaryDef.png");

		  Base->Author->Font->Color = clSilver;
		  Base->BookName->Font->Color = clSilver;
		  Base->Greeting->Font->Color = clSilver;
		  Base->Quote->Font->Color = clSilver;
				  Base->Dark_Check->Checked = false;
		  Base->Def_check->Checked = true;
		}
	else if(Form3->MLibrary_Check->Checked)
	{
	  Form3->Fon->Picture->LoadFromFile(GetCurrentDir() + "\\MLibraryFonStrict.png");
	  Form3->BookName->Font->Color = clInactiveCaption;
	  Form3->BookAuthor->Font->Color = clInactiveCaption;
	  Form3->BookGenre->Font->Color = clInactiveCaption;
	  Form3->BookRating->Font->Color = clInactiveCaption;
	  Form3->Author->Font->Color = clInactiveCaption;
	  Form3->Name->Font->Color = clInactiveCaption;
	  Form3->Rating->Font->Color = clInactiveCaption;
	  Form3->Genre->Font->Color = clInactiveCaption;
	  Form3->Page->Font->Color = clInactiveCaption;
	  Form3->Page1->Font->Color = clInactiveCaption;
	  Form3->Page2->Font->Color = clInactiveCaption;

	  Form3->Vote->Font->Color = clInactiveCaption;
	  Form3->Label1->Font->Color = clInactiveCaption;
	  Form3->Label2->Font->Color = clInactiveCaption;
	  Form3->Label3->Font->Color = clInactiveCaption;
	  Form3->Label4->Font->Color = clInactiveCaption;
	  Form3->Label5->Font->Color = clInactiveCaption;
	  Form3->Dark_Check->Checked = false;

		  Form3->RichEdit1->Color = clGray;
	  Form3->RichEdit2->Color = clGray;
	}
  First->Checked = false;
  Sec->Checked = false;
  Third->Checked = true;
  Fourth->Checked = false;
	Form7->Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm7::FourthPictureClick(TObject *Sender)
{
  if (Form6->Top_Check->Checked)
  {
	  	   Form6->Fon->Picture->LoadFromFile(GetCurrentDir() + "\\TopFonColorful.png");

  Form6->BookName->Font->Color = clTeal;
	  Form6->BookAuthor->Font->Color = clTeal;
	  Form6->BookGenre->Font->Color = clTeal;
	  Form6->BookRating->Font->Color = clTeal;
	  Form6->Author->Font->Color = clTeal;
	  Form6->Name->Font->Color = clTeal;
	  Form6->Rating->Font->Color = clTeal;
	  Form6->Genre->Font->Color = clTeal;
	  Form6->Page->Font->Color = clTeal;
	  Form6->Page1->Font->Color = clTeal;
	  Form6->Page2->Font->Color = clTeal;
	  Form6->Top->Color = clSilver;
  }
    	else if (Form5->Fav_check->Checked)
  {
	  Form5->Fon->Picture->LoadFromFile(GetCurrentDir() + "\\FavFonColorful.png");
	  Form5->BookName->Font->Color = clTeal;
	  Form5->BookAuthor->Font->Color = clTeal;
	  Form5->BookGenre->Font->Color = clTeal;
	  Form5->BookRating->Font->Color = clTeal;
	  Form5->Author->Font->Color = clTeal;
	  Form5->Name->Font->Color = clTeal;
	  Form5->Rating->Font->Color = clTeal;
	  Form5->Genre->Font->Color = clTeal;
	  Form5->Page->Font->Color = clTeal;
	  Form5->Page1->Font->Color = clTeal;
	  Form5->Page2->Font->Color = clTeal;
  }
  		else if (Form8->Diary_Check->Checked)
		{
				Form8->Post->Picture->LoadFromFile(GetCurrentDir() + "\\PostDis.png");
				Form8->Fon->Picture->LoadFromFile(GetCurrentDir() + "\\DiaryFonBlue.png");
				Form8->Dark_Check->Checked = false;
				Form8->RichEdit1->Color = clSkyBlue;
				Form8->RichEdit2->Color = clSkyBlue;
				Form8->ComboBox1->Color = clSkyBlue;
				Form8->ListBox1->Color = clSkyBlue;
				Form8->ListBox2->Color = clSkyBlue;
				Form8->Label1->Font->Color = clBlue;
				Form8->Label3->Font->Color = clBlue;
				Form8->Label2->Font->Color = clBlack;
				Form8->Dash->Font->Color = clBlack;
				Form8->Symbol->Font->Color = clBlack;
		}
		else if (Base->Main_Check->Checked)
		{
		  Base->Fon->Picture->LoadFromFile(GetCurrentDir()+"\\MainFonCool.png");

		  Base->Pop->Picture->LoadFromFile(GetCurrentDir() + "\\TopRatedDef.png");
		  Base->Main->Picture->LoadFromFile(GetCurrentDir() + "\\MainLibraryDef.png");
		  Base->Favorites->Picture->LoadFromFile(GetCurrentDir() + "\\MyFavoritesDef.png");
		  Base->Diary->Picture->LoadFromFile(GetCurrentDir() + "\\MyDiaryDef.png");

		  Base->Author->Font->Color = clWhite;
		  Base->BookName->Font->Color = clWhite;
		  Base->Greeting->Font->Color = clWhite;
		  Base->Quote->Font->Color = clWhite;
				  Base->Dark_Check->Checked = false;
		  Base->Def_check->Checked = true;
		}
			else if (Form3->MLibrary_Check->Checked)
	{
	  Form3->Fon->Picture->LoadFromFile(GetCurrentDir() + "\\MLibraryFonColorful.png");
	  Form3->BookName->Font->Color = clBlack;
	  Form3->BookAuthor->Font->Color = clBlack;
	  Form3->BookGenre->Font->Color = clBlack;
	  Form3->BookRating->Font->Color = clBlack;
	  Form3->Author->Font->Color = clBlack;
	  Form3->Name->Font->Color = clBlack;
	  Form3->Rating->Font->Color = clBlack;
	  Form3->Genre->Font->Color = clBlack;
	  Form3->Page->Font->Color = clBlack;
	  Form3->Page1->Font->Color = clBlack;
	  Form3->Page2->Font->Color = clBlack;

	  Form3->Vote->Font->Color = clBlack;
	  Form3->Label1->Font->Color = clBlack;
	  Form3->Label2->Font->Color = clBlack;
	  Form3->Label3->Font->Color = clBlack;
	  Form3->Label4->Font->Color = clBlack;
	  Form3->Label5->Font->Color = clBlack;

	  Form3->Dark_Check->Checked = false;
	}
  First->Checked = false;
  Sec->Checked = false;
  Third->Checked = false;
  Fourth->Checked = true;
	Form7->Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm7::FormClose(TObject *Sender, TCloseAction &Action)
{
Form6->Top_Check->Checked = false;
Form5->Fav_check->Checked = false;
Form8->Diary_Check->Checked = false;
Base->Main_Check->Checked = false;
Form3->MLibrary_Check->Checked = false;
}
//---------------------------------------------------------------------------
void __fastcall TForm7::Timer1Timer(TObject *Sender)
{
if (X <= -135)
{
  X+=5;
  Form7->Top =X;

}
else
{
	Timer2->Enabled = true;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm7::Timer2Timer(TObject *Sender)
{
   if (X <= -45)
{
  X+=3;
  Form7->Top =X;

}
else
{
	Timer3->Enabled = true;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm7::Timer3Timer(TObject *Sender)
{
	if (X <= 0)
{
  X+=3;
  Form7->Top =X;

}
}
//---------------------------------------------------------------------------

void __fastcall TForm7::Timer4Timer(TObject *Sender)
{
if (X >= -45)
{
  X-=4;
  Form7->Top =X;

}
else
{
	Timer5->Enabled = true;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm7::Timer5Timer(TObject *Sender)
{
	 if (X >= -135)
{
  X-=4;
  Form7->Top =X;

}
else
{
	Timer6->Enabled = true;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm7::Timer6Timer(TObject *Sender)
{
if (X >=-270)
{
	X-=5;
	Form7->Top = X;

}
else
{
    Close_Form = true;
	Close();
}
}
//---------------------------------------------------------------------------

void __fastcall TForm7::FormCloseQuery(TObject *Sender, bool &CanClose)
{
if (!Close_Form)
{


CanClose = false;
Timer3->Enabled = false;
Timer4->Enabled = true;
Timer1->Enabled = false;
Timer2->Enabled = false;
}
else
{
	CanClose = true;
}
}
//---------------------------------------------------------------------------

