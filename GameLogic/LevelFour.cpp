#include "LevelFour.h"
using namespace System::Windows::Forms;
void GameLogic::LevelFour::delete_button(Button^ button)
{
	if (button != nullptr)
	{
		// ������������ �� ���� �������
		button->Click -= gcnew EventHandler(this, &LevelFour::ClickBut);

		// ������� ������ �� ��������� Controls
		this->Controls->Remove(button);

		// ������� ���� ������
		delete button;
	}
}

void GameLogic::LevelFour::ClickBut(System::Object^ sender, System::EventArgs^ e)
{
	if (matches < 3)
	{
		// ���������� sender � ���� Button
		Button^ button = dynamic_cast<Button^>(sender);
		if (button != nullptr)
		{
			//���������� ������
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
			// ����������� ������ �� ������� (��� ������)
			Button^ but = gcnew Button();
			but = copy_button(FireDown);
			panelI->Controls->Add(but);
			// ������� �����
			try
			{
				if (button->Tag->ToString() == "1")
				{
					score++;
				}
				if (matches == 3)
				{
					if (score == 3)
					{
						MessageBox::Show("�� ��������");
						this->Close();
					}
					else
					{
						if (!checkRule->Checked)
						{
							MessageBox::Show("�� ���������");
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
				if (matches == 3)
				{
					if (!checkRule->Checked)
					{
						MessageBox::Show("�� ���������");
						back();
					}
					else
					{
						back();
					}
				}
			}
			// �������� ������
			delete button;
		}
	}
}

void GameLogic::LevelFour::ClickPanel(System::Object^ sender, System::EventArgs^ e)
{
	
}

void GameLogic::LevelFour::Result_Test()
{

}

void GameLogic::LevelFour::back()
{
	matches = 0;
	score = 0;
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
	if (panelTwo->Width < 30)
	{
		Button^ but = gcnew Button();
		but = copy_button(FireUp);
		panelTwo->Controls->Add(but);
	}
	else
	{
		Button^ but = gcnew Button();
		but = copy_button(FireDown);
		panelTwo->Controls->Add(but);
	}
	if (panelThree->Width < 30)
	{
		Button^ but = gcnew Button();
		but = copy_button(FireUp);
		panelThree->Controls->Add(but);
	}
	else
	{
		Button^ but = gcnew Button();
		but = copy_button(FireDown);
		panelThree->Controls->Add(but);
	}
	panelI->Controls->Clear();
}

Button^ GameLogic::LevelFour::copy_button(Button^ originalButton)
{
	Button^ newButton = gcnew Button();

	// ����������� �������
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

	// ����������� �������
	newButton->Click += gcnew EventHandler(this, &LevelFour::ClickBut);

	return newButton;
}

System::Void GameLogic::LevelFour::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("������� 3 ������ ���, ��� �� ����� 993 �����������.");
	return System::Void();
}

