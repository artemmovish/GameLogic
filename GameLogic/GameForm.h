#pragma once
#include"LevelOne.h"
#include"LevelTwo.h"
#include"LevelThree.h"
#include"LevelFour.h"
#include"LevelFive.h"

namespace GameLogic {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Сводка для GameForm
	/// </summary>
	public ref class GameForm : public System::Windows::Forms::Form
	{
	public:
		GameForm(void)
		{
			InitializeComponent();
			StreamReader^ readert = gcnew StreamReader("theme.txt");
			String^ numt = readert->ReadLine();
			readert->Close();
			if (numt == "1")
			{
				GameForm::BackColor = Color::FromArgb(249, 250, 209);
				GameForm::button_back->BackColor = Color::FromArgb(254, 219, 155);
				GameForm::button_back->ForeColor = Color::Black;

				GameForm::button1->BackColor = Color::FromArgb(254, 219, 155);
				GameForm::button1->ForeColor = Color::Black;

				GameForm::button2->BackColor = Color::FromArgb(254, 219, 155);
				GameForm::button2->ForeColor = Color::Black;

				GameForm::button3->BackColor = Color::FromArgb(254, 219, 155);
				GameForm::button3->ForeColor = Color::Black;

				GameForm::button4->BackColor = Color::FromArgb(254, 219, 155);
				GameForm::button4->ForeColor = Color::Black;

				GameForm::button5->BackColor = Color::FromArgb(254, 219, 155);
				GameForm::button5->ForeColor = Color::Black;


			}
			else
			{
				GameForm::BackColor = Color::FromArgb(26, 26, 26);
				GameForm::button_back->BackColor = Color::Gray;
				GameForm::button_back->ForeColor = Color::WhiteSmoke;

				GameForm::button1->BackColor = Color::Gray;
				GameForm::button1->ForeColor = Color::WhiteSmoke;

				GameForm::button2->BackColor = Color::Gray;
				GameForm::button2->ForeColor = Color::WhiteSmoke;

				GameForm::button3->BackColor = Color::Gray;
				GameForm::button3->ForeColor = Color::WhiteSmoke;

				GameForm::button4->BackColor = Color::Gray;
				GameForm::button4->ForeColor = Color::WhiteSmoke;

				GameForm::button5->BackColor = Color::Gray;
				GameForm::button5->ForeColor = Color::WhiteSmoke;
			}

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
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~GameForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button_back;
	protected:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GameForm::typeid));
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button_back = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(409, 186);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(138, 117);
			this->button4->TabIndex = 8;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &GameForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(321, 336);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(138, 117);
			this->button5->TabIndex = 9;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &GameForm::button5_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(228, 48);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(138, 117);
			this->button1->TabIndex = 5;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &GameForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(409, 48);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(138, 117);
			this->button2->TabIndex = 6;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &GameForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(228, 186);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(138, 117);
			this->button3->TabIndex = 7;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &GameForm::button3_Click);
			// 
			// button_back
			// 
			this->button_back->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->button_back->FlatAppearance->BorderSize = 0;
			this->button_back->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_back->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_back->Location = System::Drawing::Point(12, 502);
			this->button_back->Name = L"button_back";
			this->button_back->Size = System::Drawing::Size(105, 55);
			this->button_back->TabIndex = 10;
			this->button_back->Text = L"Вернуться";
			this->button_back->UseVisualStyleBackColor = false;
			this->button_back->Click += gcnew System::EventHandler(this, &GameForm::button_back_Click);
			// 
			// GameForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(209)));
			this->ClientSize = System::Drawing::Size(774, 578);
			this->Controls->Add(this->button_back);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"GameForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"GameForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_back_Click(System::Object^ sender, System::EventArgs^ e);

};
}
