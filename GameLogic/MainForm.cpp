#include "MainForm.h"

System::Void GameLogic::MainForm::button_play_Click(System::Object^ sender, System::EventArgs^ e)
{
    GameForm^ gameForm = gcnew GameForm();
    gameForm->Show();
}
