#include "LevelFive.h"

using namespace System::Windows::Forms;
void GameLogic::LevelFive::delete_button(Button^ button)
{
	if (button != nullptr)
	{
		// Отписываемся от всех событий
		button->Click -= gcnew EventHandler(this, &LevelFive::ClickBut);

		// Удаляем кнопку из коллекции Controls
		this->Controls->Remove(button);

		// Удаляем саму кнопку
		delete button;
	}
}

void GameLogic::LevelFive::ClickBut(System::Object^ sender, System::EventArgs^ e)
{
	if (matches < 2)
	{
		// Приведение sender к типу Button
		Button^ button = dynamic_cast<Button^>(sender);
		if (button != nullptr)
		{
			but_[matches] = button;

			//Сохранение панели
			if (matches == 0)
			{
				panelOne = button->Parent;
			}
			else if (matches == 1)
			{
				panelTwo = button->Parent;
			}
			else if (matches == 2)
			{
				panelThree = button->Parent;
			}
			matches++;
			// копирование кнопки из шаблона (под формой)
			Button^ but = gcnew Button();
			but = copy_button(FireDown);
			panelI->Controls->Add(but);
			// подсчет очков
			try
			{
				if (button->Tag->ToString() == "1")
				{
					button->Parent = nullptr;
				}
				if (matches == 2)
				{
					if (vin)
					{
						MessageBox::Show("Победа!\nВы прошли игру");
						StreamReader^ reader = gcnew StreamReader("volume.txt");
						String^ num = reader->ReadLine();
						reader->Close();

						if (num == "1")
						{
							SoundPlayer^ player = gcnew SoundPlayer("lets-see-q1-extra-large.wav");
							player->PlayLooping();

						}
						StreamReader^ reader1 = gcnew StreamReader("progress.txt");
						try
						{
							String^ number = reader1->ReadLine();
							int level = Convert::ToInt32(number);
							reader1->Close();
							if (level <= 5)
							{
								StreamWriter^ writer = gcnew StreamWriter("progress.txt");
								writer->Write("5");
								writer->Close();

							}

						}
						catch (Exception^ ex)
						{
							MessageBox::Show(ex->Message);
						}
						this->Close();
					}
					else
					{
						if (!checkRule->Checked)
						{
							MessageBox::Show("Неверно");
							back();
						}
						else
						{
							back();
						}
					}
				}
			}
			catch (Exception^ ex)
			{
				button->Parent = nullptr;
				vin = 0;
				if (matches == 2)
				{
					if (!checkRule->Checked)
					{
						MessageBox::Show("Неверно");
						back();
					}
					else
					{
						back();
					}
				}
			}
		}
	}
}

void GameLogic::LevelFive::ClickPanel(System::Object^ sender, System::EventArgs^ e)
{

}

void GameLogic::LevelFive::Result_Test()
{

}

void GameLogic::LevelFive::back()
{
	panelI->Controls->Clear();
	matches = 0;
	vin = 1;
	but_[0]->Parent = panelOne;
	but_[1]->Parent = panelTwo;

	panelOne->Controls->Add(but_[0]);
	panelTwo->Controls->Add(but_[1]);
}

Button^ GameLogic::LevelFive::copy_button(Button^ originalButton)
{
	Button^ newButton = gcnew Button();

	// Копирование свойств
	newButton->Text = originalButton->Text;
	newButton->Size = originalButton->Size;
	newButton->Location = originalButton->Location;
	newButton->BackColor = originalButton->BackColor;
	newButton->ForeColor = originalButton->ForeColor;
	newButton->Font = originalButton->Font;
	newButton->BackgroundImage = originalButton->BackgroundImage;
	newButton->BackgroundImageLayout = originalButton->BackgroundImageLayout;
	newButton->Enabled = originalButton->Enabled;
	newButton->Visible = originalButton->Visible;
	newButton->FlatStyle = originalButton->FlatStyle;
	newButton->FlatAppearance->BorderSize = originalButton->FlatAppearance->BorderSize;
	newButton->FlatAppearance->BorderColor = originalButton->FlatAppearance->BorderColor;
	newButton->FlatAppearance->MouseDownBackColor = originalButton->FlatAppearance->MouseDownBackColor;
	newButton->FlatAppearance->MouseOverBackColor = originalButton->FlatAppearance->MouseOverBackColor;
	newButton->TextAlign = originalButton->TextAlign;
	newButton->Image = originalButton->Image;
	newButton->ImageAlign = originalButton->ImageAlign;
	newButton->TextImageRelation = originalButton->TextImageRelation;
	newButton->Anchor = originalButton->Anchor;
	newButton->Dock = originalButton->Dock;
	newButton->Margin = originalButton->Margin;
	newButton->Padding = originalButton->Padding;

	// Копирование событий
	newButton->Click += gcnew EventHandler(this, &LevelFive::ClickBut);

	return newButton;
}

System::Void GameLogic::LevelFive::button_back_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Close();

	StreamReader^ reader = gcnew StreamReader("volume.txt");
	String^ num = reader->ReadLine();
	reader->Close();

	if (num == "1")
	{
		SoundPlayer^ player = gcnew SoundPlayer("lets-see-q1-extra-large.wav");
		player->PlayLooping();
	}
}


