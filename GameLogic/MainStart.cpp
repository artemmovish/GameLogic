#include "MainStart.h"
using namespace System;
using namespace System::Windows::Forms;
#include "LevelOne.h"
#include "LevelTwo.h"
#include "LevelThree.h"
#include "LevelFour.h"
#include "LevelFive.h"
[STAThread]
void main() {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    GameLogic::MainStart form;
    // Project1 имя решения, Form1h имя формы
    Application::Run(% form);
}

System::Void GameLogic::MainStart::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
    LevelOne^ level = gcnew LevelOne();
    this->Hide();
    level->ShowDialog();
    this->Show();
    return System::Void();
}

System::Void GameLogic::MainStart::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
    LevelTwo^ level = gcnew LevelTwo();
    this->Hide();
    level->ShowDialog();
    this->Show();
    return System::Void();
}

System::Void GameLogic::MainStart::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
    LevelThree^ level = gcnew LevelThree();
    this->Hide();
    level->ShowDialog();
    this->Show();
    return System::Void();
}

System::Void GameLogic::MainStart::button4_Click(System::Object^ sender, System::EventArgs^ e)
{
    LevelFour^ level = gcnew LevelFour();
    this->Hide();
    level->ShowDialog();
    this->Show();
    return System::Void();
}

System::Void GameLogic::MainStart::button5_Click(System::Object^ sender, System::EventArgs^ e)
{
    LevelFive^ level = gcnew LevelFive();
    this->Hide();
    level->ShowDialog();
    this->Show();
    return System::Void();
}

System::Void GameLogic::MainStart::button_play_Click(System::Object^ sender, System::EventArgs^ e)
{
    GameForm^ gameForm = gcnew GameForm();
    this->Hide();
    gameForm->ShowDialog();
    this->Show();
}

System::Void GameLogic::MainStart::button7_Click(System::Object^ sender, System::EventArgs^ e)
{
    settingsForm^ setForm = gcnew settingsForm();
    setForm->musicClick += gcnew System::EventHandler(this, &GameLogic::MainStart::OnmusicClick);
    this->Hide();
    setForm->ShowDialog();
    StreamReader^ readert = gcnew StreamReader("theme.txt");
    String^ numt = readert->ReadLine();
    readert->Close();
    if (numt == "1")
    {
        MainStart::label1->ForeColor = Color::Black;
        MainStart::BackColor = Color::FromArgb(249, 250, 209);
        MainStart::button1->BackColor = Color::FromArgb(254, 219, 155);
        MainStart::button1->ForeColor = Color::Black;

        MainStart::button2->BackColor = Color::FromArgb(254, 219, 155);
        MainStart::button2->ForeColor = Color::Black;

       


    }
    //тёмная тема
    else
    {
        MainStart::label1->ForeColor = Color::WhiteSmoke;
        MainStart::BackColor = Color::FromArgb(26, 26, 26);
        MainStart::button1->BackColor = Color::Gray;
        MainStart::button1->ForeColor = Color::WhiteSmoke;

        MainStart::button2->BackColor = Color::Gray;
        MainStart::button2->ForeColor = Color::WhiteSmoke;

       

    }
    this->Show();

}

//Форма о приложении
System::Void GameLogic::MainStart::button6_Click(System::Object^ sender, System::EventArgs^ e)
{
    formAbout^ form = gcnew formAbout();
    this->Hide();
    form->ShowDialog();
    this->Show();
}