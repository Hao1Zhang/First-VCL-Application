object Form3: TForm3
  Left = 0
  Top = 0
  Caption = 'Form3'
  ClientHeight = 299
  ClientWidth = 635
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Button1: TButton
    Left = 136
    Top = 24
    Width = 75
    Height = 25
    Caption = 'Add Me!'
    DragMode = dmAutomatic
    TabOrder = 0
    OnClick = Button1Click
    OnDragDrop = Button1DragDrop
    OnEndDrag = Button1EndDrag
    OnStartDrag = Button1StartDrag
  end
  object Edit1: TEdit
    Left = 9
    Top = 26
    Width = 121
    Height = 21
    TabOrder = 1
    Text = 'Edit1'
  end
  object ListBox1: TListBox
    Left = 8
    Top = 72
    Width = 203
    Height = 219
    ItemHeight = 13
    TabOrder = 2
  end
end
