#include "LevelThree.h"

#include "LevelThree.h"
using namespace System::Windows::Forms;
void GameLogic::LevelThree::delete_button(Button^ button)
{
	if (button != nullptr)
	{
		// Отписываемся от всех событий
		button->Click -= gcnew EventHandler(this, &LevelThree::ClickBut);

		// Удаляем кнопку из коллекции Controls
		this->Controls->Remove(button);

		// Удаляем саму кнопку
		delete button;
	}
}

void GameLogic::LevelThree::ClickBut(System::Object^ sender, System::EventArgs^ e)
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
			panelI->Controls->Add(but);
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

void GameLogic::LevelThree::ClickPanel(System::Object^ sender, System::EventArgs^ e)
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
					this->Close();
				}
				else
				{
					if (!checkRule->Checked)
					{
						MessageBox::Show("Вы проиграли");
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
					MessageBox::Show("Вы проиграли");
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

void GameLogic::LevelThree::Result_Test()
{

}

void GameLogic::LevelThree::back()
{
	tagButton = "";
	if (panelOne->Width < 30)
	{
		Button^ but = gcnew Button();
		but = copy_button(FireUp);
		panelOne->Controls->Add(but);
	}
	else
	{
		Button^ but = gcnew Button();
		but = copy_button(FireDown);
		panelOne->Controls->Add(but);
	}
	panelTwo->Controls->Clear();
}

Button^ GameLogic::LevelThree::copy_button(Button^ originalButton)
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
	newButton->Click += gcnew EventHandler(this, &LevelThree::ClickBut);

	return newButton;
}

System::Void GameLogic::LevelThree::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("Нужно переместить только одну спичку в выложенном спичками арифметическом примере «3+1=3» так, чтобы получилось верное равенство (можно менять знаки и цифры).");
	return System::Void();
}
