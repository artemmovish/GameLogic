#include "GameForm.h"

System::Void GameLogic::GameForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	LevelOne^ level = gcnew LevelOne();
	this->Hide();
	level->ShowDialog();
	StreamReader^ readerl = gcnew StreamReader("progress.txt");
	String^ numl = readerl->ReadLine();
	readerl->Close();

	if (numl == "0")
	{

		button2->Enabled = false;
		button3->Enabled = false;
		button4->Enabled = false;
		button5->Enabled = false;
	}
	else if (numl == "1")
	{

		button2->Enabled = true;
		button3->Enabled = false;
		button4->Enabled = false;
		button5->Enabled = false;
	}
	else if (numl == "2")
	{

		button2->Enabled = true;
		button3->Enabled = true;
		button4->Enabled = false;
		button5->Enabled = false;
	}
	else if (numl == "3")
	{

		button2->Enabled = true;
		button3->Enabled = true;
		button4->Enabled = true;
		button5->Enabled = false;
	}
	else if (numl == "4")
	{

		button2->Enabled = true;
		button3->Enabled = true;
		button4->Enabled = true;
		button5->Enabled = true;
	}
	this->Show();
}

System::Void GameLogic::GameForm::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	LevelTwo^ level = gcnew LevelTwo();
	this->Hide();
	level->ShowDialog();
	StreamReader^ readerl = gcnew StreamReader("progress.txt");
	String^ numl = readerl->ReadLine();
	readerl->Close();

	if (numl == "0")
	{

		button2->Enabled = false;
		button3->Enabled = false;
		button4->Enabled = false;
		button5->Enabled = false;
	}
	else if (numl == "1")
	{

		button2->Enabled = true;
		button3->Enabled = false;
		button4->Enabled = false;
		button5->Enabled = false;
	}
	else if (numl == "2")
	{

		button2->Enabled = true;
		button3->Enabled = true;
		button4->Enabled = false;
		button5->Enabled = false;
	}
	else if (numl == "3")
	{

		button2->Enabled = true;
		button3->Enabled = true;
		button4->Enabled = true;
		button5->Enabled = false;
	}
	else if (numl == "4")
	{

		button2->Enabled = true;
		button3->Enabled = true;
		button4->Enabled = true;
		button5->Enabled = true;
	}
	this->Show();
}

System::Void GameLogic::GameForm::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	LevelThree^ level = gcnew LevelThree();
	this->Hide();
	level->ShowDialog();
	StreamReader^ readerl = gcnew StreamReader("progress.txt");
	String^ numl = readerl->ReadLine();
	readerl->Close();

	if (numl == "0")
	{

		button2->Enabled = false;
		button3->Enabled = false;
		button4->Enabled = false;
		button5->Enabled = false;
	}
	else if (numl == "1")
	{

		button2->Enabled = true;
		button3->Enabled = false;
		button4->Enabled = false;
		button5->Enabled = false;
	}
	else if (numl == "2")
	{

		button2->Enabled = true;
		button3->Enabled = true;
		button4->Enabled = false;
		button5->Enabled = false;
	}
	else if (numl == "3")
	{

		button2->Enabled = true;
		button3->Enabled = true;
		button4->Enabled = true;
		button5->Enabled = false;
	}
	else if (numl == "4")
	{

		button2->Enabled = true;
		button3->Enabled = true;
		button4->Enabled = true;
		button5->Enabled = true;
	}
	this->Show();
}

System::Void GameLogic::GameForm::button4_Click(System::Object^ sender, System::EventArgs^ e)
{
	LevelFour^ level = gcnew LevelFour();
	this->Hide();
	level->ShowDialog();
	StreamReader^ readerl = gcnew StreamReader("progress.txt");
	String^ numl = readerl->ReadLine();
	readerl->Close();

	if (numl == "0")
	{

		button2->Enabled = false;
		button3->Enabled = false;
		button4->Enabled = false;
		button5->Enabled = false;
	}
	else if (numl == "1")
	{

		button2->Enabled = true;
		button3->Enabled = false;
		button4->Enabled = false;
		button5->Enabled = false;
	}
	else if (numl == "2")
	{

		button2->Enabled = true;
		button3->Enabled = true;
		button4->Enabled = false;
		button5->Enabled = false;
	}
	else if (numl == "3")
	{

		button2->Enabled = true;
		button3->Enabled = true;
		button4->Enabled = true;
		button5->Enabled = false;
	}
	else if (numl == "4")
	{

		button2->Enabled = true;
		button3->Enabled = true;
		button4->Enabled = true;
		button5->Enabled = true;
	}
	this->Show();
}

System::Void GameLogic::GameForm::button5_Click(System::Object^ sender, System::EventArgs^ e)
{
	LevelFive^ level = gcnew LevelFive();
	this->Hide();
	level->ShowDialog();
	StreamReader^ readerl = gcnew StreamReader("progress.txt");
	String^ numl = readerl->ReadLine();
	readerl->Close();

	if (numl == "0")
	{

		button2->Enabled = false;
		button3->Enabled = false;
		button4->Enabled = false;
		button5->Enabled = false;
	}
	else if (numl == "1")
	{

		button2->Enabled = true;
		button3->Enabled = false;
		button4->Enabled = false;
		button5->Enabled = false;
	}
	else if (numl == "2")
	{

		button2->Enabled = true;
		button3->Enabled = true;
		button4->Enabled = false;
		button5->Enabled = false;
	}
	else if (numl == "3")
	{

		button2->Enabled = true;
		button3->Enabled = true;
		button4->Enabled = true;
		button5->Enabled = false;
	}
	else if (numl == "4")
	{

		button2->Enabled = true;
		button3->Enabled = true;
		button4->Enabled = true;
		button5->Enabled = true;
	}
	this->Show();
}

System::Void GameLogic::GameForm::button_back_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Close();
}
