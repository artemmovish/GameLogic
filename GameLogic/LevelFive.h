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
	/// Сводка для LevelFive
	/// </summary>
	public ref class LevelFive : public System::Windows::Forms::Form
	{
	public:
		
		LevelFive(void)
		{
			InitializeComponent();

			StreamReader^ reader1 = gcnew StreamReader("volume.txt");
			String^ num = reader1->ReadLine();
			reader1->Close();

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
				LevelFive::BackColor = Color::FromArgb(249, 250, 209);
				LevelFive::label1->BackColor = Color::FromArgb(254, 242, 185);
				LevelFive::groupBox1->ForeColor = Color::Black;
				LevelFive::button_back->BackColor = Color::FromArgb(254, 219, 155);
				LevelFive::button_back->ForeColor = Color::Black;
				LevelFive::checkRule->ForeColor = Color::Black;

			}
			//тёмная тема
			else
			{
				LevelFive::label1->ForeColor = Color::WhiteSmoke;
				LevelFive::BackColor = Color::FromArgb(26, 26, 26);
				LevelFive::label1->BackColor = Color::FromArgb(26, 26, 26);
				LevelFive::groupBox1->ForeColor = Color::WhiteSmoke;
				LevelFive::button_back->BackColor = Color::Gray;
				LevelFive::button_back->ForeColor = Color::WhiteSmoke;
				LevelFive::checkRule->ForeColor = Color::WhiteSmoke;
			}
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~LevelFive()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel12;
	protected:
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel39;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel9;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel37;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel36;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel8;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel31;
	private: System::Windows::Forms::Button^ FireDown;
	private: System::Windows::Forms::Button^ FireUp;

	private: System::Windows::Forms::CheckBox^ checkRule;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::FlowLayoutPanel^ panelI;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel3;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel4;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel5;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel6;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel13;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel7;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel10;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel11;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel14;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel15;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel16;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel17;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel18;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel19;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel20;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel21;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel22;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel23;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel24;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel25;
	private: System::Windows::Forms::Button^ button36;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel26;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel27;
	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel28;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel29;
	private: System::Windows::Forms::Button^ button35;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel30;
	private: System::Windows::Forms::Button^ button32;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel32;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel33;
	private: System::Windows::Forms::Button^ button34;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel34;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel35;
	private: System::Windows::Forms::Button^ button33;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel38;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel40;
	private: System::Windows::Forms::Button^ button31;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::Button^ button_back;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LevelFive::typeid));
			this->flowLayoutPanel12 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel39 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel9 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutPanel37 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel36 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel8 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel31 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->FireDown = (gcnew System::Windows::Forms::Button());
			this->FireUp = (gcnew System::Windows::Forms::Button());
			this->checkRule = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->panelI = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel3 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutPanel4 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel5 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel6 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel13 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel7 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel10 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel11 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel14 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel15 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel16 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutPanel17 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel18 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel19 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel20 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel21 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel22 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel23 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutPanel24 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel25 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel26 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel27 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel28 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel29 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel30 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel32 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel33 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel34 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutPanel35 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel38 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel40 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button_back = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel12->SuspendLayout();
			this->flowLayoutPanel39->SuspendLayout();
			this->flowLayoutPanel37->SuspendLayout();
			this->flowLayoutPanel36->SuspendLayout();
			this->flowLayoutPanel8->SuspendLayout();
			this->flowLayoutPanel31->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			this->flowLayoutPanel4->SuspendLayout();
			this->flowLayoutPanel5->SuspendLayout();
			this->flowLayoutPanel6->SuspendLayout();
			this->flowLayoutPanel13->SuspendLayout();
			this->flowLayoutPanel2->SuspendLayout();
			this->flowLayoutPanel7->SuspendLayout();
			this->flowLayoutPanel10->SuspendLayout();
			this->flowLayoutPanel11->SuspendLayout();
			this->flowLayoutPanel14->SuspendLayout();
			this->flowLayoutPanel15->SuspendLayout();
			this->flowLayoutPanel17->SuspendLayout();
			this->flowLayoutPanel18->SuspendLayout();
			this->flowLayoutPanel19->SuspendLayout();
			this->flowLayoutPanel20->SuspendLayout();
			this->flowLayoutPanel21->SuspendLayout();
			this->flowLayoutPanel22->SuspendLayout();
			this->flowLayoutPanel24->SuspendLayout();
			this->flowLayoutPanel25->SuspendLayout();
			this->flowLayoutPanel26->SuspendLayout();
			this->flowLayoutPanel27->SuspendLayout();
			this->flowLayoutPanel28->SuspendLayout();
			this->flowLayoutPanel29->SuspendLayout();
			this->flowLayoutPanel30->SuspendLayout();
			this->flowLayoutPanel32->SuspendLayout();
			this->flowLayoutPanel33->SuspendLayout();
			this->flowLayoutPanel35->SuspendLayout();
			this->flowLayoutPanel38->SuspendLayout();
			this->flowLayoutPanel40->SuspendLayout();
			this->SuspendLayout();
			// 
			// flowLayoutPanel12
			// 
			this->flowLayoutPanel12->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel12->Controls->Add(this->button5);
			this->flowLayoutPanel12->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel12->Location = System::Drawing::Point(33, 550);
			this->flowLayoutPanel12->Name = L"flowLayoutPanel12";
			this->flowLayoutPanel12->Size = System::Drawing::Size(154, 24);
			this->flowLayoutPanel12->TabIndex = 198;
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
			this->button5->Size = System::Drawing::Size(154, 21);
			this->button5->TabIndex = 180;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &LevelFive::ClickBut);
			// 
			// flowLayoutPanel39
			// 
			this->flowLayoutPanel39->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel39->Controls->Add(this->button3);
			this->flowLayoutPanel39->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel39->Location = System::Drawing::Point(9, 208);
			this->flowLayoutPanel39->Name = L"flowLayoutPanel39";
			this->flowLayoutPanel39->Size = System::Drawing::Size(24, 154);
			this->flowLayoutPanel39->TabIndex = 194;
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
			this->button3->Size = System::Drawing::Size(21, 154);
			this->button3->TabIndex = 179;
			this->button3->Tag = L"1";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &LevelFive::ClickBut);
			// 
			// flowLayoutPanel9
			// 
			this->flowLayoutPanel9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel9->Location = System::Drawing::Point(9, 393);
			this->flowLayoutPanel9->Name = L"flowLayoutPanel9";
			this->flowLayoutPanel9->Size = System::Drawing::Size(24, 154);
			this->flowLayoutPanel9->TabIndex = 191;
			// 
			// flowLayoutPanel37
			// 
			this->flowLayoutPanel37->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel37->Controls->Add(this->button7);
			this->flowLayoutPanel37->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel37->Location = System::Drawing::Point(33, 181);
			this->flowLayoutPanel37->Name = L"flowLayoutPanel37";
			this->flowLayoutPanel37->Size = System::Drawing::Size(154, 24);
			this->flowLayoutPanel37->TabIndex = 185;
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
			this->button7->Size = System::Drawing::Size(154, 21);
			this->button7->TabIndex = 180;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &LevelFive::ClickBut);
			// 
			// flowLayoutPanel36
			// 
			this->flowLayoutPanel36->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel36->Controls->Add(this->button2);
			this->flowLayoutPanel36->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel36->Location = System::Drawing::Point(188, 208);
			this->flowLayoutPanel36->Name = L"flowLayoutPanel36";
			this->flowLayoutPanel36->Size = System::Drawing::Size(24, 154);
			this->flowLayoutPanel36->TabIndex = 188;
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
			this->button2->Size = System::Drawing::Size(21, 154);
			this->button2->TabIndex = 179;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &LevelFive::ClickBut);
			// 
			// flowLayoutPanel8
			// 
			this->flowLayoutPanel8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel8->Controls->Add(this->button6);
			this->flowLayoutPanel8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel8->Location = System::Drawing::Point(33, 366);
			this->flowLayoutPanel8->Name = L"flowLayoutPanel8";
			this->flowLayoutPanel8->Size = System::Drawing::Size(154, 24);
			this->flowLayoutPanel8->TabIndex = 180;
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
			this->button6->Size = System::Drawing::Size(154, 21);
			this->button6->TabIndex = 180;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &LevelFive::ClickBut);
			// 
			// flowLayoutPanel31
			// 
			this->flowLayoutPanel31->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel31->Controls->Add(this->button4);
			this->flowLayoutPanel31->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel31->Location = System::Drawing::Point(188, 393);
			this->flowLayoutPanel31->Name = L"flowLayoutPanel31";
			this->flowLayoutPanel31->Size = System::Drawing::Size(24, 154);
			this->flowLayoutPanel31->TabIndex = 186;
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
			this->button4->Size = System::Drawing::Size(21, 154);
			this->button4->TabIndex = 179;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &LevelFive::ClickBut);
			// 
			// FireDown
			// 
			this->FireDown->BackColor = System::Drawing::Color::Transparent;
			this->FireDown->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"FireDown.BackgroundImage")));
			this->FireDown->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->FireDown->Cursor = System::Windows::Forms::Cursors::Hand;
			this->FireDown->FlatAppearance->BorderSize = 0;
			this->FireDown->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->FireDown->Location = System::Drawing::Point(165, 716);
			this->FireDown->Name = L"FireDown";
			this->FireDown->Size = System::Drawing::Size(154, 21);
			this->FireDown->TabIndex = 179;
			this->FireDown->UseVisualStyleBackColor = false;
			this->FireDown->Click += gcnew System::EventHandler(this, &LevelFive::ClickBut);
			// 
			// FireUp
			// 
			this->FireUp->BackColor = System::Drawing::Color::Transparent;
			this->FireUp->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"FireUp.BackgroundImage")));
			this->FireUp->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->FireUp->Cursor = System::Windows::Forms::Cursors::Hand;
			this->FireUp->FlatAppearance->BorderSize = 0;
			this->FireUp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->FireUp->Location = System::Drawing::Point(139, 682);
			this->FireUp->Name = L"FireUp";
			this->FireUp->Size = System::Drawing::Size(21, 154);
			this->FireUp->TabIndex = 178;
			this->FireUp->UseVisualStyleBackColor = false;
			this->FireUp->Click += gcnew System::EventHandler(this, &LevelFive::ClickBut);
			// 
			// checkRule
			// 
			this->checkRule->AutoSize = true;
			this->checkRule->FlatAppearance->BorderSize = 0;
			this->checkRule->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkRule->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkRule->Location = System::Drawing::Point(935, 602);
			this->checkRule->Name = L"checkRule";
			this->checkRule->Size = System::Drawing::Size(505, 37);
			this->checkRule->TabIndex = 176;
			this->checkRule->Text = L"Не уведомлять при неправильном ответе\r\n";
			this->checkRule->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->panelI);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(12, 109);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(489, 51);
			this->groupBox1->TabIndex = 175;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Инвентарь";
			// 
			// panelI
			// 
			this->panelI->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelI->Location = System::Drawing::Point(3, 26);
			this->panelI->Name = L"panelI";
			this->panelI->Size = System::Drawing::Size(483, 22);
			this->panelI->TabIndex = 16;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel1->Controls->Add(this->button13);
			this->flowLayoutPanel1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel1->Location = System::Drawing::Point(404, 393);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(24, 154);
			this->flowLayoutPanel1->TabIndex = 187;
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
			this->button13->Size = System::Drawing::Size(21, 154);
			this->button13->TabIndex = 179;
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &LevelFive::ClickBut);
			// 
			// flowLayoutPanel3
			// 
			this->flowLayoutPanel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel3->Location = System::Drawing::Point(404, 208);
			this->flowLayoutPanel3->Name = L"flowLayoutPanel3";
			this->flowLayoutPanel3->Size = System::Drawing::Size(24, 154);
			this->flowLayoutPanel3->TabIndex = 190;
			// 
			// flowLayoutPanel4
			// 
			this->flowLayoutPanel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel4->Controls->Add(this->button8);
			this->flowLayoutPanel4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel4->Location = System::Drawing::Point(249, 181);
			this->flowLayoutPanel4->Name = L"flowLayoutPanel4";
			this->flowLayoutPanel4->Size = System::Drawing::Size(154, 24);
			this->flowLayoutPanel4->TabIndex = 183;
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
			this->button8->Size = System::Drawing::Size(154, 21);
			this->button8->TabIndex = 180;
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &LevelFive::ClickBut);
			// 
			// flowLayoutPanel5
			// 
			this->flowLayoutPanel5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel5->Controls->Add(this->button11);
			this->flowLayoutPanel5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel5->Location = System::Drawing::Point(225, 393);
			this->flowLayoutPanel5->Name = L"flowLayoutPanel5";
			this->flowLayoutPanel5->Size = System::Drawing::Size(24, 154);
			this->flowLayoutPanel5->TabIndex = 192;
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
			this->button11->TabIndex = 179;
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &LevelFive::ClickBut);
			// 
			// flowLayoutPanel6
			// 
			this->flowLayoutPanel6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel6->Controls->Add(this->button12);
			this->flowLayoutPanel6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel6->Location = System::Drawing::Point(225, 208);
			this->flowLayoutPanel6->Name = L"flowLayoutPanel6";
			this->flowLayoutPanel6->Size = System::Drawing::Size(24, 154);
			this->flowLayoutPanel6->TabIndex = 195;
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
			this->button12->TabIndex = 179;
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &LevelFive::ClickBut);
			// 
			// flowLayoutPanel13
			// 
			this->flowLayoutPanel13->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel13->Controls->Add(this->button10);
			this->flowLayoutPanel13->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel13->Location = System::Drawing::Point(249, 550);
			this->flowLayoutPanel13->Name = L"flowLayoutPanel13";
			this->flowLayoutPanel13->Size = System::Drawing::Size(154, 24);
			this->flowLayoutPanel13->TabIndex = 199;
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
			this->button10->TabIndex = 180;
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &LevelFive::ClickBut);
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel2->Controls->Add(this->button9);
			this->flowLayoutPanel2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel2->Location = System::Drawing::Point(249, 366);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Size = System::Drawing::Size(154, 24);
			this->flowLayoutPanel2->TabIndex = 182;
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
			this->button9->Size = System::Drawing::Size(154, 21);
			this->button9->TabIndex = 180;
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &LevelFive::ClickBut);
			// 
			// flowLayoutPanel7
			// 
			this->flowLayoutPanel7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel7->Controls->Add(this->button14);
			this->flowLayoutPanel7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel7->Location = System::Drawing::Point(435, 366);
			this->flowLayoutPanel7->Name = L"flowLayoutPanel7";
			this->flowLayoutPanel7->Size = System::Drawing::Size(154, 24);
			this->flowLayoutPanel7->TabIndex = 182;
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
			this->button14->TabIndex = 180;
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &LevelFive::ClickBut);
			// 
			// flowLayoutPanel10
			// 
			this->flowLayoutPanel10->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel10->Controls->Add(this->button15);
			this->flowLayoutPanel10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel10->Location = System::Drawing::Point(595, 393);
			this->flowLayoutPanel10->Name = L"flowLayoutPanel10";
			this->flowLayoutPanel10->Size = System::Drawing::Size(24, 154);
			this->flowLayoutPanel10->TabIndex = 187;
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
			this->button15->Size = System::Drawing::Size(21, 154);
			this->button15->TabIndex = 179;
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &LevelFive::ClickBut);
			// 
			// flowLayoutPanel11
			// 
			this->flowLayoutPanel11->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel11->Controls->Add(this->button16);
			this->flowLayoutPanel11->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel11->Location = System::Drawing::Point(595, 208);
			this->flowLayoutPanel11->Name = L"flowLayoutPanel11";
			this->flowLayoutPanel11->Size = System::Drawing::Size(24, 154);
			this->flowLayoutPanel11->TabIndex = 190;
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
			this->button16->Size = System::Drawing::Size(21, 154);
			this->button16->TabIndex = 179;
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &LevelFive::ClickBut);
			// 
			// flowLayoutPanel14
			// 
			this->flowLayoutPanel14->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel14->Controls->Add(this->button21);
			this->flowLayoutPanel14->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel14->Location = System::Drawing::Point(818, 393);
			this->flowLayoutPanel14->Name = L"flowLayoutPanel14";
			this->flowLayoutPanel14->Size = System::Drawing::Size(24, 154);
			this->flowLayoutPanel14->TabIndex = 187;
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::Transparent;
			this->button21->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button21.BackgroundImage")));
			this->button21->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button21->FlatAppearance->BorderSize = 0;
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button21->Location = System::Drawing::Point(3, 3);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(21, 154);
			this->button21->TabIndex = 179;
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &LevelFive::ClickBut);
			// 
			// flowLayoutPanel15
			// 
			this->flowLayoutPanel15->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel15->Controls->Add(this->button18);
			this->flowLayoutPanel15->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel15->Location = System::Drawing::Point(663, 366);
			this->flowLayoutPanel15->Name = L"flowLayoutPanel15";
			this->flowLayoutPanel15->Size = System::Drawing::Size(154, 24);
			this->flowLayoutPanel15->TabIndex = 182;
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::Transparent;
			this->button18->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button18.BackgroundImage")));
			this->button18->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button18->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button18->FlatAppearance->BorderSize = 0;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button18->Location = System::Drawing::Point(3, 3);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(154, 21);
			this->button18->TabIndex = 180;
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &LevelFive::ClickBut);
			// 
			// flowLayoutPanel16
			// 
			this->flowLayoutPanel16->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel16->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel16->Location = System::Drawing::Point(818, 208);
			this->flowLayoutPanel16->Name = L"flowLayoutPanel16";
			this->flowLayoutPanel16->Size = System::Drawing::Size(24, 154);
			this->flowLayoutPanel16->TabIndex = 190;
			// 
			// flowLayoutPanel17
			// 
			this->flowLayoutPanel17->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel17->Controls->Add(this->button17);
			this->flowLayoutPanel17->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel17->Location = System::Drawing::Point(663, 181);
			this->flowLayoutPanel17->Name = L"flowLayoutPanel17";
			this->flowLayoutPanel17->Size = System::Drawing::Size(154, 24);
			this->flowLayoutPanel17->TabIndex = 183;
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
			this->button17->TabIndex = 180;
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &LevelFive::ClickBut);
			// 
			// flowLayoutPanel18
			// 
			this->flowLayoutPanel18->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel18->Controls->Add(this->button20);
			this->flowLayoutPanel18->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel18->Location = System::Drawing::Point(639, 393);
			this->flowLayoutPanel18->Name = L"flowLayoutPanel18";
			this->flowLayoutPanel18->Size = System::Drawing::Size(24, 154);
			this->flowLayoutPanel18->TabIndex = 192;
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::Transparent;
			this->button20->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button20.BackgroundImage")));
			this->button20->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button20->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button20->FlatAppearance->BorderSize = 0;
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button20->Location = System::Drawing::Point(3, 3);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(21, 154);
			this->button20->TabIndex = 179;
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &LevelFive::ClickBut);
			// 
			// flowLayoutPanel19
			// 
			this->flowLayoutPanel19->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel19->Controls->Add(this->button22);
			this->flowLayoutPanel19->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel19->Location = System::Drawing::Point(639, 208);
			this->flowLayoutPanel19->Name = L"flowLayoutPanel19";
			this->flowLayoutPanel19->Size = System::Drawing::Size(24, 154);
			this->flowLayoutPanel19->TabIndex = 195;
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::Transparent;
			this->button22->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button22.BackgroundImage")));
			this->button22->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button22->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button22->FlatAppearance->BorderSize = 0;
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button22->Location = System::Drawing::Point(3, 3);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(21, 154);
			this->button22->TabIndex = 179;
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &LevelFive::ClickBut);
			// 
			// flowLayoutPanel20
			// 
			this->flowLayoutPanel20->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel20->Controls->Add(this->button19);
			this->flowLayoutPanel20->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel20->Location = System::Drawing::Point(663, 550);
			this->flowLayoutPanel20->Name = L"flowLayoutPanel20";
			this->flowLayoutPanel20->Size = System::Drawing::Size(154, 24);
			this->flowLayoutPanel20->TabIndex = 199;
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::Transparent;
			this->button19->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button19.BackgroundImage")));
			this->button19->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button19->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button19->FlatAppearance->BorderSize = 0;
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button19->Location = System::Drawing::Point(3, 3);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(154, 21);
			this->button19->TabIndex = 180;
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &LevelFive::ClickBut);
			// 
			// flowLayoutPanel21
			// 
			this->flowLayoutPanel21->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel21->Controls->Add(this->button23);
			this->flowLayoutPanel21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel21->Location = System::Drawing::Point(848, 338);
			this->flowLayoutPanel21->Name = L"flowLayoutPanel21";
			this->flowLayoutPanel21->Size = System::Drawing::Size(154, 24);
			this->flowLayoutPanel21->TabIndex = 182;
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::Color::Transparent;
			this->button23->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button23.BackgroundImage")));
			this->button23->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button23->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button23->FlatAppearance->BorderSize = 0;
			this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button23->Location = System::Drawing::Point(3, 3);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(154, 21);
			this->button23->TabIndex = 180;
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Click += gcnew System::EventHandler(this, &LevelFive::ClickBut);
			// 
			// flowLayoutPanel22
			// 
			this->flowLayoutPanel22->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel22->Controls->Add(this->button24);
			this->flowLayoutPanel22->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel22->Location = System::Drawing::Point(848, 393);
			this->flowLayoutPanel22->Name = L"flowLayoutPanel22";
			this->flowLayoutPanel22->Size = System::Drawing::Size(154, 24);
			this->flowLayoutPanel22->TabIndex = 182;
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::Color::Transparent;
			this->button24->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button24.BackgroundImage")));
			this->button24->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button24->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button24->FlatAppearance->BorderSize = 0;
			this->button24->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button24->Location = System::Drawing::Point(3, 3);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(154, 21);
			this->button24->TabIndex = 180;
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Click += gcnew System::EventHandler(this, &LevelFive::ClickBut);
			// 
			// flowLayoutPanel23
			// 
			this->flowLayoutPanel23->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel23->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel23->Location = System::Drawing::Point(1187, 393);
			this->flowLayoutPanel23->Name = L"flowLayoutPanel23";
			this->flowLayoutPanel23->Size = System::Drawing::Size(24, 154);
			this->flowLayoutPanel23->TabIndex = 186;
			// 
			// flowLayoutPanel24
			// 
			this->flowLayoutPanel24->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel24->Controls->Add(this->button25);
			this->flowLayoutPanel24->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel24->Location = System::Drawing::Point(1032, 366);
			this->flowLayoutPanel24->Name = L"flowLayoutPanel24";
			this->flowLayoutPanel24->Size = System::Drawing::Size(154, 24);
			this->flowLayoutPanel24->TabIndex = 180;
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::Color::Transparent;
			this->button25->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button25.BackgroundImage")));
			this->button25->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button25->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button25->FlatAppearance->BorderSize = 0;
			this->button25->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button25->Location = System::Drawing::Point(3, 3);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(154, 21);
			this->button25->TabIndex = 180;
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &LevelFive::ClickBut);
			// 
			// flowLayoutPanel25
			// 
			this->flowLayoutPanel25->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel25->Controls->Add(this->button36);
			this->flowLayoutPanel25->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel25->Location = System::Drawing::Point(1403, 393);
			this->flowLayoutPanel25->Name = L"flowLayoutPanel25";
			this->flowLayoutPanel25->Size = System::Drawing::Size(24, 154);
			this->flowLayoutPanel25->TabIndex = 187;
			// 
			// button36
			// 
			this->button36->BackColor = System::Drawing::Color::Transparent;
			this->button36->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button36.BackgroundImage")));
			this->button36->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button36->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button36->FlatAppearance->BorderSize = 0;
			this->button36->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button36->Location = System::Drawing::Point(3, 3);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(21, 154);
			this->button36->TabIndex = 179;
			this->button36->UseVisualStyleBackColor = false;
			this->button36->Click += gcnew System::EventHandler(this, &LevelFive::ClickBut);
			// 
			// flowLayoutPanel26
			// 
			this->flowLayoutPanel26->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel26->Controls->Add(this->button28);
			this->flowLayoutPanel26->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel26->Location = System::Drawing::Point(1187, 208);
			this->flowLayoutPanel26->Name = L"flowLayoutPanel26";
			this->flowLayoutPanel26->Size = System::Drawing::Size(24, 154);
			this->flowLayoutPanel26->TabIndex = 188;
			// 
			// button28
			// 
			this->button28->BackColor = System::Drawing::Color::Transparent;
			this->button28->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button28.BackgroundImage")));
			this->button28->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button28->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button28->FlatAppearance->BorderSize = 0;
			this->button28->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button28->Location = System::Drawing::Point(3, 3);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(21, 154);
			this->button28->TabIndex = 179;
			this->button28->UseVisualStyleBackColor = false;
			this->button28->Click += gcnew System::EventHandler(this, &LevelFive::ClickBut);
			// 
			// flowLayoutPanel27
			// 
			this->flowLayoutPanel27->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel27->Controls->Add(this->button30);
			this->flowLayoutPanel27->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel27->Location = System::Drawing::Point(1248, 366);
			this->flowLayoutPanel27->Name = L"flowLayoutPanel27";
			this->flowLayoutPanel27->Size = System::Drawing::Size(154, 24);
			this->flowLayoutPanel27->TabIndex = 182;
			// 
			// button30
			// 
			this->button30->BackColor = System::Drawing::Color::Transparent;
			this->button30->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button30.BackgroundImage")));
			this->button30->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button30->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button30->FlatAppearance->BorderSize = 0;
			this->button30->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button30->Location = System::Drawing::Point(3, 3);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(154, 21);
			this->button30->TabIndex = 180;
			this->button30->Tag = L"1";
			this->button30->UseVisualStyleBackColor = false;
			this->button30->Click += gcnew System::EventHandler(this, &LevelFive::ClickBut);
			// 
			// flowLayoutPanel28
			// 
			this->flowLayoutPanel28->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel28->Controls->Add(this->button26);
			this->flowLayoutPanel28->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel28->Location = System::Drawing::Point(1032, 181);
			this->flowLayoutPanel28->Name = L"flowLayoutPanel28";
			this->flowLayoutPanel28->Size = System::Drawing::Size(154, 24);
			this->flowLayoutPanel28->TabIndex = 185;
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::Color::Transparent;
			this->button26->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button26.BackgroundImage")));
			this->button26->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button26->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button26->FlatAppearance->BorderSize = 0;
			this->button26->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button26->Location = System::Drawing::Point(3, 3);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(154, 21);
			this->button26->TabIndex = 180;
			this->button26->UseVisualStyleBackColor = false;
			this->button26->Click += gcnew System::EventHandler(this, &LevelFive::ClickBut);
			// 
			// flowLayoutPanel29
			// 
			this->flowLayoutPanel29->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel29->Controls->Add(this->button35);
			this->flowLayoutPanel29->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel29->Location = System::Drawing::Point(1403, 208);
			this->flowLayoutPanel29->Name = L"flowLayoutPanel29";
			this->flowLayoutPanel29->Size = System::Drawing::Size(24, 154);
			this->flowLayoutPanel29->TabIndex = 190;
			// 
			// button35
			// 
			this->button35->BackColor = System::Drawing::Color::Transparent;
			this->button35->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button35.BackgroundImage")));
			this->button35->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button35->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button35->FlatAppearance->BorderSize = 0;
			this->button35->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button35->Location = System::Drawing::Point(3, 3);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(21, 154);
			this->button35->TabIndex = 179;
			this->button35->UseVisualStyleBackColor = false;
			this->button35->Click += gcnew System::EventHandler(this, &LevelFive::ClickBut);
			// 
			// flowLayoutPanel30
			// 
			this->flowLayoutPanel30->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel30->Controls->Add(this->button32);
			this->flowLayoutPanel30->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel30->Location = System::Drawing::Point(1248, 181);
			this->flowLayoutPanel30->Name = L"flowLayoutPanel30";
			this->flowLayoutPanel30->Size = System::Drawing::Size(154, 24);
			this->flowLayoutPanel30->TabIndex = 183;
			// 
			// button32
			// 
			this->button32->BackColor = System::Drawing::Color::Transparent;
			this->button32->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button32.BackgroundImage")));
			this->button32->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button32->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button32->FlatAppearance->BorderSize = 0;
			this->button32->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button32->Location = System::Drawing::Point(3, 3);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(154, 21);
			this->button32->TabIndex = 180;
			this->button32->UseVisualStyleBackColor = false;
			this->button32->Click += gcnew System::EventHandler(this, &LevelFive::ClickBut);
			// 
			// flowLayoutPanel32
			// 
			this->flowLayoutPanel32->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel32->Controls->Add(this->button29);
			this->flowLayoutPanel32->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel32->Location = System::Drawing::Point(1008, 393);
			this->flowLayoutPanel32->Name = L"flowLayoutPanel32";
			this->flowLayoutPanel32->Size = System::Drawing::Size(24, 154);
			this->flowLayoutPanel32->TabIndex = 191;
			// 
			// button29
			// 
			this->button29->BackColor = System::Drawing::Color::Transparent;
			this->button29->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button29.BackgroundImage")));
			this->button29->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button29->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button29->FlatAppearance->BorderSize = 0;
			this->button29->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button29->Location = System::Drawing::Point(3, 3);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(21, 154);
			this->button29->TabIndex = 179;
			this->button29->UseVisualStyleBackColor = false;
			this->button29->Click += gcnew System::EventHandler(this, &LevelFive::ClickBut);
			// 
			// flowLayoutPanel33
			// 
			this->flowLayoutPanel33->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel33->Controls->Add(this->button34);
			this->flowLayoutPanel33->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel33->Location = System::Drawing::Point(1224, 393);
			this->flowLayoutPanel33->Name = L"flowLayoutPanel33";
			this->flowLayoutPanel33->Size = System::Drawing::Size(24, 154);
			this->flowLayoutPanel33->TabIndex = 192;
			// 
			// button34
			// 
			this->button34->BackColor = System::Drawing::Color::Transparent;
			this->button34->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button34.BackgroundImage")));
			this->button34->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button34->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button34->FlatAppearance->BorderSize = 0;
			this->button34->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button34->Location = System::Drawing::Point(3, 3);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(21, 154);
			this->button34->TabIndex = 179;
			this->button34->UseVisualStyleBackColor = false;
			this->button34->Click += gcnew System::EventHandler(this, &LevelFive::ClickBut);
			// 
			// flowLayoutPanel34
			// 
			this->flowLayoutPanel34->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel34->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel34->Location = System::Drawing::Point(1008, 208);
			this->flowLayoutPanel34->Name = L"flowLayoutPanel34";
			this->flowLayoutPanel34->Size = System::Drawing::Size(24, 154);
			this->flowLayoutPanel34->TabIndex = 194;
			// 
			// flowLayoutPanel35
			// 
			this->flowLayoutPanel35->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel35->Controls->Add(this->button33);
			this->flowLayoutPanel35->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel35->Location = System::Drawing::Point(1224, 208);
			this->flowLayoutPanel35->Name = L"flowLayoutPanel35";
			this->flowLayoutPanel35->Size = System::Drawing::Size(24, 154);
			this->flowLayoutPanel35->TabIndex = 195;
			// 
			// button33
			// 
			this->button33->BackColor = System::Drawing::Color::Transparent;
			this->button33->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button33.BackgroundImage")));
			this->button33->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button33->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button33->FlatAppearance->BorderSize = 0;
			this->button33->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button33->Location = System::Drawing::Point(3, 3);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(21, 154);
			this->button33->TabIndex = 179;
			this->button33->UseVisualStyleBackColor = false;
			this->button33->Click += gcnew System::EventHandler(this, &LevelFive::ClickBut);
			// 
			// flowLayoutPanel38
			// 
			this->flowLayoutPanel38->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel38->Controls->Add(this->button27);
			this->flowLayoutPanel38->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel38->Location = System::Drawing::Point(1032, 550);
			this->flowLayoutPanel38->Name = L"flowLayoutPanel38";
			this->flowLayoutPanel38->Size = System::Drawing::Size(154, 24);
			this->flowLayoutPanel38->TabIndex = 198;
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::Color::Transparent;
			this->button27->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button27.BackgroundImage")));
			this->button27->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button27->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button27->FlatAppearance->BorderSize = 0;
			this->button27->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button27->Location = System::Drawing::Point(3, 3);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(154, 21);
			this->button27->TabIndex = 180;
			this->button27->UseVisualStyleBackColor = false;
			this->button27->Click += gcnew System::EventHandler(this, &LevelFive::ClickBut);
			// 
			// flowLayoutPanel40
			// 
			this->flowLayoutPanel40->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel40->Controls->Add(this->button31);
			this->flowLayoutPanel40->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel40->Location = System::Drawing::Point(1248, 550);
			this->flowLayoutPanel40->Name = L"flowLayoutPanel40";
			this->flowLayoutPanel40->Size = System::Drawing::Size(154, 24);
			this->flowLayoutPanel40->TabIndex = 199;
			// 
			// button31
			// 
			this->button31->BackColor = System::Drawing::Color::Transparent;
			this->button31->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button31.BackgroundImage")));
			this->button31->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button31->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button31->FlatAppearance->BorderSize = 0;
			this->button31->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button31->Location = System::Drawing::Point(3, 3);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(154, 21);
			this->button31->TabIndex = 180;
			this->button31->UseVisualStyleBackColor = false;
			this->button31->Click += gcnew System::EventHandler(this, &LevelFive::ClickBut);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(254)), static_cast<System::Int32>(static_cast<System::Byte>(242)),
				static_cast<System::Int32>(static_cast<System::Byte>(185)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(-3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1454, 47);
			this->label1->TabIndex = 200;
			this->label1->Text = L"Уберите две спички так, чтобы равенство стало верным.";
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
			this->button_back->Location = System::Drawing::Point(12, 597);
			this->button_back->Name = L"button_back";
			this->button_back->Size = System::Drawing::Size(230, 42);
			this->button_back->TabIndex = 201;
			this->button_back->Text = L"Вернуться";
			this->button_back->UseVisualStyleBackColor = false;
			this->button_back->Click += gcnew System::EventHandler(this, &LevelFive::button_back_Click);
			// 
			// LevelFive
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(209)));
			this->ClientSize = System::Drawing::Size(1452, 675);
			this->Controls->Add(this->button_back);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->flowLayoutPanel20);
			this->Controls->Add(this->flowLayoutPanel40);
			this->Controls->Add(this->flowLayoutPanel13);
			this->Controls->Add(this->flowLayoutPanel38);
			this->Controls->Add(this->flowLayoutPanel12);
			this->Controls->Add(this->flowLayoutPanel19);
			this->Controls->Add(this->flowLayoutPanel35);
			this->Controls->Add(this->flowLayoutPanel6);
			this->Controls->Add(this->flowLayoutPanel34);
			this->Controls->Add(this->flowLayoutPanel39);
			this->Controls->Add(this->flowLayoutPanel18);
			this->Controls->Add(this->flowLayoutPanel33);
			this->Controls->Add(this->flowLayoutPanel5);
			this->Controls->Add(this->flowLayoutPanel32);
			this->Controls->Add(this->flowLayoutPanel9);
			this->Controls->Add(this->flowLayoutPanel17);
			this->Controls->Add(this->flowLayoutPanel30);
			this->Controls->Add(this->flowLayoutPanel4);
			this->Controls->Add(this->flowLayoutPanel11);
			this->Controls->Add(this->flowLayoutPanel16);
			this->Controls->Add(this->flowLayoutPanel29);
			this->Controls->Add(this->flowLayoutPanel3);
			this->Controls->Add(this->flowLayoutPanel28);
			this->Controls->Add(this->flowLayoutPanel37);
			this->Controls->Add(this->flowLayoutPanel22);
			this->Controls->Add(this->flowLayoutPanel21);
			this->Controls->Add(this->flowLayoutPanel15);
			this->Controls->Add(this->flowLayoutPanel27);
			this->Controls->Add(this->flowLayoutPanel7);
			this->Controls->Add(this->flowLayoutPanel2);
			this->Controls->Add(this->flowLayoutPanel10);
			this->Controls->Add(this->flowLayoutPanel26);
			this->Controls->Add(this->flowLayoutPanel14);
			this->Controls->Add(this->flowLayoutPanel25);
			this->Controls->Add(this->flowLayoutPanel36);
			this->Controls->Add(this->flowLayoutPanel24);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->flowLayoutPanel23);
			this->Controls->Add(this->flowLayoutPanel8);
			this->Controls->Add(this->flowLayoutPanel31);
			this->Controls->Add(this->FireDown);
			this->Controls->Add(this->FireUp);
			this->Controls->Add(this->checkRule);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"LevelFive";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"LevelFive";
			this->flowLayoutPanel12->ResumeLayout(false);
			this->flowLayoutPanel39->ResumeLayout(false);
			this->flowLayoutPanel37->ResumeLayout(false);
			this->flowLayoutPanel36->ResumeLayout(false);
			this->flowLayoutPanel8->ResumeLayout(false);
			this->flowLayoutPanel31->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->flowLayoutPanel1->ResumeLayout(false);
			this->flowLayoutPanel4->ResumeLayout(false);
			this->flowLayoutPanel5->ResumeLayout(false);
			this->flowLayoutPanel6->ResumeLayout(false);
			this->flowLayoutPanel13->ResumeLayout(false);
			this->flowLayoutPanel2->ResumeLayout(false);
			this->flowLayoutPanel7->ResumeLayout(false);
			this->flowLayoutPanel10->ResumeLayout(false);
			this->flowLayoutPanel11->ResumeLayout(false);
			this->flowLayoutPanel14->ResumeLayout(false);
			this->flowLayoutPanel15->ResumeLayout(false);
			this->flowLayoutPanel17->ResumeLayout(false);
			this->flowLayoutPanel18->ResumeLayout(false);
			this->flowLayoutPanel19->ResumeLayout(false);
			this->flowLayoutPanel20->ResumeLayout(false);
			this->flowLayoutPanel21->ResumeLayout(false);
			this->flowLayoutPanel22->ResumeLayout(false);
			this->flowLayoutPanel24->ResumeLayout(false);
			this->flowLayoutPanel25->ResumeLayout(false);
			this->flowLayoutPanel26->ResumeLayout(false);
			this->flowLayoutPanel27->ResumeLayout(false);
			this->flowLayoutPanel28->ResumeLayout(false);
			this->flowLayoutPanel29->ResumeLayout(false);
			this->flowLayoutPanel30->ResumeLayout(false);
			this->flowLayoutPanel32->ResumeLayout(false);
			this->flowLayoutPanel33->ResumeLayout(false);
			this->flowLayoutPanel35->ResumeLayout(false);
			this->flowLayoutPanel38->ResumeLayout(false);
			this->flowLayoutPanel40->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int matches = 0;
		int vin = 1;
		cli::array<Button^>^ but_ = gcnew cli::array<Button^>(3);
		String^ tagButton;
		Control^ panelOne;
		Control^ panelTwo;
		Control^ panelThree;
		// Метод для удаления кнопки
		void delete_button(Button^ button);
		void ClickBut(System::Object^ sender, System::EventArgs^ e);
		void ClickPanel(System::Object^ sender, System::EventArgs^ e);
		void Result_Test();
		void back();
		// Метод для создания копии кнопки
		Button^ copy_button(Button^ originalButton);

	private: System::Void button_back_Click(System::Object^ sender, System::EventArgs^ e);
};
}
