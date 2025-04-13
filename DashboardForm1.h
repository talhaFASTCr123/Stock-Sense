#pragma once

namespace inventoryManagementSystem {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class DashboardForm1 : public System::Windows::Forms::Form
	{
	public:
		DashboardForm1(void);

	protected:
		~DashboardForm1()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
	System::ComponentModel::Container^ components;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Label^ label1;



	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::PictureBox^ toggleOff;

	private: System::Windows::Forms::PictureBox^ toggleOn;



		   System::Windows::Forms::Button^ currentlyActiveButton;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(DashboardForm1::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->toggleOff = (gcnew System::Windows::Forms::PictureBox());
			this->toggleOn = (gcnew System::Windows::Forms::PictureBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->toggleOff))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->toggleOn))->BeginInit();
			this->panel5->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->toggleOff);
			this->panel1->Controls->Add(this->toggleOn);
			this->panel1->Controls->Add(this->panel5);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1286, 752);
			this->panel1->TabIndex = 0;
			// 
			// toggleOff
			// 
			this->toggleOff->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toggleOff.Image")));
			this->toggleOff->Location = System::Drawing::Point(1286, 150);
			this->toggleOff->Name = L"toggleOff";
			this->toggleOff->Size = System::Drawing::Size(100, 50);
			this->toggleOff->TabIndex = 14;
			this->toggleOff->TabStop = false;
			// 
			// toggleOn
			// 
			this->toggleOn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toggleOn.Image")));
			this->toggleOn->Location = System::Drawing::Point(1286, 85);
			this->toggleOn->Name = L"toggleOn";
			this->toggleOn->Size = System::Drawing::Size(100, 50);
			this->toggleOn->TabIndex = 13;
			this->toggleOn->TabStop = false;
			// 
			// panel5
			// 
			this->panel5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel5.BackgroundImage")));
			this->panel5->Controls->Add(this->button19);
			this->panel5->Controls->Add(this->button18);
			this->panel5->Controls->Add(this->button17);
			this->panel5->Controls->Add(this->button16);
			this->panel5->Controls->Add(this->button15);
			this->panel5->Location = System::Drawing::Point(529, 287);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(229, 178);
			this->panel5->TabIndex = 12;
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::Transparent;
			this->button19->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button19.BackgroundImage")));
			this->button19->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button19->FlatAppearance->BorderSize = 0;
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button19->Font = (gcnew System::Drawing::Font(L"LEMON MILK", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->Location = System::Drawing::Point(836, 552);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(100, 82);
			this->button19->TabIndex = 4;
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &DashboardForm1::button19_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::Transparent;
			this->button18->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button18.BackgroundImage")));
			this->button18->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button18->FlatAppearance->BorderSize = 0;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button18->Font = (gcnew System::Drawing::Font(L"LEMON MILK", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->Location = System::Drawing::Point(836, 473);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(100, 82);
			this->button18->TabIndex = 3;
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &DashboardForm1::button18_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::Transparent;
			this->button17->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button17.BackgroundImage")));
			this->button17->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button17->FlatAppearance->BorderSize = 0;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->Font = (gcnew System::Drawing::Font(L"LEMON MILK", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->Location = System::Drawing::Point(836, 394);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(100, 82);
			this->button17->TabIndex = 2;
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &DashboardForm1::button17_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::Transparent;
			this->button16->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button16.BackgroundImage")));
			this->button16->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button16->FlatAppearance->BorderSize = 0;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Font = (gcnew System::Drawing::Font(L"LEMON MILK", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(836, 308);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(100, 82);
			this->button16->TabIndex = 1;
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &DashboardForm1::button16_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::Transparent;
			this->button15->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button15.BackgroundImage")));
			this->button15->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button15->FlatAppearance->BorderSize = 0;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"LEMON MILK", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(836, 227);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(100, 82);
			this->button15->TabIndex = 0;
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &DashboardForm1::button15_Click);
			// 
			// panel4
			// 
			this->panel4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel4.BackgroundImage")));
			this->panel4->Controls->Add(this->button14);
			this->panel4->Controls->Add(this->button13);
			this->panel4->Controls->Add(this->button12);
			this->panel4->Controls->Add(this->button11);
			this->panel4->Controls->Add(this->label13);
			this->panel4->Controls->Add(this->label12);
			this->panel4->Controls->Add(this->label11);
			this->panel4->Controls->Add(this->label10);
			this->panel4->Controls->Add(this->button10);
			this->panel4->Location = System::Drawing::Point(428, 545);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(59, 93);
			this->panel4->TabIndex = 10;
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::Transparent;
			this->button14->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button14->FlatAppearance->BorderSize = 0;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Location = System::Drawing::Point(947, 616);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(22, 27);
			this->button14->TabIndex = 8;
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &DashboardForm1::button14_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::Transparent;
			this->button13->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button13->FlatAppearance->BorderSize = 0;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Location = System::Drawing::Point(948, 494);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(22, 27);
			this->button13->TabIndex = 7;
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &DashboardForm1::button14_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::Transparent;
			this->button12->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button12->FlatAppearance->BorderSize = 0;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Location = System::Drawing::Point(948, 370);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(22, 27);
			this->button12->TabIndex = 6;
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &DashboardForm1::button12_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::Transparent;
			this->button11->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button11->FlatAppearance->BorderSize = 0;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Location = System::Drawing::Point(947, 245);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(22, 27);
			this->button11->TabIndex = 5;
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &DashboardForm1::button11_Click);
			// 
			// label13
			// 
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label13->Font = (gcnew System::Drawing::Font(L"LEMON MILK", 10.8F, System::Drawing::FontStyle::Bold));
			this->label13->ForeColor = System::Drawing::Color::Black;
			this->label13->Location = System::Drawing::Point(546, 611);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(387, 74);
			this->label13->TabIndex = 4;
			this->label13->Text = L"sadasdasdasadklsadajaslkjasklfjklkljaskldakljkljfaja";
			// 
			// label12
			// 
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label12->Font = (gcnew System::Drawing::Font(L"LEMON MILK", 10.8F, System::Drawing::FontStyle::Bold));
			this->label12->ForeColor = System::Drawing::Color::Black;
			this->label12->Location = System::Drawing::Point(546, 488);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(387, 74);
			this->label12->TabIndex = 3;
			this->label12->Text = L"sadasdasdasadklsadajaslkjasklfjklkljaskldakljkljfaja";
			// 
			// label11
			// 
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label11->Font = (gcnew System::Drawing::Font(L"LEMON MILK", 10.8F, System::Drawing::FontStyle::Bold));
			this->label11->ForeColor = System::Drawing::Color::Black;
			this->label11->Location = System::Drawing::Point(546, 362);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(387, 74);
			this->label11->TabIndex = 2;
			this->label11->Text = L"sadasdasdasadklsadajaslkjasklfjklkljaskldakljkljfaja";
			// 
			// label10
			// 
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label10->Font = (gcnew System::Drawing::Font(L"LEMON MILK", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Black;
			this->label10->Location = System::Drawing::Point(546, 242);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(387, 74);
			this->label10->TabIndex = 1;
			this->label10->Text = L"HOW DO I ADD A NEW PRODUCT TO INVENTORY\?";
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::Transparent;
			this->button10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button10->FlatAppearance->BorderSize = 0;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Poppins SemiBold", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::Color::White;
			this->button10->Location = System::Drawing::Point(49, 414);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(383, 47);
			this->button10->TabIndex = 0;
			this->button10->Text = L"button10";
			this->button10->UseVisualStyleBackColor = false;
			// 
			// panel3
			// 
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->Controls->Add(this->label9);
			this->panel3->Controls->Add(this->label8);
			this->panel3->Controls->Add(this->label7);
			this->panel3->Controls->Add(this->label6);
			this->panel3->Controls->Add(this->label5);
			this->panel3->Controls->Add(this->label4);
			this->panel3->Controls->Add(this->label3);
			this->panel3->Controls->Add(this->label2);
			this->panel3->Location = System::Drawing::Point(334, 413);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(65, 93);
			this->panel3->TabIndex = 4;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label9->Font = (gcnew System::Drawing::Font(L"LEMON MILK", 4, System::Drawing::FontStyle::Bold));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(951, 145);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(21, 10);
			this->label9->TabIndex = 7;
			this->label9->Text = L"20%";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label8->Font = (gcnew System::Drawing::Font(L"LEMON MILK", 4, System::Drawing::FontStyle::Bold));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(621, 145);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(21, 10);
			this->label8->TabIndex = 6;
			this->label8->Text = L"20%";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label7->Font = (gcnew System::Drawing::Font(L"LEMON MILK", 4, System::Drawing::FontStyle::Bold));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(269, 145);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(21, 10);
			this->label7->TabIndex = 5;
			this->label7->Text = L"20%";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label6->Font = (gcnew System::Drawing::Font(L"LEMON MILK", 5.5F, System::Drawing::FontStyle::Bold));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(574, 413);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(41, 14);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Total";
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label5->Font = (gcnew System::Drawing::Font(L"LEMON MILK", 14.2F, System::Drawing::FontStyle::Bold));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(398, 402);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(170, 34);
			this->label5->TabIndex = 3;
			this->label5->Text = L"100,000,00";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label4->Font = (gcnew System::Drawing::Font(L"LEMON MILK", 14.2F, System::Drawing::FontStyle::Bold));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(822, 208);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(161, 34);
			this->label4->TabIndex = 2;
			this->label4->Text = L"100,000,000";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label3->Font = (gcnew System::Drawing::Font(L"LEMON MILK", 14.2F, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(479, 206);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(171, 40);
			this->label3->TabIndex = 1;
			this->label3->Text = L"100,000,000";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"LEMON MILK", 16.2F, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(99, 203);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(206, 39);
			this->label2->TabIndex = 0;
			this->label2->Text = L"100,000,000";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"LEMON MILK", 40.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->label1->Location = System::Drawing::Point(559, 326);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(375, 101);
			this->label1->TabIndex = 2;
			this->label1->Text = L"MUSTAFA";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->Controls->Add(this->button8);
			this->panel2->Controls->Add(this->button9);
			this->panel2->Controls->Add(this->button6);
			this->panel2->Controls->Add(this->button7);
			this->panel2->Controls->Add(this->button5);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->button4);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(257, 752);
			this->panel2->TabIndex = 0;
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Black;
			this->button8->Cursor = System::Windows::Forms::Cursors::Cross;
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"LEMON MILK", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::White;
			this->button8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.Image")));
			this->button8->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button8->Location = System::Drawing::Point(0, 646);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(257, 32);
			this->button8->TabIndex = 8;
			this->button8->Text = L"LOGOUT";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &DashboardForm1::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Black;
			this->button9->Cursor = System::Windows::Forms::Cursors::Cross;
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"LEMON MILK", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::White;
			this->button9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button9.Image")));
			this->button9->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button9->Location = System::Drawing::Point(0, 698);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(257, 32);
			this->button9->TabIndex = 7;
			this->button9->Text = L"HELP";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &DashboardForm1::button9_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Black;
			this->button6->Cursor = System::Windows::Forms::Cursors::Cross;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"LEMON MILK", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.Image")));
			this->button6->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button6->Location = System::Drawing::Point(0, 436);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(257, 32);
			this->button6->TabIndex = 6;
			this->button6->Text = L"REVIEWS";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &DashboardForm1::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Black;
			this->button7->Cursor = System::Windows::Forms::Cursors::Cross;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"LEMON MILK", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::White;
			this->button7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.Image")));
			this->button7->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button7->Location = System::Drawing::Point(0, 486);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(257, 32);
			this->button7->TabIndex = 5;
			this->button7->Text = L"SETTINGS";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &DashboardForm1::button7_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Black;
			this->button5->Cursor = System::Windows::Forms::Cursors::Cross;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"LEMON MILK", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.Image")));
			this->button5->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button5->Location = System::Drawing::Point(0, 309);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(257, 32);
			this->button5->TabIndex = 4;
			this->button5->Text = L"USERS";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &DashboardForm1::button5_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Black;
			this->button3->Cursor = System::Windows::Forms::Cursors::Cross;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"LEMON MILK", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button3->Location = System::Drawing::Point(0, 221);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(257, 32);
			this->button3->TabIndex = 3;
			this->button3->Text = L"REPORTS";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &DashboardForm1::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Black;
			this->button4->Cursor = System::Windows::Forms::Cursors::Cross;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"LEMON MILK", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			this->button4->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button4->Location = System::Drawing::Point(0, 265);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(257, 32);
			this->button4->TabIndex = 2;
			this->button4->Text = L"INVENTORY";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &DashboardForm1::button4_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Black;
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button2->Cursor = System::Windows::Forms::Cursors::Cross;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"LEMON MILK", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->Location = System::Drawing::Point(0, 177);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(257, 32);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Analytics";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &DashboardForm1::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Black;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button1->Cursor = System::Windows::Forms::Cursors::Cross;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"LEMON MILK", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->Location = System::Drawing::Point(0, 133);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(257, 29);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Dashboard";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &DashboardForm1::button1_Click);
			// 
			// DashboardForm1
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->ClientSize = System::Drawing::Size(1286, 752);
			this->Controls->Add(this->panel1);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"DashboardForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Stock Sense Dashboard";
			this->Load += gcnew System::EventHandler(this, &DashboardForm1::DashboardForm1_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->toggleOff))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->toggleOn))->EndInit();
			this->panel5->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	String^ email = "talhasbzzz@gmail.com";
	bool toggle15 = false;
	bool toggle16 = false;
	bool toggle17 = false;
	bool toggle18 = false;
	bool toggle19 = false;

		
	private: System::Void DashboardForm1_Load(System::Object^ sender, System::EventArgs^ e) {
		// Placeholder for form load logic
		label1->Text = "TALHA";
		label1->Left = ((this->ClientSize.Width - label1->Width) / 2) + panel2->Width / 3;
		button10->FlatAppearance->MouseOverBackColor = button10->BackColor;
		button10->FlatAppearance->MouseDownBackColor = button10->BackColor;
		button10->Text = email;

		label10->Text = "HOW DO I ADD A NEW PRODUCT TO INVENTORY?";
		label10->Tag = "(A)  Go to Inventory > Add Product.";

		label11->Text = "WHAT HAPPENS WHEN AN ITEM GOES OUT OF STOCK?";
		label11->Tag = "(A) You will receive a low stock alert in the Reports section.";

		label12->Text = "HOW DO I GENERATE MONTHLY SALES AND STOCK REPORTS?";
		label12->Tag = "(A) Use the Reports tab.";

		label13->Text = "WHAT IS THE MAXIMUM TEAM LIMIT?";
		label13->Tag = "(A) Up to 10 members.";

		button11->FlatAppearance->MouseOverBackColor = button11->BackColor;
		button11->FlatAppearance->MouseDownBackColor = button11->BackColor;
		button12->FlatAppearance->MouseOverBackColor = button12->BackColor;
		button12->FlatAppearance->MouseDownBackColor = button12->BackColor;
		button13->FlatAppearance->MouseOverBackColor = button13->BackColor;
		button13->FlatAppearance->MouseDownBackColor = button13->BackColor;
		button14->FlatAppearance->MouseOverBackColor = button14->BackColor;
		button14->FlatAppearance->MouseDownBackColor = button14->BackColor;



		panel3->Visible = false;
		panel4->Visible = false;
		panel5->Visible = false;
		//panel6->Visible = false;
		//panel7->Visible = false;
		//panel8->Visible = false;
		//panel9->Visible = false;
		//panel10->Visible = false;
	}

	// This is specifically to toggle buttons (I use toggleSwitch(buttonName) in the button click events))
	void ToggleSwitch(Button^ btn, bool% toggleFlag)
	{
		// Use a picture box and then hide it.. but use the image in the picturebox
		Image^ img = toggleFlag ? toggleOff->Image : toggleOn->Image;

		if (img != nullptr) {
			btn->BackgroundImage = img;
			btn->FlatStyle = FlatStyle::Flat;
			btn->FlatAppearance->BorderSize = 0;
			btn->BackColor = Color::Transparent;
		}
		else {
			MessageBox::Show("Toggle image not found!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		toggleFlag = !toggleFlag;
	}


	// This is specifically to toggle panels (I use togglePanel(panelName) in the button click events))
	void TogglePanel(Panel^ panelToToggle) {
		array<Panel^>^ panels = gcnew array<Panel^> {
			panel3, panel4, panel5 /*,panel6, panel7, panel8, panel9, panel10*/
		};

		// If the panel is already visible, hide it
		if (panelToToggle->Visible) {
			panelToToggle->Visible = false;
			return;
		}

		// Hide all panels
		for each (Panel ^ pnl in panels) {
			pnl->Visible = false;
		}

		// Show the selected panel
		panelToToggle->Visible = true;
		panelToToggle->Dock = DockStyle::Fill;
		panelToToggle->BringToFront();
	}


	// When buttons are clicked, their color changes
	private: void SetActiveButton(System::Windows::Forms::Button^ clickedButton) {
		if (currentlyActiveButton == clickedButton) {
			clickedButton->BackColor = Color::Black;
			clickedButton->ForeColor = Color::White;
			currentlyActiveButton = nullptr;
			return;
		}
		for each (Control ^ ctrl in panel2->Controls) {
			Button^ btn = dynamic_cast<Button^>(ctrl);
			if (btn != nullptr) {
				btn->BackColor = Color::Black;
				btn->ForeColor = Color::White;
			}
		}

		// Set selected button color
		clickedButton->BackColor = Color::FromArgb(255, 207, 0); // Yellow
		clickedButton->ForeColor = Color::White;
		currentlyActiveButton = clickedButton;
	}


	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		SetActiveButton(button1);
		TogglePanel(panel3);
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		SetActiveButton(button2);
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		SetActiveButton(button3);
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		SetActiveButton(button4);
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		SetActiveButton(button5);
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		SetActiveButton(button6);
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		SetActiveButton(button7);
		TogglePanel(panel5);
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		SetActiveButton(button9);
		TogglePanel(panel4);
	}

	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {

		// ✅ Copy to clipboard
		Clipboard::SetText(email);

		// ✅ Open default mail app or browser Gmail
		System::Diagnostics::Process::Start("mailto:" + email);

		// ✅ Optional: Show confirmation
		MessageBox::Show("Email copied to clipboard and Gmail opened!", "Help Desk", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {

		if (label10->Text->StartsWith("(A)"))
			label10->Text = "HOW DO I ADD A NEW PRODUCT TO INVENTORY?";
		else
			label10->Text = label10->Tag->ToString();
	}

	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {

		if (label11->Text->StartsWith("(A)"))
			label11->Text = "WHAT HAPPENS WHEN AN ITEM GOES OUT OF STOCK?";
		else
			label11->Text = label11->Tag->ToString();
	}

	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
		if (label12->Text->StartsWith("(A)"))
			label12->Text = "HOW DO I GENERATE MONTHLY SALES AND STOCK REPORTS?";
		else
			label12->Text = label12->Tag->ToString();
	}

	private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
		if (label13->Text->StartsWith("(A)"))
			label13->Text = "WHAT IS THE MAXIMUM TEAM LIMIT?";
		else
			label13->Text = label13->Tag->ToString();
	}

	private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
		ToggleSwitch(button15, toggle15);
	}
	private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
		ToggleSwitch(button16, toggle16);
	}
	private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
		ToggleSwitch(button17, toggle17);
	}
	private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
		ToggleSwitch(button18, toggle18);
	}
	private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
		ToggleSwitch(button19, toggle19);
	}
};
}
