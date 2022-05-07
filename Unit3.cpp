//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent *Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Button1Click(TObject *Sender)
{	
	if (Edit1->Text == "")
	{
		return;
	}
	
	ListBox1->Items->Add(Edit1->Text);
	Edit1->Text = "";
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Button1DragDrop(TObject *Sender, TObject *Source, int X, int Y)

{
	Edit1->Text = "dropeed";
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Button1StartDrag(TObject *Sender, TDragObject *&DragObject)

{
    tempString = Edit1->Text;
   Edit1->Text = "dragDropping";
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Button1EndDrag(TObject *Sender, TObject *Target, int X, int Y)

{
	Edit1->Text =    tempString;
}
//---------------------------------------------------------------------------

