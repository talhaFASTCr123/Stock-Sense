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
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ button10;












		   System::Windows::Forms::Button^ currentlyActiveButton;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(DashboardForm1::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
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
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1286, 752);
			this->panel1->TabIndex = 0;
			// 
			// panel4
			// 
			this->panel4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel4.BackgroundImage")));
			this->panel4->Controls->Add(this->button10);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel4->Location = System::Drawing::Point(257, 0);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(1029, 752);
			this->panel4->TabIndex = 9;
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
			this->panel3->Location = System::Drawing::Point(257, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(657, 585);
			this->panel3->TabIndex = 3;
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
			this->panel4->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	String^ email = "talhasbzzz@gmail.com";
		
	private: System::Void DashboardForm1_Load(System::Object^ sender, System::EventArgs^ e) {
		// Placeholder for form load logic
		label1->Text = "TALHA";
		label1->Left = ((this->ClientSize.Width - label1->Width) / 2) + panel2->Width / 3;
		button10->FlatAppearance->MouseOverBackColor = button10->BackColor;
		button10->FlatAppearance->MouseDownBackColor = button10->BackColor;
		button10->Text = email;

		panel3->Visible = false;
		panel4->Visible = false;
		//panel5->Visible = false;
		//panel6->Visible = false;
		//panel7->Visible = false;
		//panel8->Visible = false;
		//panel9->Visible = false;
		//panel10->Visible = false;
	}

	void TogglePanel(Panel^ panelToToggle) {
		array<Panel^>^ panels = gcnew array<Panel^> {
			panel3, panel4, /*panel5, panel6, panel7, panel8, panel9, panel10*/
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
};
}
