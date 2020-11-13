//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit11.h"
#include "Unit9.h"
#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm11 *Form11;
//---------------------------------------------------------------------------
__fastcall TForm11::TForm11(TComponent* Owner)
	: TForm(Owner)
{

}
//---------------------------------------------------------------------------
void __fastcall TForm11::DBGrid1DblClick(TObject *Sender)
{
if (MessageDlg("Do you want to add this user a permission?", mtInformation, TMsgDlgButtons() << mbYes << mbNo, 0) == mrYes)
{
  Form3->ADOTable3->First();
  while (!Form3->ADOTable3->Eof)
  {
	if (Form3->ADOTable3->FieldByName("UserName")->AsString == ADOTable1->FieldByName("UserName")->AsString)
	{
    ShowMessage ("1");
	  break;
	}
	  Form3->ADOTable3->Next();
  }
  Form3->ADOTable3->Edit();
  Form3->ADOTable3->FieldByName("UserType")->AsString = "admin";
  Form3->ADOTable3->Post();

}

}
//---------------------------------------------------------------------------
void __fastcall TForm11::FormActivate(TObject *Sender)
{
ADOTable1->Active = true;
}
//---------------------------------------------------------------------------

