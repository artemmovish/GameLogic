#pragma once

namespace GameLogic {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ LevelOne
	/// </summary>
	public ref class LevelOne : public System::Windows::Forms::Form
	{
	public:
		LevelOne(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~LevelOne()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:




















	private: System::Windows::Forms::GroupBox^ groupBox1;





















































	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel3;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel4;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel5;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel6;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel7;
private: System::Windows::Forms::Button^ FireUp;









	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel16;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel17;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel18;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel19;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel20;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel21;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel22;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel23;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel24;

	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel26;




	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel31;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel32;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel33;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel34;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel35;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel36;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel37;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel38;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel39;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel40;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel41;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel42;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel43;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel44;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel45;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel46;




private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel51;
private: System::Windows::Forms::Button^ button17;
private: System::Windows::Forms::Button^ button5;
private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::Button^ button18;
private: System::Windows::Forms::Button^ button19;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::Button^ button6;
private: System::Windows::Forms::Button^ button23;
private: System::Windows::Forms::Button^ button8;
private: System::Windows::Forms::Button^ button21;
private: System::Windows::Forms::Button^ button7;
private: System::Windows::Forms::Button^ button22;
private: System::Windows::Forms::Button^ button12;
private: System::Windows::Forms::Button^ button20;
private: System::Windows::Forms::Button^ button24;
private: System::Windows::Forms::Button^ button10;
private: System::Windows::Forms::Button^ button27;
private: System::Windows::Forms::Button^ button9;
private: System::Windows::Forms::Button^ button16;
private: System::Windows::Forms::Button^ button25;
private: System::Windows::Forms::Button^ button26;
private: System::Windows::Forms::Button^ button29;
private: System::Windows::Forms::Button^ button11;
private: System::Windows::Forms::Button^ button14;
private: System::Windows::Forms::Button^ button13;
private: System::Windows::Forms::Button^ button15;
private: System::Windows::Forms::Button^ button28;
private: System::Windows::Forms::Button^ FireDown;
private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel25;







































	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LevelOne::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->flowLayoutPanel51 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel3 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel4 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel5 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel6 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel7 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->FireUp = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel16 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel17 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel18 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutPanel19 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel20 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel21 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutPanel22 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel23 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel24 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel26 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel31 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutPanel32 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel33 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutPanel34 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel35 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel36 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel37 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutPanel38 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel39 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel40 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel41 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel42 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel43 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutPanel44 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel45 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel46 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->FireDown = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel25 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->groupBox1->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			this->flowLayoutPanel2->SuspendLayout();
			this->flowLayoutPanel3->SuspendLayout();
			this->flowLayoutPanel4->SuspendLayout();
			this->flowLayoutPanel5->SuspendLayout();
			this->flowLayoutPanel6->SuspendLayout();
			this->flowLayoutPanel7->SuspendLayout();
			this->flowLayoutPanel16->SuspendLayout();
			this->flowLayoutPanel17->SuspendLayout();
			this->flowLayoutPanel19->SuspendLayout();
			this->flowLayoutPanel20->SuspendLayout();
			this->flowLayoutPanel22->SuspendLayout();
			this->flowLayoutPanel23->SuspendLayout();
			this->flowLayoutPanel24->SuspendLayout();
			this->flowLayoutPanel26->SuspendLayout();
			this->flowLayoutPanel32->SuspendLayout();
			this->flowLayoutPanel34->SuspendLayout();
			this->flowLayoutPanel35->SuspendLayout();
			this->flowLayoutPanel36->SuspendLayout();
			this->flowLayoutPanel38->SuspendLayout();
			this->flowLayoutPanel39->SuspendLayout();
			this->flowLayoutPanel40->SuspendLayout();
			this->flowLayoutPanel41->SuspendLayout();
			this->flowLayoutPanel42->SuspendLayout();
			this->flowLayoutPanel44->SuspendLayout();
			this->flowLayoutPanel45->SuspendLayout();
			this->flowLayoutPanel46->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->flowLayoutPanel51);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(169, 51);
			this->groupBox1->TabIndex = 14;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"»нвентарь";
			// 
			// flowLayoutPanel51
			// 
			this->flowLayoutPanel51->Dock = System::Windows::Forms::DockStyle::Fill;
			this->flowLayoutPanel51->Location = System::Drawing::Point(3, 26);
			this->flowLayoutPanel51->Name = L"flowLayoutPanel51";
			this->flowLayoutPanel51->Size = System::Drawing::Size(163, 22);
			this->flowLayoutPanel51->TabIndex = 16;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel1->Controls->Add(this->button17);
			this->flowLayoutPanel1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel1->Location = System::Drawing::Point(27, 79);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(154, 24);
			this->flowLayoutPanel1->TabIndex = 15;
			this->flowLayoutPanel1->Click += gcnew System::EventHandler(this, &LevelOne::ClickPanel);
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
			this->button17->TabIndex = 9;
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &LevelOne::ClickBut);
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel2->Controls->Add(this->button5);
			this->flowLayoutPanel2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel2->Location = System::Drawing::Point(3, 106);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Size = System::Drawing::Size(24, 154);
			this->flowLayoutPanel2->TabIndex = 16;
			this->flowLayoutPanel2->Click += gcnew System::EventHandler(this, &LevelOne::ClickPanel);
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
			this->button5->TabIndex = 4;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &LevelOne::ClickBut);
			// 
			// flowLayoutPanel3
			// 
			this->flowLayoutPanel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel3->Controls->Add(this->button3);
			this->flowLayoutPanel3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel3->Location = System::Drawing::Point(185, 106);
			this->flowLayoutPanel3->Name = L"flowLayoutPanel3";
			this->flowLayoutPanel3->Size = System::Drawing::Size(24, 154);
			this->flowLayoutPanel3->TabIndex = 17;
			this->flowLayoutPanel3->Click += gcnew System::EventHandler(this, &LevelOne::ClickPanel);
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
			this->button3->TabIndex = 4;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &LevelOne::ClickBut);
			// 
			// flowLayoutPanel4
			// 
			this->flowLayoutPanel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel4->Controls->Add(this->button18);
			this->flowLayoutPanel4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel4->Location = System::Drawing::Point(27, 263);
			this->flowLayoutPanel4->Name = L"flowLayoutPanel4";
			this->flowLayoutPanel4->Size = System::Drawing::Size(154, 24);
			this->flowLayoutPanel4->TabIndex = 16;
			this->flowLayoutPanel4->Click += gcnew System::EventHandler(this, &LevelOne::ClickPanel);
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
			this->button18->TabIndex = 9;
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &LevelOne::ClickBut);
			// 
			// flowLayoutPanel5
			// 
			this->flowLayoutPanel5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel5->Controls->Add(this->button19);
			this->flowLayoutPanel5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel5->Location = System::Drawing::Point(27, 446);
			this->flowLayoutPanel5->Name = L"flowLayoutPanel5";
			this->flowLayoutPanel5->Size = System::Drawing::Size(154, 24);
			this->flowLayoutPanel5->TabIndex = 19;
			this->flowLayoutPanel5->Click += gcnew System::EventHandler(this, &LevelOne::ClickPanel);
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
			this->button19->TabIndex = 9;
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &LevelOne::ClickBut);
			// 
			// flowLayoutPanel6
			// 
			this->flowLayoutPanel6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel6->Controls->Add(this->button2);
			this->flowLayoutPanel6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel6->Location = System::Drawing::Point(185, 289);
			this->flowLayoutPanel6->Name = L"flowLayoutPanel6";
			this->flowLayoutPanel6->Size = System::Drawing::Size(24, 154);
			this->flowLayoutPanel6->TabIndex = 21;
			this->flowLayoutPanel6->Click += gcnew System::EventHandler(this, &LevelOne::ClickPanel);
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
			this->button2->TabIndex = 4;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &LevelOne::ClickBut);
			// 
			// flowLayoutPanel7
			// 
			this->flowLayoutPanel7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel7->Controls->Add(this->button6);
			this->flowLayoutPanel7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel7->Location = System::Drawing::Point(3, 289);
			this->flowLayoutPanel7->Name = L"flowLayoutPanel7";
			this->flowLayoutPanel7->Size = System::Drawing::Size(24, 154);
			this->flowLayoutPanel7->TabIndex = 20;
			this->flowLayoutPanel7->Click += gcnew System::EventHandler(this, &LevelOne::ClickPanel);
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
			this->button6->TabIndex = 4;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &LevelOne::ClickBut);
			// 
			// FireUp
			// 
			this->FireUp->BackColor = System::Drawing::Color::Transparent;
			this->FireUp->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"FireUp.BackgroundImage")));
			this->FireUp->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->FireUp->Cursor = System::Windows::Forms::Cursors::Hand;
			this->FireUp->FlatAppearance->BorderSize = 0;
			this->FireUp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->FireUp->Location = System::Drawing::Point(253, 667);
			this->FireUp->Name = L"FireUp";
			this->FireUp->Size = System::Drawing::Size(21, 154);
			this->FireUp->TabIndex = 3;
			this->FireUp->UseVisualStyleBackColor = false;
			this->FireUp->Click += gcnew System::EventHandler(this, &LevelOne::ClickBut);
			// 
			// flowLayoutPanel16
			// 
			this->flowLayoutPanel16->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel16->Controls->Add(this->button23);
			this->flowLayoutPanel16->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel16->Location = System::Drawing::Point(403, 446);
			this->flowLayoutPanel16->Name = L"flowLayoutPanel16";
			this->flowLayoutPanel16->Size = System::Drawing::Size(154, 24);
			this->flowLayoutPanel16->TabIndex = 29;
			this->flowLayoutPanel16->Click += gcnew System::EventHandler(this, &LevelOne::ClickPanel);
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
			this->button23->TabIndex = 9;
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Click += gcnew System::EventHandler(this, &LevelOne::ClickBut);
			// 
			// flowLayoutPanel17
			// 
			this->flowLayoutPanel17->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel17->Controls->Add(this->button8);
			this->flowLayoutPanel17->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel17->Location = System::Drawing::Point(561, 289);
			this->flowLayoutPanel17->Name = L"flowLayoutPanel17";
			this->flowLayoutPanel17->Size = System::Drawing::Size(24, 154);
			this->flowLayoutPanel17->TabIndex = 31;
			this->flowLayoutPanel17->Click += gcnew System::EventHandler(this, &LevelOne::ClickPanel);
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
			this->button8->TabIndex = 4;
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &LevelOne::ClickBut);
			// 
			// flowLayoutPanel18
			// 
			this->flowLayoutPanel18->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel18->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel18->Location = System::Drawing::Point(379, 289);
			this->flowLayoutPanel18->Name = L"flowLayoutPanel18";
			this->flowLayoutPanel18->Size = System::Drawing::Size(24, 154);
			this->flowLayoutPanel18->TabIndex = 30;
			this->flowLayoutPanel18->Click += gcnew System::EventHandler(this, &LevelOne::ClickPanel);
			// 
			// flowLayoutPanel19
			// 
			this->flowLayoutPanel19->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel19->Controls->Add(this->button21);
			this->flowLayoutPanel19->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel19->Location = System::Drawing::Point(403, 263);
			this->flowLayoutPanel19->Name = L"flowLayoutPanel19";
			this->flowLayoutPanel19->Size = System::Drawing::Size(154, 24);
			this->flowLayoutPanel19->TabIndex = 24;
			this->flowLayoutPanel19->Click += gcnew System::EventHandler(this, &LevelOne::ClickPanel);
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
			this->button21->Size = System::Drawing::Size(154, 21);
			this->button21->TabIndex = 9;
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &LevelOne::ClickBut);
			// 
			// flowLayoutPanel20
			// 
			this->flowLayoutPanel20->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel20->Controls->Add(this->button7);
			this->flowLayoutPanel20->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel20->Location = System::Drawing::Point(561, 106);
			this->flowLayoutPanel20->Name = L"flowLayoutPanel20";
			this->flowLayoutPanel20->Size = System::Drawing::Size(24, 154);
			this->flowLayoutPanel20->TabIndex = 27;
			this->flowLayoutPanel20->Click += gcnew System::EventHandler(this, &LevelOne::ClickPanel);
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
			this->button7->TabIndex = 4;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &LevelOne::ClickBut);
			// 
			// flowLayoutPanel21
			// 
			this->flowLayoutPanel21->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel21->Location = System::Drawing::Point(379, 106);
			this->flowLayoutPanel21->Name = L"flowLayoutPanel21";
			this->flowLayoutPanel21->Size = System::Drawing::Size(24, 154);
			this->flowLayoutPanel21->TabIndex = 25;
			this->flowLayoutPanel21->Click += gcnew System::EventHandler(this, &LevelOne::ClickPanel);
			// 
			// flowLayoutPanel22
			// 
			this->flowLayoutPanel22->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel22->Controls->Add(this->button22);
			this->flowLayoutPanel22->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel22->Location = System::Drawing::Point(403, 79);
			this->flowLayoutPanel22->Name = L"flowLayoutPanel22";
			this->flowLayoutPanel22->Size = System::Drawing::Size(154, 24);
			this->flowLayoutPanel22->TabIndex = 23;
			this->flowLayoutPanel22->Click += gcnew System::EventHandler(this, &LevelOne::ClickPanel);
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
			this->button22->Size = System::Drawing::Size(154, 21);
			this->button22->TabIndex = 9;
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &LevelOne::ClickBut);
			// 
			// flowLayoutPanel23
			// 
			this->flowLayoutPanel23->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel23->Controls->Add(this->button12);
			this->flowLayoutPanel23->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel23->Location = System::Drawing::Point(286, 198);
			this->flowLayoutPanel23->Name = L"flowLayoutPanel23";
			this->flowLayoutPanel23->Size = System::Drawing::Size(24, 154);
			this->flowLayoutPanel23->TabIndex = 35;
			this->flowLayoutPanel23->Click += gcnew System::EventHandler(this, &LevelOne::ClickPanel);
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
			this->button12->TabIndex = 4;
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &LevelOne::ClickBut);
			// 
			// flowLayoutPanel24
			// 
			this->flowLayoutPanel24->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel24->Controls->Add(this->button20);
			this->flowLayoutPanel24->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel24->Location = System::Drawing::Point(219, 263);
			this->flowLayoutPanel24->Name = L"flowLayoutPanel24";
			this->flowLayoutPanel24->Size = System::Drawing::Size(154, 24);
			this->flowLayoutPanel24->TabIndex = 34;
			this->flowLayoutPanel24->Click += gcnew System::EventHandler(this, &LevelOne::ClickPanel);
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
			this->button20->Size = System::Drawing::Size(154, 21);
			this->button20->TabIndex = 9;
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &LevelOne::ClickBut);
			// 
			// flowLayoutPanel26
			// 
			this->flowLayoutPanel26->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel26->Controls->Add(this->button24);
			this->flowLayoutPanel26->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel26->Location = System::Drawing::Point(588, 263);
			this->flowLayoutPanel26->Name = L"flowLayoutPanel26";
			this->flowLayoutPanel26->Size = System::Drawing::Size(154, 24);
			this->flowLayoutPanel26->TabIndex = 36;
			this->flowLayoutPanel26->Click += gcnew System::EventHandler(this, &LevelOne::ClickPanel);
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
			this->button24->TabIndex = 9;
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Click += gcnew System::EventHandler(this, &LevelOne::ClickBut);
			// 
			// flowLayoutPanel31
			// 
			this->flowLayoutPanel31->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel31->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel31->Location = System::Drawing::Point(771, 446);
			this->flowLayoutPanel31->Name = L"flowLayoutPanel31";
			this->flowLayoutPanel31->Size = System::Drawing::Size(154, 24);
			this->flowLayoutPanel31->TabIndex = 44;
			this->flowLayoutPanel31->Click += gcnew System::EventHandler(this, &LevelOne::ClickPanel);
			// 
			// flowLayoutPanel32
			// 
			this->flowLayoutPanel32->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel32->Controls->Add(this->button10);
			this->flowLayoutPanel32->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel32->Location = System::Drawing::Point(929, 289);
			this->flowLayoutPanel32->Name = L"flowLayoutPanel32";
			this->flowLayoutPanel32->Size = System::Drawing::Size(24, 154);
			this->flowLayoutPanel32->TabIndex = 46;
			this->flowLayoutPanel32->Click += gcnew System::EventHandler(this, &LevelOne::ClickPanel);
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
			this->button10->Size = System::Drawing::Size(21, 154);
			this->button10->TabIndex = 4;
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &LevelOne::ClickBut);
			// 
			// flowLayoutPanel33
			// 
			this->flowLayoutPanel33->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel33->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel33->Location = System::Drawing::Point(747, 289);
			this->flowLayoutPanel33->Name = L"flowLayoutPanel33";
			this->flowLayoutPanel33->Size = System::Drawing::Size(24, 154);
			this->flowLayoutPanel33->TabIndex = 45;
			this->flowLayoutPanel33->Click += gcnew System::EventHandler(this, &LevelOne::ClickPanel);
			// 
			// flowLayoutPanel34
			// 
			this->flowLayoutPanel34->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel34->Controls->Add(this->button27);
			this->flowLayoutPanel34->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel34->Location = System::Drawing::Point(771, 263);
			this->flowLayoutPanel34->Name = L"flowLayoutPanel34";
			this->flowLayoutPanel34->Size = System::Drawing::Size(154, 24);
			this->flowLayoutPanel34->TabIndex = 39;
			this->flowLayoutPanel34->Click += gcnew System::EventHandler(this, &LevelOne::ClickPanel);
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
			this->button27->TabIndex = 9;
			this->button27->UseVisualStyleBackColor = false;
			this->button27->Click += gcnew System::EventHandler(this, &LevelOne::ClickBut);
			// 
			// flowLayoutPanel35
			// 
			this->flowLayoutPanel35->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel35->Controls->Add(this->button9);
			this->flowLayoutPanel35->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel35->Location = System::Drawing::Point(929, 106);
			this->flowLayoutPanel35->Name = L"flowLayoutPanel35";
			this->flowLayoutPanel35->Size = System::Drawing::Size(24, 154);
			this->flowLayoutPanel35->TabIndex = 42;
			this->flowLayoutPanel35->Click += gcnew System::EventHandler(this, &LevelOne::ClickPanel);
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
			this->button9->TabIndex = 4;
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &LevelOne::ClickBut);
			// 
			// flowLayoutPanel36
			// 
			this->flowLayoutPanel36->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel36->Controls->Add(this->button16);
			this->flowLayoutPanel36->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel36->Location = System::Drawing::Point(747, 106);
			this->flowLayoutPanel36->Name = L"flowLayoutPanel36";
			this->flowLayoutPanel36->Size = System::Drawing::Size(24, 154);
			this->flowLayoutPanel36->TabIndex = 40;
			this->flowLayoutPanel36->Click += gcnew System::EventHandler(this, &LevelOne::ClickPanel);
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
			this->button16->TabIndex = 4;
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &LevelOne::ClickBut);
			// 
			// flowLayoutPanel37
			// 
			this->flowLayoutPanel37->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel37->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel37->Location = System::Drawing::Point(771, 79);
			this->flowLayoutPanel37->Name = L"flowLayoutPanel37";
			this->flowLayoutPanel37->Size = System::Drawing::Size(154, 24);
			this->flowLayoutPanel37->TabIndex = 38;
			this->flowLayoutPanel37->Click += gcnew System::EventHandler(this, &LevelOne::ClickPanel);
			// 
			// flowLayoutPanel38
			// 
			this->flowLayoutPanel38->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel38->Controls->Add(this->button25);
			this->flowLayoutPanel38->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel38->Location = System::Drawing::Point(956, 239);
			this->flowLayoutPanel38->Name = L"flowLayoutPanel38";
			this->flowLayoutPanel38->Size = System::Drawing::Size(154, 24);
			this->flowLayoutPanel38->TabIndex = 49;
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
			this->button25->TabIndex = 9;
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &LevelOne::ClickBut);
			// 
			// flowLayoutPanel39
			// 
			this->flowLayoutPanel39->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel39->Controls->Add(this->button26);
			this->flowLayoutPanel39->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel39->Location = System::Drawing::Point(956, 289);
			this->flowLayoutPanel39->Name = L"flowLayoutPanel39";
			this->flowLayoutPanel39->Size = System::Drawing::Size(154, 24);
			this->flowLayoutPanel39->TabIndex = 50;
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
			this->button26->TabIndex = 9;
			this->button26->UseVisualStyleBackColor = false;
			this->button26->Click += gcnew System::EventHandler(this, &LevelOne::ClickBut);
			// 
			// flowLayoutPanel40
			// 
			this->flowLayoutPanel40->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel40->Controls->Add(this->button29);
			this->flowLayoutPanel40->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel40->Location = System::Drawing::Point(1143, 79);
			this->flowLayoutPanel40->Name = L"flowLayoutPanel40";
			this->flowLayoutPanel40->Size = System::Drawing::Size(154, 24);
			this->flowLayoutPanel40->TabIndex = 38;
			this->flowLayoutPanel40->Click += gcnew System::EventHandler(this, &LevelOne::ClickPanel);
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
			this->button29->Size = System::Drawing::Size(154, 21);
			this->button29->TabIndex = 9;
			this->button29->UseVisualStyleBackColor = false;
			this->button29->Click += gcnew System::EventHandler(this, &LevelOne::ClickBut);
			// 
			// flowLayoutPanel41
			// 
			this->flowLayoutPanel41->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel41->Controls->Add(this->button11);
			this->flowLayoutPanel41->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel41->Location = System::Drawing::Point(1119, 106);
			this->flowLayoutPanel41->Name = L"flowLayoutPanel41";
			this->flowLayoutPanel41->Size = System::Drawing::Size(24, 154);
			this->flowLayoutPanel41->TabIndex = 40;
			this->flowLayoutPanel41->Click += gcnew System::EventHandler(this, &LevelOne::ClickPanel);
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
			this->button11->TabIndex = 4;
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &LevelOne::ClickBut);
			// 
			// flowLayoutPanel42
			// 
			this->flowLayoutPanel42->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel42->Controls->Add(this->button14);
			this->flowLayoutPanel42->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel42->Location = System::Drawing::Point(1301, 106);
			this->flowLayoutPanel42->Name = L"flowLayoutPanel42";
			this->flowLayoutPanel42->Size = System::Drawing::Size(24, 154);
			this->flowLayoutPanel42->TabIndex = 42;
			this->flowLayoutPanel42->Click += gcnew System::EventHandler(this, &LevelOne::ClickPanel);
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
			this->button14->Size = System::Drawing::Size(21, 154);
			this->button14->TabIndex = 4;
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &LevelOne::ClickBut);
			// 
			// flowLayoutPanel43
			// 
			this->flowLayoutPanel43->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel43->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel43->Location = System::Drawing::Point(1143, 263);
			this->flowLayoutPanel43->Name = L"flowLayoutPanel43";
			this->flowLayoutPanel43->Size = System::Drawing::Size(154, 24);
			this->flowLayoutPanel43->TabIndex = 39;
			this->flowLayoutPanel43->Click += gcnew System::EventHandler(this, &LevelOne::ClickPanel);
			// 
			// flowLayoutPanel44
			// 
			this->flowLayoutPanel44->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel44->Controls->Add(this->button13);
			this->flowLayoutPanel44->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel44->Location = System::Drawing::Point(1119, 289);
			this->flowLayoutPanel44->Name = L"flowLayoutPanel44";
			this->flowLayoutPanel44->Size = System::Drawing::Size(24, 154);
			this->flowLayoutPanel44->TabIndex = 45;
			this->flowLayoutPanel44->Click += gcnew System::EventHandler(this, &LevelOne::ClickPanel);
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
			this->button13->TabIndex = 4;
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &LevelOne::ClickBut);
			// 
			// flowLayoutPanel45
			// 
			this->flowLayoutPanel45->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel45->Controls->Add(this->button15);
			this->flowLayoutPanel45->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel45->Location = System::Drawing::Point(1301, 289);
			this->flowLayoutPanel45->Name = L"flowLayoutPanel45";
			this->flowLayoutPanel45->Size = System::Drawing::Size(24, 154);
			this->flowLayoutPanel45->TabIndex = 46;
			this->flowLayoutPanel45->Click += gcnew System::EventHandler(this, &LevelOne::ClickPanel);
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
			this->button15->TabIndex = 4;
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &LevelOne::ClickBut);
			// 
			// flowLayoutPanel46
			// 
			this->flowLayoutPanel46->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel46->Controls->Add(this->button28);
			this->flowLayoutPanel46->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel46->Location = System::Drawing::Point(1143, 446);
			this->flowLayoutPanel46->Name = L"flowLayoutPanel46";
			this->flowLayoutPanel46->Size = System::Drawing::Size(154, 24);
			this->flowLayoutPanel46->TabIndex = 44;
			this->flowLayoutPanel46->Click += gcnew System::EventHandler(this, &LevelOne::ClickPanel);
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
			this->button28->Size = System::Drawing::Size(154, 21);
			this->button28->TabIndex = 9;
			this->button28->UseVisualStyleBackColor = false;
			this->button28->Click += gcnew System::EventHandler(this, &LevelOne::ClickBut);
			// 
			// FireDown
			// 
			this->FireDown->BackColor = System::Drawing::Color::Transparent;
			this->FireDown->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"FireDown.BackgroundImage")));
			this->FireDown->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->FireDown->Cursor = System::Windows::Forms::Cursors::Hand;
			this->FireDown->FlatAppearance->BorderSize = 0;
			this->FireDown->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->FireDown->Location = System::Drawing::Point(280, 724);
			this->FireDown->Name = L"FireDown";
			this->FireDown->Size = System::Drawing::Size(154, 21);
			this->FireDown->TabIndex = 51;
			this->FireDown->UseVisualStyleBackColor = false;
			this->FireDown->Click += gcnew System::EventHandler(this, &LevelOne::ClickBut);
			// 
			// flowLayoutPanel25
			// 
			this->flowLayoutPanel25->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel25->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel25->Location = System::Drawing::Point(655, 198);
			this->flowLayoutPanel25->Name = L"flowLayoutPanel25";
			this->flowLayoutPanel25->Size = System::Drawing::Size(24, 154);
			this->flowLayoutPanel25->TabIndex = 37;
			this->flowLayoutPanel25->Click += gcnew System::EventHandler(this, &LevelOne::ClickPanel);
			// 
			// LevelOne
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1335, 494);
			this->Controls->Add(this->FireDown);
			this->Controls->Add(this->flowLayoutPanel39);
			this->Controls->Add(this->flowLayoutPanel38);
			this->Controls->Add(this->flowLayoutPanel46);
			this->Controls->Add(this->flowLayoutPanel31);
			this->Controls->Add(this->flowLayoutPanel45);
			this->Controls->Add(this->flowLayoutPanel32);
			this->Controls->Add(this->flowLayoutPanel44);
			this->Controls->Add(this->flowLayoutPanel33);
			this->Controls->Add(this->flowLayoutPanel43);
			this->Controls->Add(this->flowLayoutPanel34);
			this->Controls->Add(this->flowLayoutPanel42);
			this->Controls->Add(this->flowLayoutPanel35);
			this->Controls->Add(this->flowLayoutPanel41);
			this->Controls->Add(this->flowLayoutPanel36);
			this->Controls->Add(this->flowLayoutPanel40);
			this->Controls->Add(this->flowLayoutPanel37);
			this->Controls->Add(this->flowLayoutPanel25);
			this->Controls->Add(this->flowLayoutPanel26);
			this->Controls->Add(this->flowLayoutPanel23);
			this->Controls->Add(this->flowLayoutPanel24);
			this->Controls->Add(this->flowLayoutPanel16);
			this->Controls->Add(this->flowLayoutPanel17);
			this->Controls->Add(this->flowLayoutPanel18);
			this->Controls->Add(this->flowLayoutPanel19);
			this->Controls->Add(this->flowLayoutPanel20);
			this->Controls->Add(this->flowLayoutPanel21);
			this->Controls->Add(this->flowLayoutPanel22);
			this->Controls->Add(this->FireUp);
			this->Controls->Add(this->flowLayoutPanel5);
			this->Controls->Add(this->flowLayoutPanel6);
			this->Controls->Add(this->flowLayoutPanel7);
			this->Controls->Add(this->flowLayoutPanel4);
			this->Controls->Add(this->flowLayoutPanel3);
			this->Controls->Add(this->flowLayoutPanel2);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"LevelOne";
			this->Text = L"LevelOne";
			this->groupBox1->ResumeLayout(false);
			this->flowLayoutPanel1->ResumeLayout(false);
			this->flowLayoutPanel2->ResumeLayout(false);
			this->flowLayoutPanel3->ResumeLayout(false);
			this->flowLayoutPanel4->ResumeLayout(false);
			this->flowLayoutPanel5->ResumeLayout(false);
			this->flowLayoutPanel6->ResumeLayout(false);
			this->flowLayoutPanel7->ResumeLayout(false);
			this->flowLayoutPanel16->ResumeLayout(false);
			this->flowLayoutPanel17->ResumeLayout(false);
			this->flowLayoutPanel19->ResumeLayout(false);
			this->flowLayoutPanel20->ResumeLayout(false);
			this->flowLayoutPanel22->ResumeLayout(false);
			this->flowLayoutPanel23->ResumeLayout(false);
			this->flowLayoutPanel24->ResumeLayout(false);
			this->flowLayoutPanel26->ResumeLayout(false);
			this->flowLayoutPanel32->ResumeLayout(false);
			this->flowLayoutPanel34->ResumeLayout(false);
			this->flowLayoutPanel35->ResumeLayout(false);
			this->flowLayoutPanel36->ResumeLayout(false);
			this->flowLayoutPanel38->ResumeLayout(false);
			this->flowLayoutPanel39->ResumeLayout(false);
			this->flowLayoutPanel40->ResumeLayout(false);
			this->flowLayoutPanel41->ResumeLayout(false);
			this->flowLayoutPanel42->ResumeLayout(false);
			this->flowLayoutPanel44->ResumeLayout(false);
			this->flowLayoutPanel45->ResumeLayout(false);
			this->flowLayoutPanel46->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		int matches = 0;
		// ћетод дл€ удалени€ кнопки
		void delete_button(Button^ button);
		void ClickBut(System::Object^ sender, System::EventArgs^ e);
		void ClickPanel(System::Object^ sender, System::EventArgs^ e);
		void Result_Test();
		// ћетод дл€ создани€ копии кнопки
		Button^ copy_button(Button^ originalButton);
};
}
