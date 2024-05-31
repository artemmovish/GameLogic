#include "LevelOne.h"
using namespace System::Windows::Forms;

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
	if (!flowLayoutPanel7->Controls->Count)
	{
		
	}
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

