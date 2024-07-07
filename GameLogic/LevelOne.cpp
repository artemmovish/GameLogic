#include "LevelOne.h"
using namespace System::Windows::Forms;
using namespace System::IO;

void GameLogic::LevelOne::delete_button(Button^ button)
{
		if (button != nullptr)
		{
			// Отписываемся от всех событий
			button->Click -= gcnew EventHandler(this, &LevelOne::ClickBut);

			// Удаляем кнопку из коллекции Controls
			this->Controls->Remove(button);

			// Удаляем саму кнопку
			delete button;
		}
}

void GameLogic::LevelOne::ClickBut(System::Object^ sender, System::EventArgs^ e)
{
	if (!matches)
	{
		// Приведение sender к типу Button
		Button^ button = dynamic_cast<Button^>(sender);
		if (button != nullptr)
		{
			//Сохранение панели
			panelOne = button->Parent;
			// копирование кнопки из шаблона (под формой)
			Button^ but = gcnew Button();
			but = copy_button(FireDown);
			panelI->Controls->Add(fireI);
			// Сохранение Tag кнопки
			try
			{
				tagButton = button->Tag->ToString();
			}
			catch (Exception^ ex)
			{

			}
			// Удаление кнопки
			delete button;
		}
		matches++;
	}
	else
	{
		MessageBox::Show("Можно взять только одну спичку");
	}
}

void GameLogic::LevelOne::ClickPanel(System::Object^ sender, System::EventArgs^ e)
{
	if (matches)
	{
		// Приведение sender к типу Button
		FlowLayoutPanel^ panel = dynamic_cast<FlowLayoutPanel^>(sender);
		if (panel != nullptr)
		{
			panelI->Controls->Clear();
			panelTwo = panel;
			if (panel->Width < 30)
			{
				Button^ but = gcnew Button();
				but = copy_button(FireUp);
				panel->Controls->Add(but);
			}
			else
			{
				Button^ but = gcnew Button();
				but = copy_button(FireDown);
				panel->Controls->Add(but);
			}
			try
			{
				if (tagButton == panel->Tag->ToString())
				{
					MessageBox::Show("Вы победили");
					StreamReader^ readerf = gcnew StreamReader("volume.txt");
					String^ num = readerf->ReadLine();
					readerf->Close();

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
						if (level <= 1)
						{
							StreamWriter^ writerl = gcnew StreamWriter("progress.txt");
							writerl->Write("1");
							writerl->Close();

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
			catch (Exception^ ex)
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
		matches--;
	}
	else
	{
		MessageBox::Show("У вас нет спичек");
	}
}

void GameLogic::LevelOne::Result_Test()
{
	
}

void GameLogic::LevelOne::back()
{
	panelTwo->Controls->Clear();
	
	if (panelOne->Width < 30)
	{
		Button^ but = gcnew Button();
		but = copy_button(FireUp);
		but->Tag = tagButton;
		panelOne->Controls->Add(but);
	}
	else
	{
		Button^ but = gcnew Button();
		but = copy_button(FireDown);
		but->Tag = tagButton;
		panelOne->Controls->Add(but);
	}
	tagButton = "";
}

Button^ GameLogic::LevelOne::copy_button(Button^ originalButton)
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
	newButton->Click += gcnew EventHandler(this, &LevelOne::ClickBut);

	return newButton;
}

System::Void GameLogic::LevelOne::button_back_Click(System::Object^ sender, System::EventArgs^ e)
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

void GameLogic::LevelOne::backClick(System::Object^ sender, System::EventArgs^ e)
{
	matches = 0;
	
	panelI->Controls->Clear();
	if (panelOne->Width < 30)
	{
		Button^ but = gcnew Button();
		but = copy_button(FireUp);
		but->Tag = tagButton;
		panelOne->Controls->Add(but);
	}
	else
	{
		Button^ but = gcnew Button();
		but = copy_button(FireDown);
		but->Tag = tagButton;
		panelOne->Controls->Add(but);
	}
	tagButton = "";
}

