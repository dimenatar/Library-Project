object Form11: TForm11
  Left = 0
  Top = 0
  Caption = 'Form11'
  ClientHeight = 253
  ClientWidth = 1051
  Color = clBtnFace
  Constraints.MaxHeight = 292
  Constraints.MinHeight = 292
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnActivate = FormActivate
  PixelsPerInch = 96
  TextHeight = 13
  object DBGrid1: TDBGrid
    Left = 0
    Top = 8
    Width = 1049
    Height = 241
    DataSource = DataSource1
    TabOrder = 0
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
    OnDblClick = DBGrid1DblClick
  end
  object ADOTable1: TADOTable
    Connection = Form9.ADOConnection1
    CursorType = ctStatic
    TableName = 'Users'
    Left = 312
    Top = 152
  end
  object DataSource1: TDataSource
    DataSet = ADOTable1
    Left = 352
    Top = 24
  end
end
