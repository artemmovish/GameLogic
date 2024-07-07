#include "settingsForm.h"

using namespace System::IO;
using namespace System::Data;

System::Void GameLogic::settingsForm::button_back_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->Close();
}

System::Void GameLogic::settingsForm::button_reset_Click(System::Object^ sender, System::EventArgs^ e)
{
    String^ filePath = "progress.txt";


    try 
    {
   
        StreamReader^ reader = gcnew StreamReader(filePath);
      
        String^ content = reader->ReadToEnd();
        reader->Close();

    
        StreamWriter^ writer = gcnew StreamWriter(filePath);
      
        writer->Write("0");
        writer->Close();
        MessageBox::Show("Прогресс успешно сброшен");
       
    }
    catch (Exception^ ex)
    {
        MessageBox::Show(ex->Message);
    }
}

System::Void GameLogic::settingsForm::button_play_stop_Click(System::Object^ sender, System::EventArgs^ e)
{
    musicClick(this, e);

}

System::Void GameLogic::settingsForm::button_theme_Click(System::Object^ sender, System::EventArgs^ e)
{
    StreamReader^ reader = gcnew StreamReader("theme.txt");
    String^ num = reader->ReadLine();
    reader->Close();
    if (num == "1")
    {
        StreamWriter^ writer = gcnew StreamWriter("theme.txt");
        writer->Write("0");
        writer->Close();

        settingsForm::BackColor = Color::FromArgb(26, 26, 26);
        settingsForm::label1->ForeColor = Color::White;

        settingsForm::button_theme->BackColor = Color::Gray;
        settingsForm::button_theme->ForeColor = Color::WhiteSmoke;

        settingsForm::button_reset->BackColor = Color::Gray;
        settingsForm::button_reset->ForeColor = Color::WhiteSmoke;

        settingsForm::button_back->BackColor = Color::Gray;
        settingsForm::button_back->ForeColor = Color::WhiteSmoke;
        settingsForm::button_play_stop->Image = Image::FromFile("white.png");
        settingsForm::button_play_stop->Refresh();
    }

    else
    {
        StreamWriter^ writer = gcnew StreamWriter("theme.txt");
        writer->Write("1");
        writer->Close();
        settingsForm::label1->ForeColor = Color::Black;
        settingsForm::BackColor = Color::FromArgb(249, 250, 209);
        settingsForm::button_theme->BackColor = Color::FromArgb(254, 219, 155);
        settingsForm::button_theme->ForeColor = Color::Black;

        settingsForm::button_reset->BackColor = Color::FromArgb(254, 219, 155);
        settingsForm::button_reset->ForeColor = Color::Black;

        settingsForm::button_back->BackColor = Color::FromArgb(254, 219, 155);
        settingsForm::button_back->ForeColor = Color::Black;

        settingsForm::button_play_stop->Image = Image::FromFile("black.png");
        settingsForm::button_play_stop->Refresh();
    }

}
