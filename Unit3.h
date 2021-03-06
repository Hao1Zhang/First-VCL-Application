//---------------------------------------------------------------------------

#ifndef Unit3H
#define Unit3H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TForm3 : public TForm
{
__published:	// IDE-managed Components
	TButton *Button1;
	TEdit *Edit1;
	TListBox *ListBox1;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button1DragDrop(TObject *Sender, TObject *Source, int X, int Y);
	void __fastcall Button1StartDrag(TObject *Sender, TDragObject *&DragObject);
	void __fastcall Button1EndDrag(TObject *Sender, TObject *Target, int X, int Y);


private:	// User declarations
    UnitcodeString tempString;
public:		// User declarations
	__fastcall TForm3(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm3 *Form3;
//---------------------------------------------------------------------------
#endif
