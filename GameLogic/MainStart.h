#pragma once
#include"GameForm.h"
#include"settingsForm.h"
#include"formAbout.h"

namespace GameLogic {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Media;
	using namespace System::IO;
	/// <summary>
	/// Сводка для MainStart
	/// </summary>
	public ref class MainStart : public System::Windows::Forms::Form
	{
	public:
		SoundPlayer^ player = gcnew SoundPlayer("lets-see-q1-extra-large.wav");;
			MainStart(void)
			{
				InitializeComponent();
				StreamReader^ reader = gcnew StreamReader("volume.txt");
				String^ num = reader->ReadLine();
				reader->Close();

				if (num == "1")
				{
					player->PlayLooping();
				}


				StreamReader^ readert = gcnew StreamReader("theme.txt");
				String^ numt = readert->ReadLine();
				readert->Close();
				if (numt == "1")
				{
					MainStart::label1->ForeColor = Color::Black;
					MainStart::BackColor = Color::FromArgb(249, 250, 209);
					MainStart::button1->BackColor = Color::FromArgb(254, 219, 155);
					MainStart::button2->BackColor = Color::FromArgb(254, 219, 155);
					

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
			}

			void OnmusicClick(Object^ sender, System::EventArgs^ e)
			{
				StreamReader^ reader = gcnew StreamReader("volume.txt");
				String^ num = reader->ReadLine();
				reader->Close();

				if (num == "1")
				{
					player->Stop();
					
					StreamWriter^ writer = gcnew StreamWriter("volume.txt");
					writer->WriteLine("0");
					writer->Close();
			
				}
				else
				{
					
					player->PlayLooping();

					StreamWriter^ writer = gcnew StreamWriter("volume.txt");
					writer->WriteLine("1");
					writer->Close();
				}
			}
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MainStart()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:








	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;













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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainStart::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(301, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(575, 59);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Головоломки со спичками";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Gray;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Calibri", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(365, 377);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(456, 82);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Играть";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MainStart::button_play_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Gray;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Calibri", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button2->Location = System::Drawing::Point(448, 509);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(289, 82);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Настройки";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MainStart::button7_Click);
			// 
			// MainStart
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->ClientSize = System::Drawing::Size(1166, 671);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MainStart";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Головоломка со спичками";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button_play_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e);
	   //О приложении
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e);
};
}
