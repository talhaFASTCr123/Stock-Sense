#pragma once
#include "Reviews.h"
#include "Products.h"

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
	private: System::Windows::Forms::Label^ productNameLabel;
	private: System::Windows::Forms::Label^ productPriceLabel;
	private: System::Windows::Forms::Label^ productCategoryLabel;
	public:

	protected:
		ReviewManager* reviewManager;
		Inventory* sampleInventory;
		~DashboardForm1()
		{
			if (components)
			{
				delete components;
				delete reviewManager;
				delete sampleInventory;
			}
		}

	private:
	System::ComponentModel::Container^ components;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::PictureBox^ adminBackgroundUI;
	private: System::Windows::Forms::PictureBox^ addMemberUI;
	private: System::Windows::Forms::Button^ adminTrashUI;
	private: System::Windows::Forms::Button^ promotionUI;
	private: System::Windows::Forms::Button^ employeeTrashUI;
	private: System::Windows::Forms::Button^ demotionUI;
	private: System::Windows::Forms::PictureBox^ employeeBackgroundUI;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ reviewName3;
	private: System::Windows::Forms::Label^ reviewName2;
	private: System::Windows::Forms::Label^ reviewName1;

	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Label^ reviewLabel3;
	private: System::Windows::Forms::Label^ reviewLabel2;
	private: System::Windows::Forms::Label^ reviewLabel1;
	private: System::Windows::Forms::PictureBox^ rating0;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ rating5;
	private: System::Windows::Forms::PictureBox^ rating45;
	private: System::Windows::Forms::PictureBox^ rating4;
	private: System::Windows::Forms::PictureBox^ rating35;
	private: System::Windows::Forms::PictureBox^ rating3;
	private: System::Windows::Forms::PictureBox^ rating25;
	private: System::Windows::Forms::PictureBox^ rating2;
	private: System::Windows::Forms::PictureBox^ rating15;
	private: System::Windows::Forms::PictureBox^ rating1;
	private: System::Windows::Forms::PictureBox^ rating05;
	private: System::Windows::Forms::PictureBox^ toggleOff;
	private: System::Windows::Forms::PictureBox^ toggleOn;
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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;

		   System::Windows::Forms::Button^ currentlyActiveButton;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(DashboardForm1::typeid));
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->adminBackgroundUI = (gcnew System::Windows::Forms::PictureBox());
			this->addMemberUI = (gcnew System::Windows::Forms::PictureBox());
			this->adminTrashUI = (gcnew System::Windows::Forms::Button());
			this->promotionUI = (gcnew System::Windows::Forms::Button());
			this->employeeTrashUI = (gcnew System::Windows::Forms::Button());
			this->demotionUI = (gcnew System::Windows::Forms::Button());
			this->employeeBackgroundUI = (gcnew System::Windows::Forms::PictureBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->productPriceLabel = (gcnew System::Windows::Forms::Label());
			this->productCategoryLabel = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->reviewName3 = (gcnew System::Windows::Forms::Label());
			this->reviewName2 = (gcnew System::Windows::Forms::Label());
			this->reviewName1 = (gcnew System::Windows::Forms::Label());
			this->productNameLabel = (gcnew System::Windows::Forms::Label());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->reviewLabel3 = (gcnew System::Windows::Forms::Label());
			this->reviewLabel2 = (gcnew System::Windows::Forms::Label());
			this->reviewLabel1 = (gcnew System::Windows::Forms::Label());
			this->rating0 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->rating5 = (gcnew System::Windows::Forms::PictureBox());
			this->rating45 = (gcnew System::Windows::Forms::PictureBox());
			this->rating4 = (gcnew System::Windows::Forms::PictureBox());
			this->rating35 = (gcnew System::Windows::Forms::PictureBox());
			this->rating3 = (gcnew System::Windows::Forms::PictureBox());
			this->rating25 = (gcnew System::Windows::Forms::PictureBox());
			this->rating2 = (gcnew System::Windows::Forms::PictureBox());
			this->rating15 = (gcnew System::Windows::Forms::PictureBox());
			this->rating1 = (gcnew System::Windows::Forms::PictureBox());
			this->rating05 = (gcnew System::Windows::Forms::PictureBox());
			this->toggleOff = (gcnew System::Windows::Forms::PictureBox());
			this->toggleOn = (gcnew System::Windows::Forms::PictureBox());
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
			this->panel6->SuspendLayout();
			this->panel7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->adminBackgroundUI))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->addMemberUI))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->employeeBackgroundUI))->BeginInit();
			this->panel5->SuspendLayout();
			this->panel8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rating0))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rating5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rating45))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rating4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rating35))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rating3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rating25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rating2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rating15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rating1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rating05))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->toggleOff))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->toggleOn))->BeginInit();
			this->panel4->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel6
			// 
			this->panel6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel6.BackgroundImage")));
			this->panel6->Controls->Add(this->panel7);
			this->panel6->Controls->Add(this->button20);
			this->panel6->Controls->Add(this->label14);
			this->panel6->Controls->Add(this->label15);
			this->panel6->Location = System::Drawing::Point(257, 0);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(97, 102);
			this->panel6->TabIndex = 15;
			// 
			// panel7
			// 
			this->panel7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel7.BackgroundImage")));
			this->panel7->Controls->Add(this->checkBox1);
			this->panel7->Controls->Add(this->button21);
			this->panel7->Controls->Add(this->textBox2);
			this->panel7->Controls->Add(this->textBox1);
			this->panel7->Location = System::Drawing::Point(245, 45);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(567, 685);
			this->panel7->TabIndex = 20;
			// 
			// checkBox1
			// 
			this->checkBox1->Cursor = System::Windows::Forms::Cursors::Cross;
			this->checkBox1->FlatAppearance->BorderSize = 0;
			this->checkBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox1->Location = System::Drawing::Point(385, 463);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(12, 13);
			this->checkBox1->TabIndex = 3;
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::Transparent;
			this->button21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button21->FlatAppearance->BorderSize = 0;
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button21->Location = System::Drawing::Point(152, 501);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(256, 41);
			this->button21->TabIndex = 2;
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &DashboardForm1::button21_Click);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Cursor = System::Windows::Forms::Cursors::Cross;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Poppins", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::White;
			this->textBox2->Location = System::Drawing::Point(152, 408);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(245, 20);
			this->textBox2->TabIndex = 1;
			this->textBox2->TabStop = false;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Cursor = System::Windows::Forms::Cursors::Cross;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Poppins", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::White;
			this->textBox1->Location = System::Drawing::Point(152, 322);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(245, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->TabStop = false;
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::Transparent;
			this->button20->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button20.BackgroundImage")));
			this->button20->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button20->FlatAppearance->BorderSize = 0;
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button20->Location = System::Drawing::Point(864, 316);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(105, 34);
			this->button20->TabIndex = 5;
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &DashboardForm1::button20_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label14->Font = (gcnew System::Drawing::Font(L"Poppins SemiBold", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(304, 272);
			this->label14->Margin = System::Windows::Forms::Padding(0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(167, 23);
			this->label14->TabIndex = 24;
			this->label14->Text = L"talhasbzzz@gmail.com";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Transparent;
			this->label15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label15->Font = (gcnew System::Drawing::Font(L"Poppins SemiBold", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(140, 272);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(99, 23);
			this->label15->TabIndex = 23;
			this->label15->Text = L"talha-hamid";
			this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// adminBackgroundUI
			// 
			this->adminBackgroundUI->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"adminBackgroundUI.Image")));
			this->adminBackgroundUI->Location = System::Drawing::Point(1286, 272);
			this->adminBackgroundUI->Name = L"adminBackgroundUI";
			this->adminBackgroundUI->Size = System::Drawing::Size(906, 55);
			this->adminBackgroundUI->TabIndex = 17;
			this->adminBackgroundUI->TabStop = false;
			// 
			// addMemberUI
			// 
			this->addMemberUI->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"addMemberUI.Image")));
			this->addMemberUI->Location = System::Drawing::Point(1286, 376);
			this->addMemberUI->Name = L"addMemberUI";
			this->addMemberUI->Size = System::Drawing::Size(105, 34);
			this->addMemberUI->TabIndex = 18;
			this->addMemberUI->TabStop = false;
			// 
			// adminTrashUI
			// 
			this->adminTrashUI->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(177)), static_cast<System::Int32>(static_cast<System::Byte>(4)),
				static_cast<System::Int32>(static_cast<System::Byte>(4)));
			this->adminTrashUI->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"adminTrashUI.BackgroundImage")));
			this->adminTrashUI->Cursor = System::Windows::Forms::Cursors::Hand;
			this->adminTrashUI->FlatAppearance->BorderSize = 0;
			this->adminTrashUI->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->adminTrashUI->Location = System::Drawing::Point(1303, 307);
			this->adminTrashUI->Name = L"adminTrashUI";
			this->adminTrashUI->Size = System::Drawing::Size(108, 40);
			this->adminTrashUI->TabIndex = 32;
			this->adminTrashUI->UseVisualStyleBackColor = false;
			// 
			// promotionUI
			// 
			this->promotionUI->BackColor = System::Drawing::Color::Black;
			this->promotionUI->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"promotionUI.BackgroundImage")));
			this->promotionUI->Cursor = System::Windows::Forms::Cursors::Hand;
			this->promotionUI->FlatAppearance->BorderSize = 0;
			this->promotionUI->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->promotionUI->Location = System::Drawing::Point(1287, 256);
			this->promotionUI->Name = L"promotionUI";
			this->promotionUI->Size = System::Drawing::Size(61, 35);
			this->promotionUI->TabIndex = 29;
			this->promotionUI->UseVisualStyleBackColor = false;
			// 
			// employeeTrashUI
			// 
			this->employeeTrashUI->BackColor = System::Drawing::Color::Black;
			this->employeeTrashUI->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"employeeTrashUI.BackgroundImage")));
			this->employeeTrashUI->Cursor = System::Windows::Forms::Cursors::Hand;
			this->employeeTrashUI->FlatAppearance->BorderSize = 0;
			this->employeeTrashUI->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->employeeTrashUI->Location = System::Drawing::Point(1348, 258);
			this->employeeTrashUI->Name = L"employeeTrashUI";
			this->employeeTrashUI->Size = System::Drawing::Size(62, 37);
			this->employeeTrashUI->TabIndex = 30;
			this->employeeTrashUI->UseVisualStyleBackColor = false;
			// 
			// demotionUI
			// 
			this->demotionUI->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(177)), static_cast<System::Int32>(static_cast<System::Byte>(4)),
				static_cast<System::Int32>(static_cast<System::Byte>(4)));
			this->demotionUI->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"demotionUI.BackgroundImage")));
			this->demotionUI->Cursor = System::Windows::Forms::Cursors::Hand;
			this->demotionUI->FlatAppearance->BorderSize = 0;
			this->demotionUI->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->demotionUI->Location = System::Drawing::Point(1287, 309);
			this->demotionUI->Name = L"demotionUI";
			this->demotionUI->Size = System::Drawing::Size(61, 38);
			this->demotionUI->TabIndex = 31;
			this->demotionUI->UseVisualStyleBackColor = false;
			// 
			// employeeBackgroundUI
			// 
			this->employeeBackgroundUI->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"employeeBackgroundUI.Image")));
			this->employeeBackgroundUI->Location = System::Drawing::Point(1286, 387);
			this->employeeBackgroundUI->Name = L"employeeBackgroundUI";
			this->employeeBackgroundUI->Size = System::Drawing::Size(906, 55);
			this->employeeBackgroundUI->TabIndex = 33;
			this->employeeBackgroundUI->TabStop = false;
			// 
			// panel5
			// 
			this->panel5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel5.BackgroundImage")));
			this->panel5->Controls->Add(this->button19);
			this->panel5->Controls->Add(this->button18);
			this->panel5->Controls->Add(this->button17);
			this->panel5->Controls->Add(this->button16);
			this->panel5->Controls->Add(this->button15);
			this->panel5->Location = System::Drawing::Point(916, 455);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(229, 178);
			this->panel5->TabIndex = 34;
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
			// panel8
			// 
			this->panel8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel8.BackgroundImage")));
			this->panel8->Controls->Add(this->productPriceLabel);
			this->panel8->Controls->Add(this->productCategoryLabel);
			this->panel8->Controls->Add(this->label19);
			this->panel8->Controls->Add(this->reviewName3);
			this->panel8->Controls->Add(this->reviewName2);
			this->panel8->Controls->Add(this->reviewName1);
			this->panel8->Controls->Add(this->productNameLabel);
			this->panel8->Controls->Add(this->button23);
			this->panel8->Controls->Add(this->button22);
			this->panel8->Controls->Add(this->reviewLabel3);
			this->panel8->Controls->Add(this->reviewLabel2);
			this->panel8->Controls->Add(this->reviewLabel1);
			this->panel8->Location = System::Drawing::Point(707, 95);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(94, 114);
			this->panel8->TabIndex = 36;
			// 
			// productPriceLabel
			// 
			this->productPriceLabel->BackColor = System::Drawing::Color::Transparent;
			this->productPriceLabel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->productPriceLabel->Font = (gcnew System::Drawing::Font(L"LEMON MILK", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->productPriceLabel->ForeColor = System::Drawing::Color::Black;
			this->productPriceLabel->Location = System::Drawing::Point(183, 531);
			this->productPriceLabel->Name = L"productPriceLabel";
			this->productPriceLabel->Size = System::Drawing::Size(243, 22);
			this->productPriceLabel->TabIndex = 11;
			this->productPriceLabel->Text = L"productPriceLabel";
			this->productPriceLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// productCategoryLabel
			// 
			this->productCategoryLabel->BackColor = System::Drawing::Color::Transparent;
			this->productCategoryLabel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->productCategoryLabel->Font = (gcnew System::Drawing::Font(L"LEMON MILK", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->productCategoryLabel->ForeColor = System::Drawing::Color::Black;
			this->productCategoryLabel->Location = System::Drawing::Point(183, 405);
			this->productCategoryLabel->Name = L"productCategoryLabel";
			this->productCategoryLabel->Size = System::Drawing::Size(243, 22);
			this->productCategoryLabel->TabIndex = 10;
			this->productCategoryLabel->Text = L"productCategoryLabel";
			this->productCategoryLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label19
			// 
			this->label19->BackColor = System::Drawing::Color::Transparent;
			this->label19->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label19->Font = (gcnew System::Drawing::Font(L"Poppins SemiBold", 7.8F, System::Drawing::FontStyle::Bold));
			this->label19->ForeColor = System::Drawing::Color::Black;
			this->label19->Location = System::Drawing::Point(949, 377);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(47, 127);
			this->label19->TabIndex = 9;
			this->label19->Click += gcnew System::EventHandler(this, &DashboardForm1::label19_Click);
			// 
			// reviewName3
			// 
			this->reviewName3->BackColor = System::Drawing::Color::Transparent;
			this->reviewName3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->reviewName3->Font = (gcnew System::Drawing::Font(L"LEMON MILK", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->reviewName3->ForeColor = System::Drawing::Color::Black;
			this->reviewName3->Location = System::Drawing::Point(679, 616);
			this->reviewName3->Name = L"reviewName3";
			this->reviewName3->Size = System::Drawing::Size(130, 30);
			this->reviewName3->TabIndex = 8;
			this->reviewName3->Text = L"Cathelyn Ray";
			this->reviewName3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// reviewName2
			// 
			this->reviewName2->BackColor = System::Drawing::Color::Transparent;
			this->reviewName2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->reviewName2->Font = (gcnew System::Drawing::Font(L"LEMON MILK", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->reviewName2->ForeColor = System::Drawing::Color::Black;
			this->reviewName2->Location = System::Drawing::Point(783, 381);
			this->reviewName2->Name = L"reviewName2";
			this->reviewName2->Size = System::Drawing::Size(130, 30);
			this->reviewName2->TabIndex = 7;
			this->reviewName2->Text = L"Cathelyn Ray";
			this->reviewName2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// reviewName1
			// 
			this->reviewName1->BackColor = System::Drawing::Color::Transparent;
			this->reviewName1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->reviewName1->Font = (gcnew System::Drawing::Font(L"LEMON MILK", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->reviewName1->ForeColor = System::Drawing::Color::Black;
			this->reviewName1->Location = System::Drawing::Point(656, 167);
			this->reviewName1->Name = L"reviewName1";
			this->reviewName1->Size = System::Drawing::Size(130, 30);
			this->reviewName1->TabIndex = 6;
			this->reviewName1->Text = L"Cathelyn Ray";
			this->reviewName1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// productNameLabel
			// 
			this->productNameLabel->BackColor = System::Drawing::Color::Transparent;
			this->productNameLabel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->productNameLabel->Font = (gcnew System::Drawing::Font(L"LEMON MILK", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->productNameLabel->ForeColor = System::Drawing::Color::Black;
			this->productNameLabel->Location = System::Drawing::Point(183, 275);
			this->productNameLabel->Name = L"productNameLabel";
			this->productNameLabel->Size = System::Drawing::Size(243, 22);
			this->productNameLabel->TabIndex = 5;
			this->productNameLabel->Text = L"productNameLabel";
			this->productNameLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::Color::Transparent;
			this->button23->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button23->FlatAppearance->BorderSize = 0;
			this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button23->Location = System::Drawing::Point(326, 599);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(42, 55);
			this->button23->TabIndex = 4;
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Click += gcnew System::EventHandler(this, &DashboardForm1::button23_Click);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::Transparent;
			this->button22->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button22->FlatAppearance->BorderSize = 0;
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button22->Location = System::Drawing::Point(245, 600);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(42, 55);
			this->button22->TabIndex = 3;
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &DashboardForm1::button22_Click);
			// 
			// reviewLabel3
			// 
			this->reviewLabel3->BackColor = System::Drawing::Color::Transparent;
			this->reviewLabel3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->reviewLabel3->Font = (gcnew System::Drawing::Font(L"Poppins SemiBold", 7.8F, System::Drawing::FontStyle::Bold));
			this->reviewLabel3->ForeColor = System::Drawing::Color::Black;
			this->reviewLabel3->Location = System::Drawing::Point(653, 689);
			this->reviewLabel3->Name = L"reviewLabel3";
			this->reviewLabel3->Size = System::Drawing::Size(330, 48);
			this->reviewLabel3->TabIndex = 2;
			this->reviewLabel3->Text = L"Customer support was helpful.";
			// 
			// reviewLabel2
			// 
			this->reviewLabel2->BackColor = System::Drawing::Color::Transparent;
			this->reviewLabel2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->reviewLabel2->Font = (gcnew System::Drawing::Font(L"Poppins SemiBold", 7.8F, System::Drawing::FontStyle::Bold));
			this->reviewLabel2->ForeColor = System::Drawing::Color::Black;
			this->reviewLabel2->Location = System::Drawing::Point(602, 456);
			this->reviewLabel2->Name = L"reviewLabel2";
			this->reviewLabel2->Size = System::Drawing::Size(330, 48);
			this->reviewLabel2->TabIndex = 1;
			this->reviewLabel2->Text = L"Arrived on time and works perfectly.";
			// 
			// reviewLabel1
			// 
			this->reviewLabel1->BackColor = System::Drawing::Color::Transparent;
			this->reviewLabel1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->reviewLabel1->Font = (gcnew System::Drawing::Font(L"Poppins SemiBold", 7.8F, System::Drawing::FontStyle::Bold));
			this->reviewLabel1->ForeColor = System::Drawing::Color::Black;
			this->reviewLabel1->Location = System::Drawing::Point(656, 235);
			this->reviewLabel1->Name = L"reviewLabel1";
			this->reviewLabel1->Size = System::Drawing::Size(330, 48);
			this->reviewLabel1->TabIndex = 0;
			this->reviewLabel1->Text = L"Great product, exactly what I needed!";
			// 
			// rating0
			// 
			this->rating0->BackColor = System::Drawing::Color::Transparent;
			this->rating0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"rating0.Image")));
			this->rating0->Location = System::Drawing::Point(1292, 105);
			this->rating0->Name = L"rating0";
			this->rating0->Size = System::Drawing::Size(144, 31);
			this->rating0->TabIndex = 39;
			this->rating0->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->rating5);
			this->panel1->Controls->Add(this->rating45);
			this->panel1->Controls->Add(this->rating4);
			this->panel1->Controls->Add(this->rating35);
			this->panel1->Controls->Add(this->rating3);
			this->panel1->Controls->Add(this->rating25);
			this->panel1->Controls->Add(this->rating2);
			this->panel1->Controls->Add(this->rating15);
			this->panel1->Controls->Add(this->rating1);
			this->panel1->Controls->Add(this->rating05);
			this->panel1->Controls->Add(this->rating0);
			this->panel1->Controls->Add(this->panel8);
			this->panel1->Controls->Add(this->panel5);
			this->panel1->Controls->Add(this->employeeBackgroundUI);
			this->panel1->Controls->Add(this->demotionUI);
			this->panel1->Controls->Add(this->employeeTrashUI);
			this->panel1->Controls->Add(this->promotionUI);
			this->panel1->Controls->Add(this->adminTrashUI);
			this->panel1->Controls->Add(this->addMemberUI);
			this->panel1->Controls->Add(this->adminBackgroundUI);
			this->panel1->Controls->Add(this->panel6);
			this->panel1->Controls->Add(this->toggleOff);
			this->panel1->Controls->Add(this->toggleOn);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1286, 752);
			this->panel1->TabIndex = 0;
			// 
			// rating5
			// 
			this->rating5->BackColor = System::Drawing::Color::Transparent;
			this->rating5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"rating5.Image")));
			this->rating5->Location = System::Drawing::Point(1292, 468);
			this->rating5->Name = L"rating5";
			this->rating5->Size = System::Drawing::Size(144, 31);
			this->rating5->TabIndex = 49;
			this->rating5->TabStop = false;
			// 
			// rating45
			// 
			this->rating45->BackColor = System::Drawing::Color::Transparent;
			this->rating45->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"rating45.Image")));
			this->rating45->Location = System::Drawing::Point(1292, 438);
			this->rating45->Name = L"rating45";
			this->rating45->Size = System::Drawing::Size(144, 31);
			this->rating45->TabIndex = 48;
			this->rating45->TabStop = false;
			// 
			// rating4
			// 
			this->rating4->BackColor = System::Drawing::Color::Transparent;
			this->rating4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"rating4.Image")));
			this->rating4->Location = System::Drawing::Point(1292, 402);
			this->rating4->Name = L"rating4";
			this->rating4->Size = System::Drawing::Size(144, 31);
			this->rating4->TabIndex = 47;
			this->rating4->TabStop = false;
			// 
			// rating35
			// 
			this->rating35->BackColor = System::Drawing::Color::Transparent;
			this->rating35->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"rating35.Image")));
			this->rating35->Location = System::Drawing::Point(1292, 363);
			this->rating35->Name = L"rating35";
			this->rating35->Size = System::Drawing::Size(144, 31);
			this->rating35->TabIndex = 46;
			this->rating35->TabStop = false;
			// 
			// rating3
			// 
			this->rating3->BackColor = System::Drawing::Color::Transparent;
			this->rating3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"rating3.Image")));
			this->rating3->Location = System::Drawing::Point(1292, 326);
			this->rating3->Name = L"rating3";
			this->rating3->Size = System::Drawing::Size(144, 31);
			this->rating3->TabIndex = 45;
			this->rating3->TabStop = false;
			// 
			// rating25
			// 
			this->rating25->BackColor = System::Drawing::Color::Transparent;
			this->rating25->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"rating25.Image")));
			this->rating25->Location = System::Drawing::Point(1292, 289);
			this->rating25->Name = L"rating25";
			this->rating25->Size = System::Drawing::Size(144, 31);
			this->rating25->TabIndex = 44;
			this->rating25->TabStop = false;
			// 
			// rating2
			// 
			this->rating2->BackColor = System::Drawing::Color::Transparent;
			this->rating2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"rating2.Image")));
			this->rating2->Location = System::Drawing::Point(1292, 253);
			this->rating2->Name = L"rating2";
			this->rating2->Size = System::Drawing::Size(144, 31);
			this->rating2->TabIndex = 43;
			this->rating2->TabStop = false;
			// 
			// rating15
			// 
			this->rating15->BackColor = System::Drawing::Color::Transparent;
			this->rating15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"rating15.Image")));
			this->rating15->Location = System::Drawing::Point(1292, 216);
			this->rating15->Name = L"rating15";
			this->rating15->Size = System::Drawing::Size(144, 31);
			this->rating15->TabIndex = 42;
			this->rating15->TabStop = false;
			// 
			// rating1
			// 
			this->rating1->BackColor = System::Drawing::Color::Transparent;
			this->rating1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"rating1.Image")));
			this->rating1->Location = System::Drawing::Point(1292, 179);
			this->rating1->Name = L"rating1";
			this->rating1->Size = System::Drawing::Size(144, 31);
			this->rating1->TabIndex = 41;
			this->rating1->TabStop = false;
			// 
			// rating05
			// 
			this->rating05->BackColor = System::Drawing::Color::Transparent;
			this->rating05->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"rating05.Image")));
			this->rating05->Location = System::Drawing::Point(1292, 142);
			this->rating05->Name = L"rating05";
			this->rating05->Size = System::Drawing::Size(144, 31);
			this->rating05->TabIndex = 40;
			this->rating05->TabStop = false;
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
			this->panel4->Location = System::Drawing::Point(481, 29);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(29, 188);
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
			this->button13->Click += gcnew System::EventHandler(this, &DashboardForm1::button13_Click);
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
			this->button10->Click += gcnew System::EventHandler(this, &DashboardForm1::button10_Click);
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
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->adminBackgroundUI))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->addMemberUI))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->employeeBackgroundUI))->EndInit();
			this->panel5->ResumeLayout(false);
			this->panel8->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rating0))->EndInit();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rating5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rating45))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rating4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rating35))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rating3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rating25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rating2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rating15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rating1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rating05))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->toggleOff))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->toggleOn))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
private:
	int currentProductIndex = 0; // Track which product is showing

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
		
		panel7->Visible = false; // Initially hide the add user panel 


		panel3->Visible = false;
		panel4->Visible = false;
		panel5->Visible = false;
		panel6->Visible = false;
		panel8->Visible = false;
		//panel9->Visible = false;
		//panel10->Visible = false;


		// In your Reviews.h or wherever you are testing
		// Add dummy reviews to test
		reviewManager->addReview("Talha", 5, "Great product!", time(0));
		reviewManager->addReview("Ali", 4, "Nice quality!", time(0));
		reviewManager->addReview("Sara", 3, "It's okay.", time(0));
		reviewManager->addReview("Zoya", 5, "Loved it!", time(0));

		sampleInventory = new Inventory();
		sampleInventory->addProduct(1, "Apple iPhone 14", "Smartphones", 999.99, 50);
		sampleInventory->addProduct(2, "Samsung Galaxy S23", "Smartphones", 899.99, 30);
		sampleInventory->addProduct(3, "Sony WH-1000XM4", "Headphones", 299.99, 20);

		button22->FlatAppearance->MouseOverBackColor = Color::Transparent;
		button22->FlatAppearance->MouseDownBackColor = Color::Transparent;
		button23->FlatAppearance->MouseDownBackColor = Color::Transparent;
		button23->FlatAppearance->MouseOverBackColor = Color::Transparent;

		// Show the first product when form loads
		updateProductDisplay();
	}

	// Function to update the labels
	void updateProductDisplay() {
		if (!sampleInventory || sampleInventory->getProductCount() == 0) return;

		Product** products = sampleInventory->getProducts();
		if (currentProductIndex >= sampleInventory->getProductCount())
			currentProductIndex = 0; // Safety

		Product* prod = products[currentProductIndex];
		if (prod) {
			productNameLabel->Text = gcnew String(prod->getName());
			productCategoryLabel->Text = gcnew String(prod->getCategory());

			String^ priceText = "$" + prod->getPrice().ToString("F2");
			productPriceLabel->Text = priceText;
		}
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

	Panel^ currentlyVisiblePanel = nullptr;
	// This is specifically to toggle panels (I use togglePanel(panelName) in the button click events))
	void TogglePanel(Panel^ panelToToggle) {
		// If the panel is already visible, hide it and clear the tracker
		if (currentlyVisiblePanel == panelToToggle) {
			panelToToggle->Visible = false;
			currentlyVisiblePanel = nullptr;
			return;
		}

		// Hide all panels
		cli::array<Panel^>^ panels = gcnew cli::array<Panel^>(5) { panel3, panel4, panel5, panel6, panel8 };
		for each(Panel ^ pnl in panels) {
			pnl->Visible = false;
		}

		// Show the selected one
		panelToToggle->Visible = true;
		panelToToggle->Dock = DockStyle::Fill;
		panelToToggle->BringToFront();

		// Track the currently visible panel
		currentlyVisiblePanel = panelToToggle;
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
		TogglePanel(panel6);
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		SetActiveButton(button6);
		TogglePanel(panel8);
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

	int memberCount = 0; // Starts with 0 since owner does not count
	int cardStartY = 316;
	String^ newUsername;
	String^ newEmail;

	// This is the button to add a new member
	private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
		if (memberCount >= 5) {
			button20->Visible = false;
			return;
		}

		// Just show the add user panel (pop-up UI)
		panel7->BringToFront();
		panel7->Visible = true;
	}

	// This is the logic when the promotion / demotion button is clicked
	private: System::Void RoleButton_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ clickedRoleBtn = dynamic_cast<Button^>(sender);
		if (clickedRoleBtn == nullptr) return;

		// Extract index from button name: roleBtn_#
		String^ name = clickedRoleBtn->Name;
		int underscoreIndex = name->LastIndexOf('_');
		if (underscoreIndex == -1 || underscoreIndex == name->Length - 1) return;

		int index = Int32::Parse(name->Substring(underscoreIndex + 1));
		String^ memberCardName = "memberCard_" + index;
		String^ adminCardName = "adminCard_" + index;
		String^ trashBtnName = "trashBtn_" + index;
		String^ nameLabelName = "nameLabel_" + index;
		String^ emailLabelName = "emailLabel_" + index;

		// 🔍 Locate the user card
		PictureBox^ card = nullptr;
		for each(Control ^ ctrl in panel6->Controls) {
			if (ctrl->Name == memberCardName || ctrl->Name == adminCardName) {
				card = dynamic_cast<PictureBox^>(ctrl);
				break;
			}
		}
		if (card == nullptr) {
			MessageBox::Show("❌ Could not find card: " + memberCardName + " or " + adminCardName);
			return;
		}

		// 🔍 Locate the trash button
		Button^ trashBtn = nullptr;
		for each(Control ^ ctrl in card->Controls) {
			if (ctrl->Name == trashBtnName) {
				trashBtn = dynamic_cast<Button^>(ctrl);
				break;
			}
		}
		if (trashBtn == nullptr) {
			MessageBox::Show("❌ Could not find trash button: " + trashBtnName);
			return;
		}

		// 🔍 Locate the name and email labels
		Label^ nameLabel = dynamic_cast<Label^>(card->Controls[nameLabelName]);
		Label^ emailLabel = dynamic_cast<Label^>(card->Controls[emailLabelName]);

		// ✅ Toggle role
		bool isEmployee = card->Name->StartsWith("memberCard_");
		if (isEmployee) {
			// 🔼 Promote to Admin
			card->Image = adminBackgroundUI->Image;
			card->Name = "adminCard_" + index;

			clickedRoleBtn->BackgroundImage = demotionUI->BackgroundImage;
			clickedRoleBtn->Size = demotionUI->Size;
			clickedRoleBtn->BackColor = demotionUI->BackColor;
			clickedRoleBtn->Location = Point(728, 10);
			clickedRoleBtn->FlatAppearance->MouseDownBackColor = Color::FromArgb(174, 4, 4);
			clickedRoleBtn->FlatAppearance->MouseOverBackColor = Color::FromArgb(174, 4, 4);

			trashBtn->BackgroundImage = adminTrashUI->BackgroundImage;
			trashBtn->Size = adminTrashUI->Size;
			trashBtn->BackColor = adminTrashUI->BackColor;
			trashBtn->Location = Point(787, 9);
			trashBtn->FlatAppearance->MouseDownBackColor = Color::FromArgb(174, 4, 4);
			trashBtn->FlatAppearance->MouseOverBackColor = Color::FromArgb(174, 4, 4);

			if (nameLabel) nameLabel->ForeColor = Color::Black;
			if (emailLabel) emailLabel->ForeColor = Color::Black;
		}
		else {
			// 🔽 Demote to Employee
			card->Image = employeeBackgroundUI->Image;
			card->Name = "memberCard_" + index;

			clickedRoleBtn->BackgroundImage = promotionUI->BackgroundImage;
			clickedRoleBtn->Size = promotionUI->Size;
			clickedRoleBtn->BackColor = promotionUI->BackColor;
			clickedRoleBtn->Location = Point(728, 10);
			clickedRoleBtn->FlatAppearance->MouseDownBackColor = Color::Black;
			clickedRoleBtn->FlatAppearance->MouseOverBackColor = Color::Black;

			trashBtn->BackgroundImage = employeeTrashUI->BackgroundImage;
			trashBtn->Size = employeeTrashUI->Size;
			trashBtn->BackColor = employeeTrashUI->BackColor;
			trashBtn->Location = Point(789, 10);
			trashBtn->FlatAppearance->MouseDownBackColor = Color::Black;
			trashBtn->FlatAppearance->MouseOverBackColor = Color::Black;

			if (nameLabel) nameLabel->ForeColor = Color::White;
			if (emailLabel) emailLabel->ForeColor = Color::White;
		}
	}

	// This is the logic when the trash button is clicked
	private: System::Void TrashButton_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ clickedTrashBtn = dynamic_cast<Button^>(sender);
		if (clickedTrashBtn == nullptr) return;

		// 🔍 Extract index
		String^ name = clickedTrashBtn->Name; // trashBtn_#
		int underscoreIndex = name->LastIndexOf('_');
		if (underscoreIndex == -1 || underscoreIndex == name->Length - 1) return;

		int index = Int32::Parse(name->Substring(underscoreIndex + 1));

		// 🔍 Locate card (either adminCard_# or memberCard_#)
		PictureBox^ targetCard = nullptr;
		for each(Control ^ ctrl in panel6->Controls) {
			if ((ctrl->Name == "memberCard_" + index || ctrl->Name == "adminCard_" + index) && dynamic_cast<PictureBox^>(ctrl)) {
				targetCard = dynamic_cast<PictureBox^>(ctrl);
				break;
			}
		}

		if (targetCard == nullptr) {
			MessageBox::Show("❌ Could not find card for deletion.");
			return;
		}

		// 🔥 Remove card and its child controls (roleBtn, trashBtn, labels)
		panel6->Controls->Remove(targetCard);
		delete targetCard;

		// 🔄 Shift other cards above
		for (int i = index + 1; i <= memberCount; ++i) {
			String^ oldCardName = "memberCard_" + i;
			String^ oldAdminCardName = "adminCard_" + i;
			String^ oldRoleBtnName = "roleBtn_" + i;
			String^ oldTrashBtnName = "trashBtn_" + i;
			String^ oldNameLabelName = "nameLabel_" + i;
			String^ oldEmailLabelName = "emailLabel_" + i;

			PictureBox^ card = dynamic_cast<PictureBox^>(panel6->Controls[oldCardName]);
			if (card == nullptr)
				card = dynamic_cast<PictureBox^>(panel6->Controls[oldAdminCardName]);

			if (card == nullptr) continue;

			// Move card up
			card->Location = Point(card->Location.X, card->Location.Y - 60);

			// Rename card
			bool wasAdmin = card->Name->StartsWith("adminCard_");
			card->Name = wasAdmin ? "adminCard_" + (i - 1) : "memberCard_" + (i - 1);

			// Shift role and trash buttons inside the card
			for each(Control ^ c in card->Controls) {
				if (c->Name == oldRoleBtnName) {
					c->Name = "roleBtn_" + (i - 1);
				}
				else if (c->Name == oldTrashBtnName) {
					c->Name = "trashBtn_" + (i - 1);
				}
				else if (c->Name == oldNameLabelName) {
					c->Name = "nameLabel_" + (i - 1);
				}
				else if (c->Name == oldEmailLabelName) {
					c->Name = "emailLabel_" + (i - 1);
				}
			}
		}

		// 🟡 Shift Add Member button up
		button20->Location = Point(button20->Location.X, button20->Location.Y - 60);

		// ✅ Show Add Member button again if needed
		memberCount--;
		if (memberCount < 5) {
			button20->Visible = true;
		}
	}



	// Add user button in the add user panel: Applying logic to move buttons and the employee / admin card to new position after pressing this button
	private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
		// Hide the Add User panel
		panel7->Visible = false;

		// Get user input
		newUsername = textBox1->Text;
		newEmail = textBox2->Text;
		bool isAdmin = checkBox1->Checked;

		// Calculate card position
		int posX = 61;
		int posY = cardStartY + (memberCount * 60);

		// Create the user card
		PictureBox^ newCard = gcnew PictureBox();
		newCard->Name = isAdmin ? "adminCard_" + (memberCount + 1).ToString() : "memberCard_" + (memberCount + 1).ToString(); // 👈 Naming
		newCard->Image = isAdmin ? adminBackgroundUI->Image : employeeBackgroundUI->Image;
		newCard->Size = isAdmin ? adminBackgroundUI->Size : employeeBackgroundUI->Size;
		newCard->SizeMode = PictureBoxSizeMode::Normal;
		newCard->BackColor = Color::Transparent;
		newCard->Location = Point(posX, posY);
		newCard->Visible = true;
		panel6->Controls->Add(newCard);

		// Add Name Label
		Label^ nameLabel = gcnew Label();
		nameLabel->Name = "nameLabel_" + (memberCount + 1).ToString();
		nameLabel->Text = newUsername;
		nameLabel->Font = gcnew System::Drawing::Font("Poppins SemiBold", 7.8F, FontStyle::Bold);
		nameLabel->ForeColor = isAdmin ? Color::Black : Color::White;
		nameLabel->TextAlign = ContentAlignment::MiddleCenter;
		nameLabel->FlatStyle = FlatStyle::Flat;
		nameLabel->BorderStyle = BorderStyle::None;
		nameLabel->AutoSize = true;
		nameLabel->Location = Point(79, 14);
		nameLabel->BackColor = Color::Transparent;
		nameLabel->Parent = newCard;

		// Add Email Label
		Label^ emailLabel = gcnew Label();
		emailLabel->Name = "emailLabel_" + (memberCount + 1).ToString();
		emailLabel->Text = newEmail;
		emailLabel->Font = gcnew System::Drawing::Font("Poppins SemiBold", 7.8F, FontStyle::Bold);
		emailLabel->ForeColor = isAdmin ? Color::Black : Color::White;
		emailLabel->TextAlign = ContentAlignment::MiddleCenter;
		emailLabel->FlatStyle = FlatStyle::Flat;
		emailLabel->BorderStyle = BorderStyle::None;
		emailLabel->AutoSize = true;
		emailLabel->Location = Point(243, 14);
		emailLabel->BackColor = Color::Transparent;
		emailLabel->Parent = newCard;

		// 💼 Promotion/Demotion Button
		Button^ roleBtn = gcnew Button();
		roleBtn->Name = "roleBtn_" + (memberCount+1).ToString(); // 👈 Naming
		roleBtn->BackgroundImage = isAdmin ? demotionUI->BackgroundImage : promotionUI->BackgroundImage;
		roleBtn->Size = isAdmin ? demotionUI->Size : promotionUI->Size;
		roleBtn->BackColor = isAdmin ? demotionUI->BackColor : promotionUI->BackColor;
		roleBtn->FlatStyle = FlatStyle::Flat;
		roleBtn->FlatAppearance->BorderSize = 0;
		roleBtn->FlatAppearance->MouseDownBackColor = isAdmin ? Color::FromArgb(174, 4, 4) : Color::Black;
		roleBtn->FlatAppearance->MouseOverBackColor = isAdmin ? Color::FromArgb(174, 4, 4) : Color::Black;
		roleBtn->Location = Point(728, 10);
		roleBtn->Visible = true;
		roleBtn->Click += gcnew System::EventHandler(this, &DashboardForm1::RoleButton_Click);
		roleBtn->Parent = newCard;
		roleBtn->Cursor = Cursors::Hand;

		// 🗑️ Trash Button
		Button^ trashBtn = gcnew Button();
		trashBtn->Name = "trashBtn_" + (memberCount+1).ToString(); // 👈 Naming
		trashBtn->BackgroundImage = isAdmin ? adminTrashUI->BackgroundImage : employeeTrashUI->BackgroundImage;
		trashBtn->Size = isAdmin ? adminTrashUI->Size : employeeTrashUI->Size;
		trashBtn->BackColor = isAdmin ? adminTrashUI->BackColor : employeeTrashUI->BackColor;
		trashBtn->FlatStyle = FlatStyle::Flat;
		trashBtn->FlatAppearance->BorderSize = 0;
		trashBtn->FlatAppearance->MouseDownBackColor = isAdmin ? Color::FromArgb(174, 4, 4) : Color::Black;
		trashBtn->FlatAppearance->MouseOverBackColor = isAdmin ? Color::FromArgb(174, 4, 4) : Color::Black;
		trashBtn->Location = isAdmin ? Point(787, 9) : Point(789, 10);
		trashBtn->Visible = true;
		trashBtn->Click += gcnew System::EventHandler(this, &DashboardForm1::TrashButton_Click);
		trashBtn->Parent = newCard;
		trashBtn->Cursor = Cursors::Hand;

		if (isAdmin) {
			roleBtn->BringToFront();
		}

		// Move Add Member Button down
		button20->Location = Point(button20->Location.X, button20->Location.Y + 60);

		// Increment count and check limit
		memberCount++;
		if (memberCount >= 5) {
			button20->Visible = false;
		}
	}

	int currentReviewIndex = 0; // Tracks which set of 3 to show
	private: System::Void label19_Click(System::Object^ sender, System::EventArgs^ e) {

		if (reviewManager == nullptr) return;

		int total = reviewManager->getTotalReviewCount();
		if (total == 0) return;

		Review* allReviews = reviewManager->getAllReviews(); // ✅ Get pointer to review array

		for (int i = 0; i < 3; i++) {
			int index = currentReviewIndex + i;

			Label^ label = nullptr;
			Label^ nameLabel = nullptr;

			if (i == 0) {
				label = reviewLabel1;
				nameLabel = reviewName1;
			}
			else if (i == 1) {
				label = reviewLabel2;
				nameLabel = reviewName2;
			}
			else if (i == 2) {
				label = reviewLabel3;
				nameLabel = reviewName3;
			}

			if (index < total) {
				Review review = allReviews[index]; // ✅ Access via array
				label->Text = gcnew String(review.getComment().c_str());
				nameLabel->Text = gcnew String(review.getUsername().c_str());
			}
			else {
				label->Text = "";
				nameLabel->Text = "";
			}
		}

		// Advance to next set of 3
		currentReviewIndex += 3;
		if (currentReviewIndex >= total)
			currentReviewIndex = 0; // ✅ Loop back to start
	}

	// The left button, to move to previous product
	private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!sampleInventory || sampleInventory->getProductCount() == 0) return;

		currentProductIndex--;
		if (currentProductIndex < 0)
			currentProductIndex = sampleInventory->getProductCount() - 1; // Loop back to last

		updateProductDisplay();
	}

	// The right button, to move to next product
	private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!sampleInventory || sampleInventory->getProductCount() == 0) return;

		currentProductIndex++;
		if (currentProductIndex >= sampleInventory->getProductCount())
			currentProductIndex = 0; // Loop back to first

		updateProductDisplay();
	}
};
}
