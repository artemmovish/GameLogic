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
