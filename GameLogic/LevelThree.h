#pragma once

namespace GameLogic {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Media;
	/// <summary>
	/// Сводка для LevelThree
	/// </summary>
	public ref class LevelThree : public System::Windows::Forms::Form
	{
	public:
		
		LevelThree(void)
		{
			InitializeComponent();
			StreamReader^ reader = gcnew StreamReader("volume.txt");
			String^ num = reader->ReadLine();
			reader->Close();

			if (num == "1")
			{
				SoundPlayer^ player = gcnew SoundPlayer("friend-clock-2008.wav");
				player->PlayLooping();

			}

			//Тема
			StreamReader^ readert = gcnew StreamReader("theme.txt");
			String^ numt = readert->ReadLine();
			readert->Close();

			if (numt == "1")
			{
				LevelThree:label1->ForeColor = Color::Black;
				LevelThree::BackColor = Color::FromArgb(249, 250, 209);
				LevelThree::label1->BackColor = Color::FromArgb(254, 242, 185);
				LevelThree::groupBox1->ForeColor = Color::Black;
				LevelThree::button_back->BackColor = Color::FromArgb(254, 219, 155);
				LevelThree::button_back->ForeColor = Color::Black;
				LevelThree::checkRule->ForeColor = Color::Black;

			}
			//тёмная тема
			else
			{
				LevelThree::label1->ForeColor = Color::WhiteSmoke;
				LevelThree::BackColor = Color::FromArgb(26, 26, 26);
				LevelThree::label1->BackColor = Color::FromArgb(26, 26, 26);
				LevelThree::groupBox1->ForeColor = Color::WhiteSmoke;
				LevelThree::button_back->BackColor = Color::Gray;
				LevelThree::button_back->ForeColor = Color::WhiteSmoke;
				LevelThree::checkRule->ForeColor = Color::WhiteSmoke;
			}
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~LevelThree()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ FireDown;
	protected:
	private: System::Windows::Forms::Button^ FireUp;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel39;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel38;

	private: System::Windows::Forms::CheckBox^ checkRule;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel23;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel24;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel16;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel17;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel18;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel19;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel20;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel21;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel22;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel14;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel5;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel13;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel6;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel12;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel7;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel11;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel4;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel10;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel3;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel9;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel8;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::FlowLayoutPanel^ panelI;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button_back;
private: System::Windows::Forms::Button^ fireI;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LevelThree::typeid));
			this->FireDown = (gcnew System::Windows::Forms::Button());
			this->FireUp = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel39 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel38 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->checkRule = (gcnew System::Windows::Forms::CheckBox());
			this->flowLayoutPanel23 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel24 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel16 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutPanel17 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel18 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutPanel19 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutPanel20 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel21 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutPanel22 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutPanel14 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel5 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel13 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel6 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel12 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutPanel7 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutPanel11 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel4 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel10 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel3 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel9 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutPanel8 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->panelI = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button_back = (gcnew System::Windows::Forms::Button());
			this->fireI = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel39->SuspendLayout();
			this->flowLayoutPanel38->SuspendLayout();
			this->flowLayoutPanel23->SuspendLayout();
			this->flowLayoutPanel24->SuspendLayout();
			this->flowLayoutPanel17->SuspendLayout();
			this->flowLayoutPanel20->SuspendLayout();
			this->flowLayoutPanel14->SuspendLayout();
			this->flowLayoutPanel5->SuspendLayout();
			this->flowLayoutPanel13->SuspendLayout();
			this->flowLayoutPanel6->SuspendLayout();
			this->flowLayoutPanel11->SuspendLayout();
			this->flowLayoutPanel4->SuspendLayout();
			this->flowLayoutPanel10->SuspendLayout();
			this->flowLayoutPanel3->SuspendLayout();
			this->flowLayoutPanel8->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// FireDown
			// 
			this->FireDown->BackColor = System::Drawing::Color::Transparent;
			this->FireDown->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"FireDown.BackgroundImage")));
			this->FireDown->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->FireDown->Cursor = System::Windows::Forms::Cursors::Hand;
			this->FireDown->FlatAppearance->BorderSize = 0;
			this->FireDown->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->FireDown->Location = System::Drawing::Point(264, 660);
			this->FireDown->Name = L"FireDown";
			this->FireDown->Size = System::Drawing::Size(154, 21);
			this->FireDown->TabIndex = 109;
			this->FireDown->UseVisualStyleBackColor = false;
			// 
			// FireUp
			// 
			this->FireUp->BackColor = System::Drawing::Color::Transparent;
			this->FireUp->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"FireUp.BackgroundImage")));
			this->FireUp->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->FireUp->Cursor = System::Windows::Forms::Cursors::Hand;
			this->FireUp->FlatAppearance->BorderSize = 0;
			this->FireUp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->FireUp->Location = System::Drawing::Point(238, 664);
			this->FireUp->Name = L"FireUp";
			this->FireUp->Size = System::Drawing::Size(21, 154);
			this->FireUp->TabIndex = 108;
			this->FireUp->UseVisualStyleBackColor = false;
			// 
			// flowLayoutPanel39
			// 
			this->flowLayoutPanel39->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel39->Controls->Add(this->button16);
			this->flowLayoutPanel39->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel39->Location = System::Drawing::Point(601, 394);
			this->flowLayoutPanel39->Name = L"flowLayoutPanel39";
			this->flowLayoutPanel39->Size = System::Drawing::Size(154, 24);
			this->flowLayoutPanel39->TabIndex = 107;
			this->flowLayoutPanel39->Click += gcnew System::EventHandler(this, &LevelThree::ClickPanel);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::Transparent;
			this->button16->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button16.BackgroundImage")));
			this->button16->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button16->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button16->FlatAppearance->BorderSize = 0;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Location = System::Drawing::Point(3, 3);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(154, 21);
			this->button16->TabIndex = 110;
			this->button16->UseVisualStyleBackColor = false;
			// 
			// flowLayoutPanel38
			// 
			this->flowLayoutPanel38->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel38->Controls->Add(this->button17);
			this->flowLayoutPanel38->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel38->Location = System::Drawing::Point(601, 344);
			this->flowLayoutPanel38->Name = L"flowLayoutPanel38";
			this->flowLayoutPanel38->Size = System::Drawing::Size(154, 24);
			this->flowLayoutPanel38->TabIndex = 106;
			this->flowLayoutPanel38->Click += gcnew System::EventHandler(this, &LevelThree::ClickPanel);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::Transparent;
			this->button17->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button17.BackgroundImage")));
			this->button17->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button17->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button17->FlatAppearance->BorderSize = 0;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->Location = System::Drawing::Point(3, 3);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(154, 21);
			this->button17->TabIndex = 110;
			this->button17->UseVisualStyleBackColor = false;
			// 
			// checkRule
			// 
			this->checkRule->AutoSize = true;
			this->checkRule->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkRule->Location = System::Drawing::Point(553, 606);
			this->checkRule->Name = L"checkRule";
			this->checkRule->Size = System::Drawing::Size(426, 29);
			this->checkRule->TabIndex = 104;
			this->checkRule->Text = L"Не уведомлять при неправильном ответе\r\n";
			this->checkRule->UseVisualStyleBackColor = true;
			// 
			// flowLayoutPanel23
			// 
			this->flowLayoutPanel23->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel23->Controls->Add(this->button9);
			this->flowLayoutPanel23->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel23->Location = System::Drawing::Point(296, 306);
			this->flowLayoutPanel23->Name = L"flowLayoutPanel23";
			this->flowLayoutPanel23->Size = System::Drawing::Size(24, 154);
			this->flowLayoutPanel23->TabIndex = 103;
			this->flowLayoutPanel23->Click += gcnew System::EventHandler(this, &LevelThree::ClickPanel);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Transparent;
			this->button9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button9.BackgroundImage")));
			this->button9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Location = System::Drawing::Point(3, 3);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(21, 154);
			this->button9->TabIndex = 109;
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &LevelThree::ClickBut);
			// 
			// flowLayoutPanel24
			// 
			this->flowLayoutPanel24->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel24->Controls->Add(this->button10);
			this->flowLayoutPanel24->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel24->Location = System::Drawing::Point(229, 371);
			this->flowLayoutPanel24->Name = L"flowLayoutPanel24";
			this->flowLayoutPanel24->Size = System::Drawing::Size(154, 24);
			this->flowLayoutPanel24->TabIndex = 102;
			this->flowLayoutPanel24->Click += gcnew System::EventHandler(this, &LevelThree::ClickPanel);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::Transparent;
			this->button10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button10.BackgroundImage")));
			this->button10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button10->FlatAppearance->BorderSize = 0;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Location = System::Drawing::Point(3, 3);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(154, 21);
			this->button10->TabIndex = 110;
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &LevelThree::ClickBut);
			// 
			// flowLayoutPanel16
			// 
			this->flowLayoutPanel16->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel16->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel16->Location = System::Drawing::Point(413, 554);
			this->flowLayoutPanel16->Name = L"flowLayoutPanel16";
			this->flowLayoutPanel16->Size = System::Drawing::Size(154, 24);
			this->flowLayoutPanel16->TabIndex = 99;
			this->flowLayoutPanel16->Click += gcnew System::EventHandler(this, &LevelThree::ClickPanel);
			// 
			// flowLayoutPanel17
			// 
			this->flowLayoutPanel17->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel17->Controls->Add(this->button7);
			this->flowLayoutPanel17->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel17->Location = System::Drawing::Point(571, 397);
			this->flowLayoutPanel17->Name = L"flowLayoutPanel17";
			this->flowLayoutPanel17->Size = System::Drawing::Size(24, 154);
			this->flowLayoutPanel17->TabIndex = 101;
			this->flowLayoutPanel17->Click += gcnew System::EventHandler(this, &LevelThree::ClickPanel);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Transparent;
			this->button7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.BackgroundImage")));
			this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Location = System::Drawing::Point(3, 3);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(21, 154);
			this->button7->TabIndex = 109;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &LevelThree::ClickBut);
			// 
			// flowLayoutPanel18
			// 
			this->flowLayoutPanel18->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel18->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel18->Location = System::Drawing::Point(389, 397);
			this->flowLayoutPanel18->Name = L"flowLayoutPanel18";
			this->flowLayoutPanel18->Size = System::Drawing::Size(24, 154);
			this->flowLayoutPanel18->TabIndex = 100;
			this->flowLayoutPanel18->Click += gcnew System::EventHandler(this, &LevelThree::ClickPanel);
			// 
			// flowLayoutPanel19
			// 
			this->flowLayoutPanel19->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel19->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel19->Location = System::Drawing::Point(413, 371);
			this->flowLayoutPanel19->Name = L"flowLayoutPanel19";
			this->flowLayoutPanel19->Size = System::Drawing::Size(154, 24);
			this->flowLayoutPanel19->TabIndex = 96;
			this->flowLayoutPanel19->Click += gcnew System::EventHandler(this, &LevelThree::ClickPanel);
			// 
			// flowLayoutPanel20
			// 
			this->flowLayoutPanel20->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel20->Controls->Add(this->button8);
			this->flowLayoutPanel20->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel20->Location = System::Drawing::Point(571, 214);
			this->flowLayoutPanel20->Name = L"flowLayoutPanel20";
			this->flowLayoutPanel20->Size = System::Drawing::Size(24, 154);
			this->flowLayoutPanel20->TabIndex = 98;
			this->flowLayoutPanel20->Click += gcnew System::EventHandler(this, &LevelThree::ClickPanel);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Transparent;
			this->button8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.BackgroundImage")));
			this->button8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Location = System::Drawing::Point(3, 3);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(21, 154);
			this->button8->TabIndex = 109;
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &LevelThree::ClickBut);
			// 
			// flowLayoutPanel21
			// 
			this->flowLayoutPanel21->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel21->Location = System::Drawing::Point(389, 214);
			this->flowLayoutPanel21->Name = L"flowLayoutPanel21";
			this->flowLayoutPanel21->Size = System::Drawing::Size(24, 154);
			this->flowLayoutPanel21->TabIndex = 97;
			this->flowLayoutPanel21->Click += gcnew System::EventHandler(this, &LevelThree::ClickPanel);
			// 
			// flowLayoutPanel22
			// 
			this->flowLayoutPanel22->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel22->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel22->Location = System::Drawing::Point(413, 187);
			this->flowLayoutPanel22->Name = L"flowLayoutPanel22";
			this->flowLayoutPanel22->Size = System::Drawing::Size(154, 24);
			this->flowLayoutPanel22->TabIndex = 95;
			this->flowLayoutPanel22->Click += gcnew System::EventHandler(this, &LevelThree::ClickPanel);
			// 
			// flowLayoutPanel14
			// 
			this->flowLayoutPanel14->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel14->Controls->Add(this->button13);
			this->flowLayoutPanel14->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel14->Location = System::Drawing::Point(787, 554);
			this->flowLayoutPanel14->Name = L"flowLayoutPanel14";
			this->flowLayoutPanel14->Size = System::Drawing::Size(154, 24);
			this->flowLayoutPanel14->TabIndex = 90;
			this->flowLayoutPanel14->Click += gcnew System::EventHandler(this, &LevelThree::ClickPanel);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::Transparent;
			this->button13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button13.BackgroundImage")));
			this->button13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button13->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button13->FlatAppearance->BorderSize = 0;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Location = System::Drawing::Point(3, 3);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(154, 21);
			this->button13->TabIndex = 110;
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &LevelThree::ClickBut);
			// 
			// flowLayoutPanel5
			// 
			this->flowLayoutPanel5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel5->Controls->Add(this->button2);
			this->flowLayoutPanel5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel5->Location = System::Drawing::Point(37, 554);
			this->flowLayoutPanel5->Name = L"flowLayoutPanel5";
			this->flowLayoutPanel5->Size = System::Drawing::Size(154, 24);
			this->flowLayoutPanel5->TabIndex = 89;
			this->flowLayoutPanel5->Click += gcnew System::EventHandler(this, &LevelThree::ClickPanel);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(3, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(154, 21);
			this->button2->TabIndex = 110;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &LevelThree::ClickBut);
			// 
			// flowLayoutPanel13
			// 
			this->flowLayoutPanel13->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel13->Controls->Add(this->button12);
			this->flowLayoutPanel13->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel13->Location = System::Drawing::Point(945, 397);
			this->flowLayoutPanel13->Name = L"flowLayoutPanel13";
			this->flowLayoutPanel13->Size = System::Drawing::Size(24, 154);
			this->flowLayoutPanel13->TabIndex = 94;
			this->flowLayoutPanel13->Click += gcnew System::EventHandler(this, &LevelThree::ClickPanel);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::Transparent;
			this->button12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button12.BackgroundImage")));
			this->button12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button12->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button12->FlatAppearance->BorderSize = 0;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Location = System::Drawing::Point(3, 3);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(21, 154);
			this->button12->TabIndex = 109;
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &LevelThree::ClickBut);
			// 
			// flowLayoutPanel6
			// 
			this->flowLayoutPanel6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel6->Controls->Add(this->button5);
			this->flowLayoutPanel6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel6->Location = System::Drawing::Point(195, 397);
			this->flowLayoutPanel6->Name = L"flowLayoutPanel6";
			this->flowLayoutPanel6->Size = System::Drawing::Size(24, 154);
			this->flowLayoutPanel6->TabIndex = 93;
			this->flowLayoutPanel6->Click += gcnew System::EventHandler(this, &LevelThree::ClickPanel);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Transparent;
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Location = System::Drawing::Point(3, 3);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(21, 154);
			this->button5->TabIndex = 109;
			this->button5->Tag = L"1";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &LevelThree::ClickBut);
			// 
			// flowLayoutPanel12
			// 
			this->flowLayoutPanel12->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel12->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel12->Location = System::Drawing::Point(763, 397);
			this->flowLayoutPanel12->Name = L"flowLayoutPanel12";
			this->flowLayoutPanel12->Size = System::Drawing::Size(24, 154);
			this->flowLayoutPanel12->TabIndex = 92;
			this->flowLayoutPanel12->Tag = L"1";
			this->flowLayoutPanel12->Click += gcnew System::EventHandler(this, &LevelThree::ClickPanel);
			// 
			// flowLayoutPanel7
			// 
			this->flowLayoutPanel7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel7->Location = System::Drawing::Point(13, 397);
			this->flowLayoutPanel7->Name = L"flowLayoutPanel7";
			this->flowLayoutPanel7->Size = System::Drawing::Size(24, 154);
			this->flowLayoutPanel7->TabIndex = 91;
			this->flowLayoutPanel7->Tag = L"1";
			this->flowLayoutPanel7->Click += gcnew System::EventHandler(this, &LevelThree::ClickPanel);
			// 
			// flowLayoutPanel11
			// 
			this->flowLayoutPanel11->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel11->Controls->Add(this->button14);
			this->flowLayoutPanel11->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel11->Location = System::Drawing::Point(787, 371);
			this->flowLayoutPanel11->Name = L"flowLayoutPanel11";
			this->flowLayoutPanel11->Size = System::Drawing::Size(154, 24);
			this->flowLayoutPanel11->TabIndex = 86;
			this->flowLayoutPanel11->Click += gcnew System::EventHandler(this, &LevelThree::ClickPanel);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::Transparent;
			this->button14->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button14.BackgroundImage")));
			this->button14->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button14->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button14->FlatAppearance->BorderSize = 0;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Location = System::Drawing::Point(3, 3);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(154, 21);
			this->button14->TabIndex = 110;
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &LevelThree::ClickBut);
			// 
			// flowLayoutPanel4
			// 
			this->flowLayoutPanel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel4->Controls->Add(this->button3);
			this->flowLayoutPanel4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel4->Location = System::Drawing::Point(37, 371);
			this->flowLayoutPanel4->Name = L"flowLayoutPanel4";
			this->flowLayoutPanel4->Size = System::Drawing::Size(154, 24);
			this->flowLayoutPanel4->TabIndex = 85;
			this->flowLayoutPanel4->Click += gcnew System::EventHandler(this, &LevelThree::ClickPanel);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(3, 3);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(154, 21);
			this->button3->TabIndex = 110;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &LevelThree::ClickBut);
			// 
			// flowLayoutPanel10
			// 
			this->flowLayoutPanel10->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel10->Controls->Add(this->button11);
			this->flowLayoutPanel10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel10->Location = System::Drawing::Point(945, 214);
			this->flowLayoutPanel10->Name = L"flowLayoutPanel10";
			this->flowLayoutPanel10->Size = System::Drawing::Size(24, 154);
			this->flowLayoutPanel10->TabIndex = 88;
			this->flowLayoutPanel10->Click += gcnew System::EventHandler(this, &LevelThree::ClickPanel);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::Transparent;
			this->button11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button11.BackgroundImage")));
			this->button11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button11->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button11->FlatAppearance->BorderSize = 0;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Location = System::Drawing::Point(3, 3);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(21, 154);
			this->button11->TabIndex = 109;
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &LevelThree::ClickBut);
			// 
			// flowLayoutPanel3
			// 
			this->flowLayoutPanel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel3->Controls->Add(this->button6);
			this->flowLayoutPanel3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel3->Location = System::Drawing::Point(195, 214);
			this->flowLayoutPanel3->Name = L"flowLayoutPanel3";
			this->flowLayoutPanel3->Size = System::Drawing::Size(24, 154);
			this->flowLayoutPanel3->TabIndex = 87;
			this->flowLayoutPanel3->Click += gcnew System::EventHandler(this, &LevelThree::ClickPanel);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Transparent;
			this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Location = System::Drawing::Point(3, 3);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(21, 154);
			this->button6->TabIndex = 109;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &LevelThree::ClickBut);
			// 
			// flowLayoutPanel9
			// 
			this->flowLayoutPanel9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel9->Location = System::Drawing::Point(763, 214);
			this->flowLayoutPanel9->Name = L"flowLayoutPanel9";
			this->flowLayoutPanel9->Size = System::Drawing::Size(24, 154);
			this->flowLayoutPanel9->TabIndex = 84;
			this->flowLayoutPanel9->Click += gcnew System::EventHandler(this, &LevelThree::ClickPanel);
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel2->Location = System::Drawing::Point(13, 214);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Size = System::Drawing::Size(24, 154);
			this->flowLayoutPanel2->TabIndex = 83;
			this->flowLayoutPanel2->Click += gcnew System::EventHandler(this, &LevelThree::ClickPanel);
			// 
			// flowLayoutPanel8
			// 
			this->flowLayoutPanel8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel8->Controls->Add(this->button15);
			this->flowLayoutPanel8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel8->Location = System::Drawing::Point(787, 187);
			this->flowLayoutPanel8->Name = L"flowLayoutPanel8";
			this->flowLayoutPanel8->Size = System::Drawing::Size(154, 24);
			this->flowLayoutPanel8->TabIndex = 81;
			this->flowLayoutPanel8->Click += gcnew System::EventHandler(this, &LevelThree::ClickPanel);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::Transparent;
			this->button15->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button15.BackgroundImage")));
			this->button15->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button15->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button15->FlatAppearance->BorderSize = 0;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Location = System::Drawing::Point(3, 3);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(154, 21);
			this->button15->TabIndex = 110;
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &LevelThree::ClickBut);
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel1->Controls->Add(this->button4);
			this->flowLayoutPanel1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel1->Location = System::Drawing::Point(37, 187);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(154, 24);
			this->flowLayoutPanel1->TabIndex = 82;
			this->flowLayoutPanel1->Click += gcnew System::EventHandler(this, &LevelThree::ClickPanel);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Location = System::Drawing::Point(3, 3);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(154, 21);
			this->button4->TabIndex = 110;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &LevelThree::ClickBut);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->panelI);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(12, 114);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(169, 51);
			this->groupBox1->TabIndex = 80;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Инвентарь";
			// 
			// panelI
			// 
			this->panelI->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelI->Location = System::Drawing::Point(3, 26);
			this->panelI->Name = L"panelI";
			this->panelI->Size = System::Drawing::Size(163, 22);
			this->panelI->TabIndex = 16;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(185)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(-1, -1);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(992, 64);
			this->label1->TabIndex = 110;
			this->label1->Text = L"Нужно переместить только одну спичку в выложенном спичками арифметическом примере"
				L" «3+1=3» так, \r\nчтобы выражение стало верным (можно менять и знаки, и числа).";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button_back
			// 
			this->button_back->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->button_back->FlatAppearance->BorderSize = 0;
			this->button_back->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_back->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_back->Location = System::Drawing::Point(12, 593);
			this->button_back->Name = L"button_back";
			this->button_back->Size = System::Drawing::Size(230, 42);
			this->button_back->TabIndex = 111;
			this->button_back->Text = L"Вернуться";
			this->button_back->UseVisualStyleBackColor = false;
			this->button_back->Click += gcnew System::EventHandler(this, &LevelThree::button_back_Click);
			// 
			// fireI
			// 
			this->fireI->BackColor = System::Drawing::Color::Transparent;
			this->fireI->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"fireI.BackgroundImage")));
			this->fireI->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->fireI->Cursor = System::Windows::Forms::Cursors::Hand;
			this->fireI->FlatAppearance->BorderSize = 0;
			this->fireI->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->fireI->Location = System::Drawing::Point(1034, 231);
			this->fireI->Name = L"fireI";
			this->fireI->Size = System::Drawing::Size(154, 21);
			this->fireI->TabIndex = 112;
			this->fireI->UseVisualStyleBackColor = false;
			this->fireI->Click += gcnew System::EventHandler(this, &LevelThree::backClick);
			// 
			// LevelThree
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(209)));
			this->ClientSize = System::Drawing::Size(991, 659);
			this->Controls->Add(this->fireI);
			this->Controls->Add(this->button_back);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->FireDown);
			this->Controls->Add(this->FireUp);
			this->Controls->Add(this->flowLayoutPanel39);
			this->Controls->Add(this->flowLayoutPanel38);
			this->Controls->Add(this->checkRule);
			this->Controls->Add(this->flowLayoutPanel23);
			this->Controls->Add(this->flowLayoutPanel24);
			this->Controls->Add(this->flowLayoutPanel16);
			this->Controls->Add(this->flowLayoutPanel17);
			this->Controls->Add(this->flowLayoutPanel18);
			this->Controls->Add(this->flowLayoutPanel19);
			this->Controls->Add(this->flowLayoutPanel20);
			this->Controls->Add(this->flowLayoutPanel21);
			this->Controls->Add(this->flowLayoutPanel22);
			this->Controls->Add(this->flowLayoutPanel14);
			this->Controls->Add(this->flowLayoutPanel5);
			this->Controls->Add(this->flowLayoutPanel13);
			this->Controls->Add(this->flowLayoutPanel6);
			this->Controls->Add(this->flowLayoutPanel12);
			this->Controls->Add(this->flowLayoutPanel7);
			this->Controls->Add(this->flowLayoutPanel11);
			this->Controls->Add(this->flowLayoutPanel4);
			this->Controls->Add(this->flowLayoutPanel10);
			this->Controls->Add(this->flowLayoutPanel3);
			this->Controls->Add(this->flowLayoutPanel9);
			this->Controls->Add(this->flowLayoutPanel2);
			this->Controls->Add(this->flowLayoutPanel8);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"LevelThree";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"LevelThree";
			this->flowLayoutPanel39->ResumeLayout(false);
			this->flowLayoutPanel38->ResumeLayout(false);
			this->flowLayoutPanel23->ResumeLayout(false);
			this->flowLayoutPanel24->ResumeLayout(false);
			this->flowLayoutPanel17->ResumeLayout(false);
			this->flowLayoutPanel20->ResumeLayout(false);
			this->flowLayoutPanel14->ResumeLayout(false);
			this->flowLayoutPanel5->ResumeLayout(false);
			this->flowLayoutPanel13->ResumeLayout(false);
			this->flowLayoutPanel6->ResumeLayout(false);
			this->flowLayoutPanel11->ResumeLayout(false);
			this->flowLayoutPanel4->ResumeLayout(false);
			this->flowLayoutPanel10->ResumeLayout(false);
			this->flowLayoutPanel3->ResumeLayout(false);
			this->flowLayoutPanel8->ResumeLayout(false);
			this->flowLayoutPanel1->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int matches = 0;
		String^ tagButton;
		Control^ panelOne;
		Control^ panelTwo;
		// Метод для удаления кнопки
		void delete_button(Button^ button);
		void ClickBut(System::Object^ sender, System::EventArgs^ e);
		void ClickPanel(System::Object^ sender, System::EventArgs^ e);
		void Result_Test();
		void back();
		// Метод для создания копии кнопки
		Button^ copy_button(Button^ originalButton);

		void backClick(System::Object^ sender, System::EventArgs^ e);

private: System::Void button_back_Click(System::Object^ sender, System::EventArgs^ e);
};
}
