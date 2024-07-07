#pragma once

namespace GameLogic {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	/// <summary>
	/// Сводка для settingsForm
	/// </summary>
	public ref class settingsForm : public System::Windows::Forms::Form
	{
	public:
		event EventHandler^ musicClick;

		settingsForm(void)
		{
			InitializeComponent();
			StreamReader^ readert = gcnew StreamReader("theme.txt");
			String^ numt = readert->ReadLine();
			readert->Close();
			if (numt == "1")
			{
				settingsForm::label1->ForeColor = Color::Black;
				settingsForm::BackColor = Color::FromArgb(249, 250, 209);
				settingsForm::button_theme->BackColor = Color::FromArgb(254, 219, 155);
				settingsForm::button_theme->ForeColor = Color::Black;

				settingsForm::button_reset->BackColor = Color::FromArgb(254, 219, 155);
				settingsForm::button_reset->ForeColor = Color::Black;

				settingsForm::button_back->BackColor = Color::FromArgb(254, 219, 155);
				settingsForm::button_back->ForeColor = Color::Black;
				settingsForm::button_play_stop->Image = Image::FromFile("black.png");
			}
			else
			{
				settingsForm::BackColor = Color::FromArgb(26, 26, 26);
				settingsForm::label1->ForeColor = Color::White;

				settingsForm::button_theme->BackColor = Color::Gray;
				settingsForm::button_theme->ForeColor = Color::WhiteSmoke;

				settingsForm::button_reset->BackColor = Color::Gray;
				settingsForm::button_reset->ForeColor = Color::WhiteSmoke;

				settingsForm::button_back->BackColor = Color::Gray;
				settingsForm::button_back->ForeColor = Color::WhiteSmoke;
				settingsForm::button_play_stop->Image = Image::FromFile("white.png");

			}
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~settingsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button_back;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button_theme;





	private: System::Windows::Forms::Button^ button_play_stop;



	private: System::Windows::Forms::Button^ button_reset;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(settingsForm::typeid));
			this->button_back = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button_theme = (gcnew System::Windows::Forms::Button());
			this->button_play_stop = (gcnew System::Windows::Forms::Button());
			this->button_reset = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button_back
			// 
			this->button_back->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->button_back->FlatAppearance->BorderSize = 0;
			this->button_back->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_back->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_back->Location = System::Drawing::Point(12, 400);
			this->button_back->Name = L"button_back";
			this->button_back->Size = System::Drawing::Size(134, 48);
			this->button_back->TabIndex = 0;
			this->button_back->Text = L"Вернуться";
			this->button_back->UseVisualStyleBackColor = false;
			this->button_back->Click += gcnew System::EventHandler(this, &settingsForm::button_back_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(273, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(190, 45);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Настройки";
			// 
			// button_theme
			// 
			this->button_theme->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->button_theme->FlatAppearance->BorderSize = 0;
			this->button_theme->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_theme->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_theme->Location = System::Drawing::Point(214, 273);
			this->button_theme->Name = L"button_theme";
			this->button_theme->Size = System::Drawing::Size(301, 61);
			this->button_theme->TabIndex = 3;
			this->button_theme->Text = L"Сменить тему";
			this->button_theme->UseVisualStyleBackColor = false;
			this->button_theme->Click += gcnew System::EventHandler(this, &settingsForm::button_theme_Click);
			// 
			// button_play_stop
			// 
			this->button_play_stop->BackColor = System::Drawing::Color::Transparent;
			this->button_play_stop->FlatAppearance->BorderSize = 0;
			this->button_play_stop->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_play_stop->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_play_stop.Image")));
			this->button_play_stop->Location = System::Drawing::Point(334, 149);
			this->button_play_stop->Name = L"button_play_stop";
			this->button_play_stop->Size = System::Drawing::Size(63, 63);
			this->button_play_stop->TabIndex = 4;
			this->button_play_stop->UseVisualStyleBackColor = false;
			this->button_play_stop->Click += gcnew System::EventHandler(this, &settingsForm::button_play_stop_Click);
			// 
			// button_reset
			// 
			this->button_reset->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->button_reset->FlatAppearance->BorderSize = 0;
			this->button_reset->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_reset->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_reset->Location = System::Drawing::Point(214, 362);
			this->button_reset->Name = L"button_reset";
			this->button_reset->Size = System::Drawing::Size(301, 61);
			this->button_reset->TabIndex = 7;
			this->button_reset->Text = L"Сбросить прогресс";
			this->button_reset->UseVisualStyleBackColor = false;
			this->button_reset->Click += gcnew System::EventHandler(this, &settingsForm::button_reset_Click);
			// 
			// settingsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->ClientSize = System::Drawing::Size(727, 481);
			this->Controls->Add(this->button_reset);
			this->Controls->Add(this->button_play_stop);
			this->Controls->Add(this->button_theme);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button_back);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"settingsForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"settingsForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_back_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_reset_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_play_stop_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_theme_Click(System::Object^ sender, System::EventArgs^ e);
};
}
