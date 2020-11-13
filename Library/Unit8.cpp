//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit8.h"
#include <fstream>
#include <string>
#include <vector>
#include "Unit9.h"
#include "Unit7.h"
using namespace std;
vector<String> BookVector;
vector <String> ReadVector;

	String UserName;
	AnsiString WishList;
	String ReadList;
	String UserNotes;
bool IsEmptyText = true;
int ReadBooks = -1;
int WishBooks = -1;
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm8 *Form8;
//---------------------------------------------------------------------------
__fastcall TForm8::TForm8(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm8::FormActivate(TObject *Sender)
{
     ADOTable1->Active = true;
	Form8->BorderStyle = bsNone;
	RichEdit1->Clear();
	ReadBooks =-1;
	WishBooks =-1;
	UserName = Form9->StaticText1->Caption;
	WishList = UserName + "Wish.txt";
	ReadList = UserName + "Read.txt";
	UserNotes = UserName + "Note.txt";
	BookVector.clear();
	ReadVector.clear();
	ADOTable1->First();
	ComboBox1->Clear();
	while (!ADOTable1->Eof)
	{
		ComboBox1->Items->Add(ADOTable1->FieldByName("BookName")->AsString);
		ADOTable1->Next();
    }

	fstream file1;
	fstream file2;

	ListBox1->Clear();
	ListBox2->Clear();
	try
	{
	  //Memo1->Lines->LoadFromFile(WishList);
	  //for (int i =0; i < Memo1->Lines->Count; i++)
	  //{
	   //	ListBox1->Items->Add(Memo1->Lines->Strings[i]);
	  //	BookVector.push_back(Memo1->Lines->Strings[i]);
	  //}
	  ListBox1->Items->LoadFromFile(WishList);
	  for (int i =0; i < ListBox1->Items->Count; i++)
	  {
		  BookVector.push_back(ListBox1->Items->Strings[i]);
	  }
	}
	catch(...)
	{
		ListBox1->Items->Add("There is nothing here yet");
		ListBox1->Items->Add("Try to add a book from booklist");
	}
	if (ListBox1->Items->Count == 0)
	{
		ListBox1->Items->Add("There is nothing here yet");
		ListBox1->Items->Add("Try to add a book from booklist");
	}
	Memo1->Clear();
	try
	{
		 // Memo1->Lines->LoadFromFile(ReadList);
	 // for (int i =0; i < Memo1->Lines->Count; i++)
	  //{
	  //	ListBox2->Items->Add(Memo1->Lines->Strings[i]);
	 // }
	 ListBox2->Items->LoadFromFile(ReadList);
		  for (int i =0; i < ListBox2->Items->Count; i++)
	  {
		  ReadVector.push_back(ListBox2->Items->Strings[i]);
	  }
	}
	catch(...)
	{
		ListBox2->Items->Add("Hey, you haven't read anything yet!");
		ListBox2->Items->Add("Get moving, buddy");
	}
	if (ListBox2->Items->Count == 0)
	{
		ListBox2->Items->Add("Hey, you haven't read anything yet!");
		ListBox2->Items->Add("Get moving, buddy");
	}
	if (ListBox1->Items->Count != 0)
	{
		if (ListBox1->Items->Strings[0] == "There is nothing here yet")
		{
			WishBooks = -1;
		}
		else
		{
			WishBooks = ListBox1->Items->Count;
		}
	}
	else
	{
		WishBooks =-1;
	}
	if (ListBox2->Items->Count != 0)
	{
	   if (ListBox2->Items->Strings[0] == "Hey, you haven't read anything yet!")
	   {
		  ReadBooks = -1;
	   }
	   else
	   {
		   ReadBooks = ListBox2->Items->Count;
	   }
	}
	else
	{
		ReadBooks = -1;
	}
	if (WishBooks ==-1 && ReadBooks ==-1)
	{
		Label3->Caption = "0%";
	}
	else
	{
		if (ListBox2->Items->Count > 0 && ListBox2->Items->Strings[0] != "Hey, you haven't read anything yet!" && (ListBox1->Items->Count == 0 || ListBox1->Items->Strings[0] == "There is nothing here yet"))
		{
		 Label3->Caption = "100%";
		}
		else if (WishBooks != -1 && ReadBooks !=-1)
		{
			int Procent = 100*ListBox2->Items->Count / (ListBox1->Items->Count+ListBox2->Items->Count);
			if (Procent > 100)
			{
			  Label3->Caption = "100%";
			}
			else
			{
				String temp = Procent;
				temp +="%";
				Label3->Caption = temp;
			}
		}
		else
		{
			Label3->Caption = "0%";
		}


	}
	Memo1->Clear();
	try
	{
		Memo1->Lines->LoadFromFile(UserNotes);
	}
	catch (...)
	{

	}
	RichEdit2->Text = Memo1->Lines->Text;
}
//---------------------------------------------------------------------------
void __fastcall TForm8::ComboBox1Click(TObject *Sender)
{
	if (ComboBox1->Text != "Please, choose a book")
	{
		if (ListBox1->Items->Count == 0)
		{
					for (int i =0; i < ListBox2->Items->Count; i++)
						{
						   if (ComboBox1->Text == ListBox2->Items->Strings[i])
						   {
								if (MessageDlg("Do you want to add the book, that you've already read?", mtInformation, TMsgDlgButtons() << mbYes << mbNo, 0) == mrNo)
								{  
									return;
								}
						   }	
						}	


			ListBox1->Items->Add(ComboBox1->Text);
		   BookVector.push_back(ComboBox1->Text);



		   
		}
		else
		{
			 if (ListBox1->Items->Strings[0] == "There is nothing here yet")
			  {
					for (int i =0; i < ListBox2->Items->Count; i++) 
						{
						   if (ComboBox1->Text == ListBox2->Items->Strings[i]) 
						   {
								if (MessageDlg("Do you want to add the book, that you've already read?", mtInformation, TMsgDlgButtons() << mbYes << mbNo, 0) == mrNo)
								{  
									return;
								}
						   }	
						}	
						  ListBox1->Clear();
							 ListBox1->Items->Add(ComboBox1->Text);
						 BookVector.push_back(ComboBox1->Text);
			  }
			  else
				{
					for (int i =0; i < ListBox2->Items->Count; i++) 
						{
						   if (ComboBox1->Text == ListBox2->Items->Strings[i]) 
						   {
								if (MessageDlg("Do you want to add the book, that you've already read?", mtInformation, TMsgDlgButtons() << mbYes << mbNo, 0) == mrNo)
								{  
									return;
								}
						   }	
						}		   
				std::vector<String>::iterator iter;
				iter = BookVector.begin();
				while (iter != BookVector.end())
					{
						if (*iter == ComboBox1->Text)
						{
						   Application->MessageBox (L"Hey, you've already added this book!", L"?\_(?)_/?");

						  return;
						}

						iter++;
					}
					
					ListBox1->Items->Add(ComboBox1->Text);
					BookVector.push_back(ComboBox1->Text);
		   
				}
		}
	}
    	if (ListBox1->Items->Count != 0)
	{
		if (ListBox1->Items->Strings[0] == "There is nothing here yet")
		{
			WishBooks = -1;
		}
		else
		{
			WishBooks = ListBox1->Items->Count;
		}
	}
	else
	{
		WishBooks =-1;
	}
	if (ListBox2->Items->Count != 0)
	{
	   if (ListBox2->Items->Strings[0] == "Hey, you haven't read anything yet!")
	   {
		  ReadBooks = -1;
	   }
	   else
	   {
		   ReadBooks = ListBox2->Items->Count;
	   }
	}
	else
	{
		ReadBooks = -1;
	}
	if (WishBooks ==-1 && ReadBooks ==-1)
	{
		Label3->Caption = "0%";
	}
	else
	{
		if (ListBox2->Items->Count > 0 && ListBox2->Items->Strings[0] != "Hey, you haven't read anything yet!" && (ListBox1->Items->Count == 0 || ListBox1->Items->Strings[0] == "There is nothing here yet"))
		{
		 Label3->Caption = "100%";
		}
		else if (WishBooks != -1 && ReadBooks !=-1)
		{
			int Procent = 100*ListBox2->Items->Count / (ListBox1->Items->Count+ListBox2->Items->Count);
			if (Procent > 100)
			{
			  Label3->Caption = "100%";
			}
			else
			{
				String temp = Procent;
				temp +="%";
				Label3->Caption = temp;
			}
		}
		else
		{
			Label3->Caption = "0%";
		}


	}
}
//---------------------------------------------------------------------------
void __fastcall TForm8::ComboBox1KeyPress(TObject *Sender, System::WideChar &Key)
{
Key = 0;
}
//---------------------------------------------------------------------------
void __fastcall TForm8::FormClose(TObject *Sender, TCloseAction &Action)
{
 try
 {
	if (ListBox2->Items->Strings[0] != "Hey, you haven't read anything yet!")
	{
		ListBox2->Items->SaveToFile(ReadList);
	}
 }
 catch (...)
 {
		ListBox2->Items->SaveToFile(ReadList);
 }

 try
 {
	if (ListBox1->Items->Strings[0]!="There is nothing here yet")
	{
	  ListBox1->Items->SaveToFile(WishList);
	}
 }
 catch(...)
 {
    ListBox1->Items->SaveToFile(WishList);
 }
 Memo1->Clear();
 Memo1->Lines->Text = RichEdit2->Text;
 Memo1->Lines->SaveToFile(UserNotes);
}
//---------------------------------------------------------------------------

void __fastcall TForm8::ListBox1DblClick(TObject *Sender)
{
	std::vector<String>::iterator readiter = ReadVector.begin();
	for (int i =0; i < ListBox1->Items->Count; i++)
	{
		if (ListBox1->Selected[i])
		{
			readiter = ReadVector.begin();
			while (readiter != ReadVector.end())
				{
					if (*readiter == ListBox1->Items->Strings[i])
					{
						return;
					}
					readiter++;
				}
					if (ListBox2->Items->Count != 0)
					if (ListBox2->Items->Strings[0] == "Hey, you haven't read anything yet!")
					ListBox2->Clear();
					ListBox2->Items->Add(ListBox1->Items->Strings[i]);
					ReadVector.push_back(ListBox1->Items->Strings[i]);
					ListBox1->Items->Delete(i);
					std::vector<String>::iterator bookiter = BookVector.begin();
					BookVector.erase(bookiter + i);

		}
	}
    	if (ListBox1->Items->Count != 0)
	{
		if (ListBox1->Items->Strings[0] == "There is nothing here yet")
		{
			WishBooks = -1;
		}
		else
		{
			WishBooks = ListBox1->Items->Count;
		}
	}
	else
	{
		WishBooks =-1;
	}
	if (ListBox2->Items->Count != 0)
	{
	   if (ListBox2->Items->Strings[0] == "Hey, you haven't read anything yet!")
	   {
		  ReadBooks = -1;
	   }
	   else
	   {
		   ReadBooks = ListBox2->Items->Count;
	   }
	}
	else
	{
		ReadBooks = -1;
	}
	if (WishBooks ==-1 && ReadBooks ==-1)
	{
		Label3->Caption = "0%";
	}
	else
	{
		if (ListBox2->Items->Count > 0 && ListBox2->Items->Strings[0] != "Hey, you haven't read anything yet!" && (ListBox1->Items->Count == 0 || ListBox1->Items->Strings[0] == "There is nothing here yet"))
		{
		 Label3->Caption = "100%";
		}
		else if (WishBooks != -1 && ReadBooks !=-1)
		{
			int Procent = 100*ListBox2->Items->Count / (ListBox1->Items->Count+ListBox2->Items->Count);
			if (Procent > 100)
			{
			  Label3->Caption = "100%";
			}
			else
			{
				String temp = Procent;
				temp +="%";
				Label3->Caption = temp;
			}
		}
		else
		{
			Label3->Caption = "0%";
		}


	}
}
//---------------------------------------------------------------------------


void __fastcall TForm8::RichEdit1Change(TObject *Sender)
{
if (RichEdit1->Text != "")
{
   IsEmptyText = false;
   if (Dark_Check->Checked)
   {
	Post->Picture->LoadFromFile(GetCurrentDir() + "\\PostDark.png");
   }
   else
   Post->Picture->LoadFromFile(GetCurrentDir() + "\\Post.png");
}
else
{
	IsEmptyText = true;
	if (Dark_Check->Checked)
   {
	Post->Picture->LoadFromFile(GetCurrentDir() + "\\PostDarkDis.png");
   }
   else
	Post->Picture->LoadFromFile(GetCurrentDir() + "\\PostDis.png");
}
Symbol->Caption = RichEdit1->Text.Length();
if (RichEdit1->Text.Length() == 200)
{
  	Symbol->Font->Color = clRed;
	Dash->Font->Color = clRed;
	Label2->Font->Color = clRed;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm8::PostMouseEnter(TObject *Sender)
{
if (!IsEmptyText)
{
	if (Dark_Check->Checked)
	{
	  Post->Picture->LoadFromFile(GetCurrentDir() + "\\PostDarkMouse.png");
	}
	else
   Post->Picture->LoadFromFile(GetCurrentDir() + "\\MousePost.png");
}
else
{
	if (Dark_Check->Checked)
	{
		Post->Picture->LoadFromFile(GetCurrentDir() + "\\PostDarkDis.png");
	}
	else
	Post->Picture->LoadFromFile(GetCurrentDir() + "\\PostDis.png");
}
}
//---------------------------------------------------------------------------

void __fastcall TForm8::PostMouseLeave(TObject *Sender)
{
if (!IsEmptyText)
{
	if (Dark_Check->Checked)
	{
	  Post->Picture->LoadFromFile(GetCurrentDir() + "\\PostDark.png");
	}
	else
   Post->Picture->LoadFromFile(GetCurrentDir() + "\\Post.png");
}
else
{
	if (Dark_Check->Checked)
	{
		Post->Picture->LoadFromFile(GetCurrentDir() + "\\PostDarkDis.png");
	}
	else
	Post->Picture->LoadFromFile(GetCurrentDir() + "\\PostDis.png");
}
}
//---------------------------------------------------------------------------

void __fastcall TForm8::PostClick(TObject *Sender)
{
 if (RichEdit1->Text != "")
 {
	 RichEdit2->Lines->Add("(" + DateTimeToStr(Now())  + ")");
	 RichEdit2->Lines->Add (RichEdit1->Text);
	 RichEdit2->Lines->Add("");
 }
}
//---------------------------------------------------------------------------

void __fastcall TForm8::RichEdit1KeyPress(TObject *Sender, System::WideChar &Key)

{
if (RichEdit1->Text.Length() < 200)
{
	if (Dark_Check->Checked)
	{
		Symbol->Font->Color = clOlive;
		Dash->Font->Color = clOlive;
		Label2->Font->Color = clOlive;
	}
	else
	{
		Symbol->Font->Color = clBlack;
		Dash->Font->Color = clBlack;
		Label2->Font->Color = clBlack;
	}

  return;
}
else
{
	Key = 0;
	Symbol->Font->Color = clRed;
	Dash->Font->Color = clRed;
	Label2->Font->Color = clRed;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm8::BackClick(TObject *Sender)
{
Form8->Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm8::BackMouseEnter(TObject *Sender)
{
Back->Picture->LoadFromFile(GetCurrentDir() + "\\BackButtonMouse.png");
}
//---------------------------------------------------------------------------

void __fastcall TForm8::BackMouseLeave(TObject *Sender)
{
 Back->Picture->LoadFromFile(GetCurrentDir() + "\\BackButton.png");
}
//---------------------------------------------------------------------------

void __fastcall TForm8::ChangeThemeClick(TObject *Sender)
{
Diary_Check->Checked = true;
Form7->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm8::Image1MouseEnter(TObject *Sender)
{
Image1->Hint = "Choose a book from the list. After that, book go to Wish List.\n After you read your book, Double click on it and it will go to the Read List.\n Wish and Read Lists are you personal.";
}
//---------------------------------------------------------------------------

void __fastcall TForm8::ChangeThemeMouseEnter(TObject *Sender)
{
 ChangeTheme->Picture->LoadFromFile(GetCurrentDir()+ "\\ChangeThemeMouse.png");
}
//---------------------------------------------------------------------------

void __fastcall TForm8::ChangeThemeMouseLeave(TObject *Sender)
{

 ChangeTheme->Picture->LoadFromFile(GetCurrentDir()+ "\\ChangeTheme.png");
}
//---------------------------------------------------------------------------

void __fastcall TForm8::Image1Click(TObject *Sender)
{
Image1->Hint = "Choose a book from the list. After that, book go to Wish List.\n After you read your book, Double click on it and it will go to the Read List.\n Wish and Read Lists are you personal.";
}
//---------------------------------------------------------------------------


