#pragma once
#include <msclr/marshal_cppstd.h>
using namespace msclr::interop;
#include "CompanyFile.h"

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
		DashboardForm1(CompanyFile* company);  // Constructor with company

	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Button^ buttonGenerate;
	private: System::Windows::Forms::Label^ labelFileCount;
	private: System::Windows::Forms::PictureBox^ fileBoxBackground;
	private: System::Windows::Forms::Button^ buttonDelete;
	private: System::Windows::Forms::Button^ buttonDownload;
	private: System::Windows::Forms::Button^ buttonPreview;
	private: System::Windows::Forms::PictureBox^ delIcon;
	private: System::Windows::Forms::PictureBox^ copyIcon;
	private: System::Windows::Forms::PictureBox^ editIcon;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Label^ productPriceLabel;
	private: System::Windows::Forms::Label^ productCategoryLabel;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ reviewName3;
	private: System::Windows::Forms::Label^ reviewName2;
	private: System::Windows::Forms::Label^ reviewName1;
	private: System::Windows::Forms::Label^ productNameLabel;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Label^ reviewLabel3;
	private: System::Windows::Forms::Label^ reviewLabel2;
	private: System::Windows::Forms::Label^ reviewLabel1;
	public:

	protected:
	private: System::Windows::Forms::Panel^ panel7;
	protected:
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Panel^ panel11;
	private: System::Windows::Forms::Button^ confirmProduct;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::ComboBox^ comboBoxFilter;
	private: System::Windows::Forms::Button^ buttonAddProduct;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ graphPanel3;
	private: System::Windows::Forms::Panel^ graphPanel4;


	private: System::Windows::Forms::Panel^ graphPanel2;

	private: System::Windows::Forms::Panel^ graphPanel1;

	private: System::Windows::Forms::Label^ prodLabel1;
	private: System::Windows::Forms::Panel^ graphPanel5;

	private: System::Windows::Forms::Label^ prodLabel2;
	private: System::Windows::Forms::Label^ prodLabel5;

	private: System::Windows::Forms::Label^ prodLabel4;

	private: System::Windows::Forms::Label^ prodLabel3;
		   CompanyFile* currentCompany;
		~DashboardForm1()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
	System::ComponentModel::Container^ components;
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









	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;

	private: System::Windows::Forms::Button^ button1;

		   System::Windows::Forms::Button^ currentlyActiveButton;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(DashboardForm1::typeid));
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
			this->rating0 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->prodLabel5 = (gcnew System::Windows::Forms::Label());
			this->prodLabel4 = (gcnew System::Windows::Forms::Label());
			this->prodLabel3 = (gcnew System::Windows::Forms::Label());
			this->prodLabel2 = (gcnew System::Windows::Forms::Label());
			this->prodLabel1 = (gcnew System::Windows::Forms::Label());
			this->graphPanel5 = (gcnew System::Windows::Forms::Panel());
			this->graphPanel4 = (gcnew System::Windows::Forms::Panel());
			this->graphPanel3 = (gcnew System::Windows::Forms::Panel());
			this->graphPanel2 = (gcnew System::Windows::Forms::Panel());
			this->graphPanel1 = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->confirmProduct = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->comboBoxFilter = (gcnew System::Windows::Forms::ComboBox());
			this->buttonAddProduct = (gcnew System::Windows::Forms::Button());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
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
			this->delIcon = (gcnew System::Windows::Forms::PictureBox());
			this->copyIcon = (gcnew System::Windows::Forms::PictureBox());
			this->editIcon = (gcnew System::Windows::Forms::PictureBox());
			this->buttonDelete = (gcnew System::Windows::Forms::Button());
			this->buttonDownload = (gcnew System::Windows::Forms::Button());
			this->buttonPreview = (gcnew System::Windows::Forms::Button());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->buttonGenerate = (gcnew System::Windows::Forms::Button());
			this->labelFileCount = (gcnew System::Windows::Forms::Label());
			this->fileBoxBackground = (gcnew System::Windows::Forms::PictureBox());
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->adminBackgroundUI))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->addMemberUI))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->employeeBackgroundUI))->BeginInit();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rating0))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel10->SuspendLayout();
			this->panel11->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->delIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->copyIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->editIcon))->BeginInit();
			this->panel9->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fileBoxBackground))->BeginInit();
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
			this->panel2->SuspendLayout();
			this->SuspendLayout();
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
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->panel10);
			this->panel1->Controls->Add(this->panel6);
			this->panel1->Controls->Add(this->panel8);
			this->panel1->Controls->Add(this->delIcon);
			this->panel1->Controls->Add(this->copyIcon);
			this->panel1->Controls->Add(this->editIcon);
			this->panel1->Controls->Add(this->buttonDelete);
			this->panel1->Controls->Add(this->buttonDownload);
			this->panel1->Controls->Add(this->buttonPreview);
			this->panel1->Controls->Add(this->panel9);
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
			this->panel1->Controls->Add(this->panel5);
			this->panel1->Controls->Add(this->employeeBackgroundUI);
			this->panel1->Controls->Add(this->demotionUI);
			this->panel1->Controls->Add(this->employeeTrashUI);
			this->panel1->Controls->Add(this->promotionUI);
			this->panel1->Controls->Add(this->adminTrashUI);
			this->panel1->Controls->Add(this->addMemberUI);
			this->panel1->Controls->Add(this->adminBackgroundUI);
			this->panel1->Controls->Add(this->toggleOff);
			this->panel1->Controls->Add(this->toggleOn);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1286, 752);
			this->panel1->TabIndex = 0;
			// 
			// panel3
			// 
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->Controls->Add(this->prodLabel5);
			this->panel3->Controls->Add(this->prodLabel4);
			this->panel3->Controls->Add(this->prodLabel3);
			this->panel3->Controls->Add(this->prodLabel2);
			this->panel3->Controls->Add(this->prodLabel1);
			this->panel3->Controls->Add(this->graphPanel5);
			this->panel3->Controls->Add(this->graphPanel4);
			this->panel3->Controls->Add(this->graphPanel3);
			this->panel3->Controls->Add(this->graphPanel2);
			this->panel3->Controls->Add(this->graphPanel1);
			this->panel3->Controls->Add(this->label9);
			this->panel3->Controls->Add(this->label8);
			this->panel3->Controls->Add(this->label7);
			this->panel3->Controls->Add(this->label6);
			this->panel3->Controls->Add(this->label5);
			this->panel3->Controls->Add(this->label4);
			this->panel3->Controls->Add(this->label3);
			this->panel3->Controls->Add(this->label2);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel3->Location = System::Drawing::Point(257, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1029, 752);
			this->panel3->TabIndex = 63;
			// 
			// prodLabel5
			// 
			this->prodLabel5->AutoEllipsis = true;
			this->prodLabel5->BackColor = System::Drawing::Color::Transparent;
			this->prodLabel5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->prodLabel5->Font = (gcnew System::Drawing::Font(L"LEMON MILK", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->prodLabel5->ForeColor = System::Drawing::Color::White;
			this->prodLabel5->Location = System::Drawing::Point(778, 651);
			this->prodLabel5->Name = L"prodLabel5";
			this->prodLabel5->Size = System::Drawing::Size(112, 37);
			this->prodLabel5->TabIndex = 16;
			this->prodLabel5->Text = L"Cows";
			this->prodLabel5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// prodLabel4
			// 
			this->prodLabel4->AutoEllipsis = true;
			this->prodLabel4->BackColor = System::Drawing::Color::Transparent;
			this->prodLabel4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->prodLabel4->Font = (gcnew System::Drawing::Font(L"LEMON MILK", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->prodLabel4->ForeColor = System::Drawing::Color::White;
			this->prodLabel4->Location = System::Drawing::Point(609, 651);
			this->prodLabel4->Name = L"prodLabel4";
			this->prodLabel4->Size = System::Drawing::Size(112, 37);
			this->prodLabel4->TabIndex = 15;
			this->prodLabel4->Text = L"Cows";
			this->prodLabel4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// prodLabel3
			// 
			this->prodLabel3->AutoEllipsis = true;
			this->prodLabel3->BackColor = System::Drawing::Color::Transparent;
			this->prodLabel3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->prodLabel3->Font = (gcnew System::Drawing::Font(L"LEMON MILK", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->prodLabel3->ForeColor = System::Drawing::Color::White;
			this->prodLabel3->Location = System::Drawing::Point(440, 651);
			this->prodLabel3->Name = L"prodLabel3";
			this->prodLabel3->Size = System::Drawing::Size(112, 37);
			this->prodLabel3->TabIndex = 14;
			this->prodLabel3->Text = L"Cows";
			this->prodLabel3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// prodLabel2
			// 
			this->prodLabel2->AutoEllipsis = true;
			this->prodLabel2->BackColor = System::Drawing::Color::Transparent;
			this->prodLabel2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->prodLabel2->Font = (gcnew System::Drawing::Font(L"LEMON MILK", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->prodLabel2->ForeColor = System::Drawing::Color::White;
			this->prodLabel2->Location = System::Drawing::Point(271, 651);
			this->prodLabel2->Name = L"prodLabel2";
			this->prodLabel2->Size = System::Drawing::Size(112, 37);
			this->prodLabel2->TabIndex = 13;
			this->prodLabel2->Text = L"Cows";
			this->prodLabel2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// prodLabel1
			// 
			this->prodLabel1->AutoEllipsis = true;
			this->prodLabel1->BackColor = System::Drawing::Color::Transparent;
			this->prodLabel1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->prodLabel1->Font = (gcnew System::Drawing::Font(L"LEMON MILK", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->prodLabel1->ForeColor = System::Drawing::Color::White;
			this->prodLabel1->Location = System::Drawing::Point(102, 651);
			this->prodLabel1->Name = L"prodLabel1";
			this->prodLabel1->Size = System::Drawing::Size(112, 37);
			this->prodLabel1->TabIndex = 12;
			this->prodLabel1->Text = L"Cows";
			this->prodLabel1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// graphPanel5
			// 
			this->graphPanel5->BackColor = System::Drawing::Color::Gold;
			this->graphPanel5->Location = System::Drawing::Point(780, 471);
			this->graphPanel5->Name = L"graphPanel5";
			this->graphPanel5->Size = System::Drawing::Size(109, 174);
			this->graphPanel5->TabIndex = 11;
			// 
			// graphPanel4
			// 
			this->graphPanel4->BackColor = System::Drawing::Color::Gold;
			this->graphPanel4->Location = System::Drawing::Point(611, 471);
			this->graphPanel4->Name = L"graphPanel4";
			this->graphPanel4->Size = System::Drawing::Size(109, 174);
			this->graphPanel4->TabIndex = 10;
			// 
			// graphPanel3
			// 
			this->graphPanel3->BackColor = System::Drawing::Color::Gold;
			this->graphPanel3->Location = System::Drawing::Point(442, 471);
			this->graphPanel3->Name = L"graphPanel3";
			this->graphPanel3->Size = System::Drawing::Size(109, 174);
			this->graphPanel3->TabIndex = 9;
			// 
			// graphPanel2
			// 
			this->graphPanel2->BackColor = System::Drawing::Color::Gold;
			this->graphPanel2->Location = System::Drawing::Point(273, 471);
			this->graphPanel2->Name = L"graphPanel2";
			this->graphPanel2->Size = System::Drawing::Size(109, 174);
			this->graphPanel2->TabIndex = 9;
			// 
			// graphPanel1
			// 
			this->graphPanel1->BackColor = System::Drawing::Color::Gold;
			this->graphPanel1->Location = System::Drawing::Point(104, 471);
			this->graphPanel1->Name = L"graphPanel1";
			this->graphPanel1->Size = System::Drawing::Size(109, 174);
			this->graphPanel1->TabIndex = 8;
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
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label4->Font = (gcnew System::Drawing::Font(L"LEMON MILK", 16.2F, System::Drawing::FontStyle::Bold));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(828, 208);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(161, 34);
			this->label4->TabIndex = 2;
			this->label4->Text = L"10";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label3->Font = (gcnew System::Drawing::Font(L"LEMON MILK", 16.2F, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(479, 206);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(171, 40);
			this->label3->TabIndex = 1;
			this->label3->Text = L"10";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
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
			this->label2->Text = L"50";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// panel10
			// 
			this->panel10->AutoScroll = true;
			this->panel10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel10.BackgroundImage")));
			this->panel10->Controls->Add(this->textBox8);
			this->panel10->Controls->Add(this->panel11);
			this->panel10->Controls->Add(this->comboBoxFilter);
			this->panel10->Controls->Add(this->buttonAddProduct);
			this->panel10->Location = System::Drawing::Point(365, 605);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(62, 50);
			this->panel10->TabIndex = 62;
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::Color::White;
			this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Poppins", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->ForeColor = System::Drawing::Color::White;
			this->textBox8->Location = System::Drawing::Point(75, 227);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(219, 20);
			this->textBox8->TabIndex = 11;
			// 
			// panel11
			// 
			this->panel11->BackColor = System::Drawing::Color::Black;
			this->panel11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel11.BackgroundImage")));
			this->panel11->Controls->Add(this->confirmProduct);
			this->panel11->Controls->Add(this->textBox7);
			this->panel11->Controls->Add(this->textBox6);
			this->panel11->Controls->Add(this->textBox5);
			this->panel11->Controls->Add(this->textBox4);
			this->panel11->Controls->Add(this->textBox3);
			this->panel11->Location = System::Drawing::Point(287, 76);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(549, 654);
			this->panel11->TabIndex = 3;
			// 
			// confirmProduct
			// 
			this->confirmProduct->BackColor = System::Drawing::Color::Transparent;
			this->confirmProduct->Cursor = System::Windows::Forms::Cursors::Cross;
			this->confirmProduct->FlatAppearance->BorderSize = 0;
			this->confirmProduct->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->confirmProduct->Font = (gcnew System::Drawing::Font(L"Poppins", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->confirmProduct->Location = System::Drawing::Point(185, 568);
			this->confirmProduct->Name = L"confirmProduct";
			this->confirmProduct->Size = System::Drawing::Size(164, 41);
			this->confirmProduct->TabIndex = 9;
			this->confirmProduct->UseVisualStyleBackColor = false;
			this->confirmProduct->Click += gcnew System::EventHandler(this, &DashboardForm1::confirmAddProduct_Click);
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::Color::Black;
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Poppins", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->ForeColor = System::Drawing::Color::White;
			this->textBox7->Location = System::Drawing::Point(140, 485);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(250, 20);
			this->textBox7->TabIndex = 8;
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::Black;
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Poppins", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->ForeColor = System::Drawing::Color::White;
			this->textBox6->Location = System::Drawing::Point(140, 416);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(250, 20);
			this->textBox6->TabIndex = 7;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::Black;
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Poppins", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->ForeColor = System::Drawing::Color::White;
			this->textBox5->Location = System::Drawing::Point(140, 347);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(250, 20);
			this->textBox5->TabIndex = 6;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::Black;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Poppins", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->ForeColor = System::Drawing::Color::White;
			this->textBox4->Location = System::Drawing::Point(140, 284);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(250, 20);
			this->textBox4->TabIndex = 5;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::Black;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Poppins", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->ForeColor = System::Drawing::Color::White;
			this->textBox3->Location = System::Drawing::Point(141, 214);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(250, 20);
			this->textBox3->TabIndex = 4;
			// 
			// comboBoxFilter
			// 
			this->comboBoxFilter->BackColor = System::Drawing::Color::White;
			this->comboBoxFilter->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBoxFilter->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxFilter->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBoxFilter->Font = (gcnew System::Drawing::Font(L"LEMON MILK", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBoxFilter->FormattingEnabled = true;
			this->comboBoxFilter->Location = System::Drawing::Point(690, 222);
			this->comboBoxFilter->Name = L"comboBoxFilter";
			this->comboBoxFilter->Size = System::Drawing::Size(119, 27);
			this->comboBoxFilter->TabIndex = 2;
			// 
			// buttonAddProduct
			// 
			this->buttonAddProduct->BackColor = System::Drawing::Color::Transparent;
			this->buttonAddProduct->Cursor = System::Windows::Forms::Cursors::Cross;
			this->buttonAddProduct->FlatAppearance->BorderSize = 0;
			this->buttonAddProduct->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonAddProduct->Location = System::Drawing::Point(831, 220);
			this->buttonAddProduct->Name = L"buttonAddProduct";
			this->buttonAddProduct->Size = System::Drawing::Size(136, 32);
			this->buttonAddProduct->TabIndex = 1;
			this->buttonAddProduct->UseVisualStyleBackColor = false;
			this->buttonAddProduct->Click += gcnew System::EventHandler(this, &DashboardForm1::buttonAddProduct_Click);
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
			this->panel6->Size = System::Drawing::Size(204, 127);
			this->panel6->TabIndex = 61;
			// 
			// panel7
			// 
			this->panel7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel7.BackgroundImage")));
			this->panel7->Controls->Add(this->checkBox1);
			this->panel7->Controls->Add(this->button21);
			this->panel7->Controls->Add(this->textBox2);
			this->panel7->Controls->Add(this->textBox1);
			this->panel7->Location = System::Drawing::Point(287, 29);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(567, 685);
			this->panel7->TabIndex = 25;
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
			this->panel8->Location = System::Drawing::Point(792, 29);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(525, 209);
			this->panel8->TabIndex = 60;
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
			this->productPriceLabel->Text = L"-";
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
			this->productCategoryLabel->Text = L"-";
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
			this->reviewName3->Text = L"Carlsen Sam";
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
			this->reviewName2->Text = L"John Hanson";
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
			this->productNameLabel->Text = L"-";
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
			// delIcon
			// 
			this->delIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"delIcon.Image")));
			this->delIcon->Location = System::Drawing::Point(1329, 305);
			this->delIcon->Name = L"delIcon";
			this->delIcon->Size = System::Drawing::Size(20, 30);
			this->delIcon->TabIndex = 59;
			this->delIcon->TabStop = false;
			// 
			// copyIcon
			// 
			this->copyIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"copyIcon.Image")));
			this->copyIcon->Location = System::Drawing::Point(1288, 303);
			this->copyIcon->Name = L"copyIcon";
			this->copyIcon->Size = System::Drawing::Size(29, 34);
			this->copyIcon->TabIndex = 58;
			this->copyIcon->TabStop = false;
			// 
			// editIcon
			// 
			this->editIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"editIcon.Image")));
			this->editIcon->Location = System::Drawing::Point(1288, 262);
			this->editIcon->Name = L"editIcon";
			this->editIcon->Size = System::Drawing::Size(31, 30);
			this->editIcon->TabIndex = 57;
			this->editIcon->TabStop = false;
			// 
			// buttonDelete
			// 
			this->buttonDelete->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(177)), static_cast<System::Int32>(static_cast<System::Byte>(4)),
				static_cast<System::Int32>(static_cast<System::Byte>(4)));
			this->buttonDelete->FlatAppearance->BorderSize = 0;
			this->buttonDelete->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonDelete->Font = (gcnew System::Drawing::Font(L"LEMON MILK", 6.8F, System::Drawing::FontStyle::Bold));
			this->buttonDelete->ForeColor = System::Drawing::Color::White;
			this->buttonDelete->Location = System::Drawing::Point(1291, 363);
			this->buttonDelete->Name = L"buttonDelete";
			this->buttonDelete->Size = System::Drawing::Size(95, 24);
			this->buttonDelete->TabIndex = 11;
			this->buttonDelete->Text = L"DELETE";
			this->buttonDelete->UseVisualStyleBackColor = false;
			// 
			// buttonDownload
			// 
			this->buttonDownload->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->buttonDownload->FlatAppearance->BorderSize = 0;
			this->buttonDownload->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonDownload->Font = (gcnew System::Drawing::Font(L"LEMON MILK", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonDownload->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(122)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->buttonDownload->Location = System::Drawing::Point(1289, 330);
			this->buttonDownload->Name = L"buttonDownload";
			this->buttonDownload->Size = System::Drawing::Size(102, 26);
			this->buttonDownload->TabIndex = 55;
			this->buttonDownload->Text = L"DOWNLOAD";
			this->buttonDownload->UseVisualStyleBackColor = false;
			// 
			// buttonPreview
			// 
			this->buttonPreview->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->buttonPreview->FlatAppearance->BorderSize = 0;
			this->buttonPreview->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonPreview->Font = (gcnew System::Drawing::Font(L"LEMON MILK", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonPreview->ForeColor = System::Drawing::Color::White;
			this->buttonPreview->Location = System::Drawing::Point(1286, 309);
			this->buttonPreview->Name = L"buttonPreview";
			this->buttonPreview->Size = System::Drawing::Size(106, 30);
			this->buttonPreview->TabIndex = 54;
			this->buttonPreview->Text = L"PREVIEW";
			this->buttonPreview->UseVisualStyleBackColor = false;
			// 
			// panel9
			// 
			this->panel9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel9.BackgroundImage")));
			this->panel9->Controls->Add(this->buttonGenerate);
			this->panel9->Controls->Add(this->labelFileCount);
			this->panel9->Controls->Add(this->fileBoxBackground);
			this->panel9->Location = System::Drawing::Point(1172, 658);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(114, 94);
			this->panel9->TabIndex = 52;
			// 
			// buttonGenerate
			// 
			this->buttonGenerate->BackColor = System::Drawing::Color::Transparent;
			this->buttonGenerate->FlatAppearance->BorderSize = 0;
			this->buttonGenerate->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonGenerate->Location = System::Drawing::Point(685, 237);
			this->buttonGenerate->Name = L"buttonGenerate";
			this->buttonGenerate->Size = System::Drawing::Size(228, 47);
			this->buttonGenerate->TabIndex = 1;
			this->buttonGenerate->UseVisualStyleBackColor = false;
			this->buttonGenerate->Click += gcnew System::EventHandler(this, &DashboardForm1::buttonGenerate_Click);
			// 
			// labelFileCount
			// 
			this->labelFileCount->AutoSize = true;
			this->labelFileCount->BackColor = System::Drawing::Color::Transparent;
			this->labelFileCount->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->labelFileCount->Font = (gcnew System::Drawing::Font(L"LEMON MILK", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelFileCount->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->labelFileCount->Location = System::Drawing::Point(474, 241);
			this->labelFileCount->Name = L"labelFileCount";
			this->labelFileCount->Size = System::Drawing::Size(41, 43);
			this->labelFileCount->TabIndex = 0;
			this->labelFileCount->Text = L"0";
			// 
			// fileBoxBackground
			// 
			this->fileBoxBackground->BackColor = System::Drawing::Color::Transparent;
			this->fileBoxBackground->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"fileBoxBackground.BackgroundImage")));
			this->fileBoxBackground->Location = System::Drawing::Point(1033, 316);
			this->fileBoxBackground->Name = L"fileBoxBackground";
			this->fileBoxBackground->Size = System::Drawing::Size(263, 136);
			this->fileBoxBackground->TabIndex = 53;
			this->fileBoxBackground->TabStop = false;
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
			this->button5->Location = System::Drawing::Point(0, 262);
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
			this->button3->Location = System::Drawing::Point(0, 174);
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
			this->button4->Location = System::Drawing::Point(0, 218);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(257, 32);
			this->button4->TabIndex = 2;
			this->button4->Text = L"INVENTORY";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &DashboardForm1::button4_Click);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->adminBackgroundUI))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->addMemberUI))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->employeeBackgroundUI))->EndInit();
			this->panel5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rating0))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel10->ResumeLayout(false);
			this->panel10->PerformLayout();
			this->panel11->ResumeLayout(false);
			this->panel11->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel8->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->delIcon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->copyIcon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->editIcon))->EndInit();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fileBoxBackground))->EndInit();
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
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
private:
	int currentProductIndex = 0; // Track which product is showing
	int productRowCount = 0;
	String^ email = "talhasbzzz@gmail.com";
	bool toggle15 = false;
	bool toggle16 = false;
	bool toggle17 = false;
	bool toggle18 = false;
	bool toggle19 = false;

		
	private: System::Void DashboardForm1_Load(System::Object^ sender, System::EventArgs^ e) {

		MessageBox::Show("DashboardForm1_Load");	
		// Placeholder for form load logic
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

		confirmProduct->FlatAppearance->MouseOverBackColor = confirmProduct->BackColor;
		confirmProduct->FlatAppearance->MouseDownBackColor = confirmProduct->BackColor;

		buttonAddProduct->FlatAppearance->MouseOverBackColor = buttonAddProduct->BackColor;
		buttonAddProduct->FlatAppearance->MouseDownBackColor = buttonAddProduct->BackColor;

		button21->FlatAppearance->MouseOverBackColor = button21->BackColor;
		button21->FlatAppearance->MouseDownBackColor = button21->BackColor;
		panel7->Visible = false; // Initially hide the add user panel 
		panel11->Visible = false; // Initially hide the add product panel

		panel3->Visible = false;
		panel4->Visible = false;
		panel5->Visible = false;
		panel6->Visible = false;
		panel8->Visible = false;
		panel9->Visible = false;
		panel10->Visible = false;

		graphPanel1->Visible = false;
		graphPanel2->Visible = false;
		graphPanel3->Visible = false;
		graphPanel4->Visible = false;
		graphPanel5->Visible = false;
		prodLabel1->Visible = false;
		prodLabel2->Visible = false;
		prodLabel3->Visible = false;
		prodLabel4->Visible = false;
		prodLabel5->Visible = false;

		button22->FlatAppearance->MouseOverBackColor = Color::Transparent;
		button22->FlatAppearance->MouseDownBackColor = Color::Transparent;
		button23->FlatAppearance->MouseDownBackColor = Color::Transparent;
		button23->FlatAppearance->MouseOverBackColor = Color::Transparent;

		// Show the first product when form loads
		updateProductDisplay();

		buttonGenerate->FlatStyle = FlatStyle::Flat;
		buttonGenerate->FlatAppearance->BorderSize = 0;
		buttonGenerate->FlatAppearance->MouseOverBackColor = buttonGenerate->BackColor;
		buttonGenerate->FlatAppearance->MouseDownBackColor = buttonGenerate->BackColor;
		labelFileCount->Text = "0";

		// For inventory panel
		comboBoxFilter->Items->Clear();
		comboBoxFilter->Items->Add("ID");
		comboBoxFilter->Items->Add("Product");
		comboBoxFilter->Items->Add("Price");
		comboBoxFilter->Items->Add("Category");
		comboBoxFilter->Items->Add("Stock");
		comboBoxFilter->Items->Add("Sales");
		comboBoxFilter->Items->Add("Action");

		comboBoxFilter->SelectedIndex = 0;



		// Load users with proper exception handling
		try {
			LoadUsersIntoUI();
		}
		catch (std::exception& ex) {
			MessageBox::Show(gcnew String(ex.what()), "LoadUsersIntoUI Error");
		}
		catch (Exception^ ex) {
			MessageBox::Show("LoadUsersIntoUI() crashed: " + ex->Message, "Error");
		}

		// Load products with proper exception handling
		try {
			loadProductsIntoUI();
		}
		catch (std::exception& ex) {
			MessageBox::Show(gcnew String(ex.what()), "loadProductsIntoUI Error");
		}
		catch (Exception^ ex) {
			MessageBox::Show("loadProductsIntoUI() crashed: " + ex->Message, "Error");
		}

		Product** products = currentCompany->getInventory()->getProducts();
		int count = currentCompany->getInventory()->getProductCount();

		if (currentCompany->getInventory()->getProductCount() == 0) {
			// Ensure at least an empty file is created with headers
			currentCompany->saveProductsToFile();
		}

		if (count >= 1 && products[0]->getReviewCount() == 0) {
			// Add dummy reviews to first product
			products[0]->addReview(Review("Ali", 5, "Great build quality!", time(0)));
			products[0]->addReview(Review("Sana", 4, "Nice and smooth.", time(0)));
			products[0]->addReview(Review("Zara", 3, "Average performance.", time(0)));
			products[0]->addReview(Review("Omar", 2, "Not worth the price.", time(0)));

			currentCompany->saveProductsToFile();
		}

		if (currentCompany == nullptr) {
			MessageBox::Show("Company is missing!");
			return;
		}
		if (currentCompany->getCurrentUser() == nullptr) {
			label1->Text = "No User Logged In";
		}


		if (currentCompany != nullptr && currentCompany->getCurrentUser() != nullptr) {
			string username = currentCompany->getCurrentUser()->getUsername();
			label1->Text = gcnew String(username.c_str());
		}
		else {
			label1->Text = "No user logged in";
		}

		showTopSellingProducts();
	}

	void loadProductsIntoUI() {
		if (currentCompany == nullptr || currentCompany->getInventory() == nullptr) {
			MessageBox::Show("Company or inventory is missing!");
			return;
		}

		currentCompany->loadProductsFromFile();
		Product** products = currentCompany->getInventory()->getProducts();
		int count = currentCompany->getInventory()->getProductCount();

		productRowCount = 0;
		for (int i = 0; i < count; i++) {
			if (products[i] == nullptr || products[i]->getName() == nullptr) {
				continue; // Skip invalid products
			}
			AddProductRow(productRowCount++, products[i]);
		}
	}

	void LoadUsersIntoUI()
	{
		if (currentCompany == nullptr || currentCompany->getDirectory() == nullptr) {
			MessageBox::Show("Company or directory is missing!");
			return;
		}

		currentCompany->loadUsersFromFile();
		Users** arr = currentCompany->getDirectory()->users;
		int count = currentCompany->getDirectory()->userCount;

		int posX = 61;
		int posY = cardStartY;

		memberCount = 0;

		for (int i = 0; i < count; i++) {
			if (arr[i] == nullptr) continue;

			string role = arr[i]->getRole();
			string username = arr[i]->getUsername();
			string email = arr[i]->getemail();

			if (role == "Owner") {
				label15->Text = gcnew String(username.c_str()); // Owner label
				label14->Text = gcnew String(email.c_str()); // Owner email
				continue;
			}

			// Setup for other roles: Admin or Employee
			bool isAdmin = (role == "Admin");

			PictureBox^ newCard = gcnew PictureBox();
			newCard->Name = isAdmin ? "adminCard_" + (memberCount + 1).ToString() : "memberCard_" + (memberCount + 1).ToString();
			newCard->Image = isAdmin ? adminBackgroundUI->Image : employeeBackgroundUI->Image;
			newCard->Size = isAdmin ? adminBackgroundUI->Size : employeeBackgroundUI->Size;
			newCard->SizeMode = PictureBoxSizeMode::Normal;
			newCard->BackColor = Color::Transparent;
			newCard->Location = Point(posX, posY);
			newCard->Visible = true;
			panel6->Controls->Add(newCard);

			// Name label
			Label^ nameLabel = gcnew Label();
			nameLabel->Name = "nameLabel_" + (memberCount + 1).ToString();
			nameLabel->Text = gcnew String(username.c_str());
			nameLabel->Font = gcnew System::Drawing::Font("Poppins SemiBold", 7.8F, FontStyle::Bold);
			nameLabel->ForeColor = isAdmin ? Color::Black : Color::White;
			nameLabel->TextAlign = ContentAlignment::MiddleCenter;
			nameLabel->AutoSize = true;
			nameLabel->Location = Point(79, 14);
			nameLabel->BackColor = Color::Transparent;
			nameLabel->Parent = newCard;
			newCard->Controls->Add(nameLabel);

			// Email label
			Label^ emailLabel = gcnew Label();
			emailLabel->Name = "emailLabel_" + (memberCount + 1).ToString();
			emailLabel->Text = gcnew String(email.c_str());
			emailLabel->Font = gcnew System::Drawing::Font("Poppins SemiBold", 7.8F, FontStyle::Bold);
			emailLabel->ForeColor = isAdmin ? Color::Black : Color::White;
			emailLabel->TextAlign = ContentAlignment::MiddleCenter;
			emailLabel->AutoSize = true;
			emailLabel->Location = Point(243, 14);
			emailLabel->BackColor = Color::Transparent;
			emailLabel->Parent = newCard;
			newCard->Controls->Add(emailLabel);

			// Role Button
			Button^ roleBtn = gcnew Button();
			roleBtn->Name = "roleBtn_" + (memberCount + 1).ToString();
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
			roleBtn->Cursor = Cursors::Hand;
			roleBtn->Parent = newCard;
			newCard->Controls->Add(roleBtn);

			// Trash Button
			Button^ trashBtn = gcnew Button();
			trashBtn->Name = "trashBtn_" + (memberCount + 1).ToString();
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
			trashBtn->Cursor = Cursors::Hand;
			trashBtn->Parent = newCard;
			newCard->Controls->Add(trashBtn);

			// Final adjustments
			memberCount++;
			posY += 60;
		}

		// Move Add Member button accordingly
		button20->Location = Point(button20->Location.X, cardStartY + (memberCount * 60));
		button20->Visible = (memberCount < 5);
	}

	void showTopSellingProducts() {

		// Some dashboard cod
		Product** products = currentCompany->getInventory()->getProducts();
		int count = currentCompany->getInventory()->getProductCount();

		double balance = 0;
		int totalSales = 0;
		int totalQuantity = 0;

		for (int i = 0; i < count; i++) {
			if (!products[i]) continue;
			balance += products[i]->getPrice() * products[i]->getQuantity();
			totalSales += products[i]->getTotalSales();
			totalQuantity += products[i]->getQuantity();
		}

		// Assign to labels
		label2->Text = balance.ToString("N0");      // e.g., $100,000
		label3->Text = totalSales.ToString("N0");           // e.g., 100,000
		label4->Text = totalQuantity.ToString("N0");       // e.g., 100,000


		const int MAX = 5;
		int topIndices[MAX] = { -1, -1, -1, -1, -1 };
		double topRevenues[MAX] = { -1, -1, -1, -1, -1 };

		// Step 1: Find top 5 revenue products
		for (int i = 0; i < count; ++i) {
			if (!products[i]) continue;

			double revenue = products[i]->getPrice() * products[i]->getTotalSales();

			// Insert in sorted position
			for (int j = 0; j < MAX; j++) {
				if (revenue > topRevenues[j]) {
					// Shift down
					for (int k = MAX - 1; k > j; --k) {
						topRevenues[k] = topRevenues[k - 1];
						topIndices[k] = topIndices[k - 1];
					}
					topRevenues[j] = revenue;
					topIndices[j] = i;
					break;
				}
			}
		}

		// Get max revenue for normalization
		double maxRevenue = topRevenues[0] > 0 ? topRevenues[0] : 1;
		double totalTopRevenue = 0;

		// Pre-declared arrays
		cli::array<Panel^>^ graphPanels = gcnew cli::array<Panel^>(5) { graphPanel1, graphPanel2, graphPanel3, graphPanel4, graphPanel5 };
		cli::array<Label^>^ prodLabels = gcnew cli::array<Label^>(5) { prodLabel1, prodLabel2, prodLabel3, prodLabel4, prodLabel5 };

		// Step 2: Render panels and labels
		for (int i = 0; i < MAX; i++) {
			if (topIndices[i] != -1) {
				Product* p = products[topIndices[i]];
				double revenue = topRevenues[i];
				totalTopRevenue += revenue;

				int baseY = 645; // Y where the bar should *end*
				double logRev = log10(revenue + 1);
				double logMax = log10(maxRevenue + 1);
				int height = (int)((logRev / logMax) * 174.0);
				if (height < 5) height = 5;

				graphPanels[i]->Height = height;
				graphPanels[i]->Top = baseY - height;  // Shift upward instead of downward
				graphPanels[i]->Visible = true;

				prodLabels[i]->Text = gcnew String(p->getName());
				prodLabels[i]->Visible = true;
			}
			else {
				graphPanels[i]->Visible = false;
				prodLabels[i]->Visible = false;
			}
		}

		label5->Text = totalTopRevenue.ToString("N0");
	}



	// KeyPress handler for text boxes to only take numeric inputs
	private: System::Void textBox_KeyPress_IntegersOnly(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsControl(e->KeyChar) && !Char::IsDigit(e->KeyChar)) {
			e->Handled = true; // Block non-digit keys
		}
	}
	
	// KeyPress handler for text boxes to only take decimal inputs
	private: System::Void textBox_KeyPress_Decimals(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		TextBox^ tb = dynamic_cast<TextBox^>(sender);
		if (tb == nullptr) return;

		if (!Char::IsControl(e->KeyChar) && !Char::IsDigit(e->KeyChar) && e->KeyChar != '.') {
			e->Handled = true; // Block non-digit and non-decimal keys
			return;
		}

		// Allow only one decimal point
		if (e->KeyChar == '.' && tb->Text->Contains(".")) {
			e->Handled = true; // Block additional decimal points
		}
	}

	// KeyPress handler for text boxes to only take text inputs
	private: System::Void textBox_KeyPress_TextOnly(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsControl(e->KeyChar) && !Char::IsLetter(e->KeyChar) && e->KeyChar != ' ') {
			e->Handled = true; // Block non-letter and non-space keys
		}
	}


	// Function to update the labels
	void updateProductDisplay() {
		if (!currentCompany || !currentCompany->getInventory() || currentCompany->getInventory()->getProductCount() == 0)
			return;

		Product** products = currentCompany->getInventory()->getProducts();

		if (currentProductIndex >= currentCompany->getInventory()->getProductCount())
			currentProductIndex = 0;

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
		cli::array<Panel^>^ panels = gcnew cli::array<Panel^>(7) { panel3, panel4, panel5, panel6, panel8, panel9, panel10};
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
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		SetActiveButton(button3);
		TogglePanel(panel9);
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		SetActiveButton(button4);
		TogglePanel(panel10);
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

	// This is the button to add a new member
	private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
		if (memberCount >= 5) {
			button20->Visible = false;
			return;
		}

		Users* user = currentCompany->getCurrentUser();
		if (user == nullptr) {
			MessageBox::Show("No user is currently logged in.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		if (user->getRole() != "Owner") {
			MessageBox::Show("Only the Owner can add new users.", "Access Denied", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		panel7->BringToFront();
		panel7->Visible = true;
	}

	private: System::Void RoleButton_Click(System::Object^ sender, System::EventArgs^ e) {
		Users* current = currentCompany->getCurrentUser();
		if (current == nullptr) {
			MessageBox::Show("No user is currently logged in.", "Fatal Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		string role = current->getRole();
		if (role != "Owner" && role != "Admin") {
			MessageBox::Show("Only Owner or Admin can change roles.", "Access Denied", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		Button^ clickedRoleBtn = dynamic_cast<Button^>(sender);
		if (clickedRoleBtn == nullptr) return;

		String^ name = clickedRoleBtn->Name;
		int underscoreIndex = name->LastIndexOf('_');
		if (underscoreIndex == -1 || underscoreIndex == name->Length - 1) return;

		int index = Int32::Parse(name->Substring(underscoreIndex + 1));
		String^ memberCardName = "memberCard_" + index;
		String^ adminCardName = "adminCard_" + index;
		String^ trashBtnName = "trashBtn_" + index;
		String^ nameLabelName = "nameLabel_" + index;
		String^ emailLabelName = "emailLabel_" + index;

		PictureBox^ card = nullptr;
		for each (Control ^ ctrl in panel6->Controls) {
			if (ctrl->Name == memberCardName || ctrl->Name == adminCardName) {
				card = dynamic_cast<PictureBox^>(ctrl);
				break;
			}
		}
		if (card == nullptr) {
			MessageBox::Show("❌ Could not find card: " + memberCardName + " or " + adminCardName);
			return;
		}

		Button^ trashBtn = nullptr;
		for each (Control ^ ctrl in card->Controls) {
			if (ctrl->Name == trashBtnName) {
				trashBtn = dynamic_cast<Button^>(ctrl);
				break;
			}
		}
		if (trashBtn == nullptr) {
			MessageBox::Show("❌ Could not find trash button: " + trashBtnName);
			return;
		}

		Label^ nameLabel = dynamic_cast<Label^>(card->Controls[nameLabelName]);
		Label^ emailLabel = dynamic_cast<Label^>(card->Controls[emailLabelName]);

		// Check if the user is modifying their own role
		string email = marshal_as<string>(emailLabel->Text);
		if (current->getemail() == email && role == "Admin" && card->Name->StartsWith("adminCard_")) {
			MessageBox::Show("Admins cannot demote themselves.", "Access Denied", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		bool isEmployee = card->Name->StartsWith("memberCard_");
		if (isEmployee) {
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

		Users* user = currentCompany->getUserByMail(email);
		if (user != nullptr) {
			if (isEmployee)
				user->setRole("Admin");
			else
				user->setRole("Employee");
			currentCompany->saveUsersToFile();
			cout << "Role updated for user: " << user->getUsername() << endl;
		}
	}

	private: System::Void TrashButton_Click(System::Object^ sender, System::EventArgs^ e) {

		string role = currentCompany->getCurrentUser()->getRole();
		if (role != "Owner") {
			MessageBox::Show("Only Owner can delete members.", "Access Denied");
			return;
		}

		Button^ clickedTrashBtn = dynamic_cast<Button^>(sender);
		if (clickedTrashBtn == nullptr) return;

		int index = Convert::ToInt32(clickedTrashBtn->Name->Substring(clickedTrashBtn->Name->LastIndexOf('_') + 1));

		PictureBox^ targetCard = nullptr;
		for each (Control ^ ctrl in panel6->Controls) {
			if ((ctrl->Name == "memberCard_" + index || ctrl->Name == "adminCard_" + index) && dynamic_cast<PictureBox^>(ctrl)) {
				targetCard = dynamic_cast<PictureBox^>(ctrl);
				break;
			}
		}

		if (targetCard == nullptr) {
			MessageBox::Show("Could not find card for deletion.");
			return;
		}

		// 🔍 Extract email from the email label inside the card
		String^ emailLabelName = "emailLabel_" + index.ToString();
		Label^ emailLabel = dynamic_cast<Label^>(targetCard->Controls[emailLabelName]);

		if (emailLabel == nullptr) {
			MessageBox::Show("Email label not found in card.");
			return;
		}

		string emailToDelete = marshal_as<string>(emailLabel->Text);

		// ✅ Delete user from UserManager
		Users** arr = currentCompany->getDirectory()->users;
		int& count = currentCompany->getDirectory()->userCount;

		for (int i = 0; i < count; ++i) {
			if (arr[i] && arr[i]->getemail() == emailToDelete) {
				// Clear currentUser if it's the one being deleted
				Users* current = currentCompany->getDirectory()->getCurrentUser();
				if (current && current->getemail() == emailToDelete) {
					currentCompany->getDirectory()->logout();
				}

				delete arr[i];
				for (int j = i; j < count - 1; ++j)
					arr[j] = arr[j + 1];
				arr[count - 1] = nullptr;
				count--;
				break;
			}
		}

		currentCompany->saveUsersToFile();

		// ✅ Remove from UI
		panel6->Controls->Remove(targetCard);
		delete targetCard;

		// ✅ Shift cards above down
		for (int i = index + 1; i <= memberCount; ++i) {
			String^ cardName = "memberCard_" + i;
			String^ adminName = "adminCard_" + i;

			PictureBox^ card = dynamic_cast<PictureBox^>(panel6->Controls[cardName]);
			if (card == nullptr)
				card = dynamic_cast<PictureBox^>(panel6->Controls[adminName]);

			if (card == nullptr) continue;

			// Move card up
			card->Location = Point(card->Location.X, card->Location.Y - 60);

			// Rename card and inner controls
			bool wasAdmin = card->Name->StartsWith("adminCard_");
			card->Name = wasAdmin ? "adminCard_" + (i - 1) : "memberCard_" + (i - 1);

			for each (Control ^ c in card->Controls) {
				if (c->Name == "roleBtn_" + i) c->Name = "roleBtn_" + (i - 1);
				if (c->Name == "trashBtn_" + i) c->Name = "trashBtn_" + (i - 1);
				if (c->Name == "nameLabel_" + i) c->Name = "nameLabel_" + (i - 1);
				if (c->Name == "emailLabel_" + i) c->Name = "emailLabel_" + (i - 1);
			}
		}

		// Update state
		memberCount--;
		if (memberCount < 5) button20->Visible = true;
		button20->Location = Point(button20->Location.X, button20->Location.Y - 60);

		MessageBox::Show("User deleted successfully.");
	}


	// Add user button in the add user panel: Applying logic to move buttons and the employee / admin card to new position after pressing this button
	private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
		// Hide the Add User panel
		panel7->Visible = false;

		// Get user input
		String^ newUsername = textBox1->Text;
		String^ newEmail = textBox2->Text;
		bool isAdmin = checkBox1->Checked;

		if (newUsername->Trim() == "" || newEmail->Trim() == "") {
			MessageBox::Show("Please enter both username and email.", "Missing Data", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		// Convert inputs
		string sUsername = marshal_as<string>(newUsername);
		string sEmail = marshal_as<string>(newEmail);
		string sRole = isAdmin ? "Admin" : "Employee";

		// Check for duplicates (optional but recommended)
		if (currentCompany->getUserByMail(sEmail) != nullptr) {
			MessageBox::Show("A user with this email already exists.", "Duplicate User", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		// Create user object
		Users* newUser = new Users();
		newUser->username = sUsername;
		newUser->email = sEmail;
		newUser->password = ""; // Empty for now, user will set this later
		newUser->role = sRole;

		// Register and save
		bool added = currentCompany->registerUser(newUser);
		if (!added) {
			MessageBox::Show("Failed to register user.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			delete newUser;
			return;
		}
		currentCompany->saveUsersToFile();

		// Calculate card position
		int posX = 61;
		int posY = cardStartY + (memberCount * 60);

		// Create the user card
		PictureBox^ newCard = gcnew PictureBox();
		newCard->Name = isAdmin ? "adminCard_" + (memberCount + 1).ToString() : "memberCard_" + (memberCount + 1).ToString(); // Naming
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
		newCard->Controls->Add(nameLabel);

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
		newCard->Controls->Add(emailLabel);

		// Promotion/Demotion Button
		Button^ roleBtn = gcnew Button();
		roleBtn->Name = "roleBtn_" + (memberCount+1).ToString(); // Naming
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

		// Trash Button
		Button^ trashBtn = gcnew Button();
		trashBtn->Name = "trashBtn_" + (memberCount+1).ToString(); // Naming
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

		textBox1->Text = "";
		textBox2->Text = "";
	}

	int currentReviewIndex = 0; // Tracks which set of 3 to show
	private: System::Void label19_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!currentCompany || !currentCompany->getInventory()) return;

		Product* prod = currentCompany->getInventory()->getProducts()[currentProductIndex];
		if (!prod || prod->getReviewCount() == 0) return;

		Review* allReviews = prod->getAllReviews();
		int total = prod->getReviewCount();

		for (int i = 0; i < 3; i++) {
			int index = currentReviewIndex + i;

			Label^ label = nullptr;
			Label^ nameLabel = nullptr;

			if (i == 0) { label = reviewLabel1; nameLabel = reviewName1; }
			else if (i == 1) { label = reviewLabel2; nameLabel = reviewName2; }
			else if (i == 2) { label = reviewLabel3; nameLabel = reviewName3; }

			if (index < total) {
				Review review = allReviews[index];
				label->Text = gcnew String(review.getComment().c_str());
				nameLabel->Text = gcnew String(review.getUsername().c_str());
			}
			else {
				label->Text = "";
				nameLabel->Text = "";
			}
		}

		currentReviewIndex += 3;
		if (currentReviewIndex >= total)
			currentReviewIndex = 0;

		delete[] allReviews; // clean up if getAllReviews allocates new array
	}


	// The left button, to move to previous product
	private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!currentCompany || !currentCompany->getInventory()) return;

		int count = currentCompany->getInventory()->getProductCount();
		if (count == 0) return;

		currentProductIndex--;
		if (currentProductIndex < 0)
			currentProductIndex = count - 1;

		updateProductDisplay();
		currentReviewIndex = 0;
		label19_Click(nullptr, nullptr);
	}

	// The right button, to move to next product
	private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!currentCompany || !currentCompany->getInventory()) return;

		int count = currentCompany->getInventory()->getProductCount();
		if (count == 0) return;

		currentProductIndex++;
		if (currentProductIndex >= count)
			currentProductIndex = 0;

		updateProductDisplay();
		currentReviewIndex = 0;
		label19_Click(nullptr, nullptr);
	}


	// Generate button in reports panel

	private: System::Void previewBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string productPath = currentCompany->getCompanyName() + "Inventory.csv";
		String^ path = gcnew String(productPath.c_str());

		if (System::IO::File::Exists(path)) {
			System::Diagnostics::Process::Start("notepad.exe", path);
		}
		else {
			MessageBox::Show("Inventory file does not exist. Please generate it first.", "File Not Found", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void downloadBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		// Ensure latest inventory data is saved to CSV
		currentCompany->saveProductsToFile();

		// Construct file path
		std::string productPath = currentCompany->getCompanyName() + "Inventory.csv";
		String^ sourcePath = gcnew String(productPath.c_str());

		// File Save Dialog
		SaveFileDialog^ dialog = gcnew SaveFileDialog();
		dialog->Filter = "CSV Files (*.csv)|*.csv";
		dialog->Title = "Download Product Inventory";
		dialog->FileName = gcnew String(productPath.c_str());

		if (dialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			try {
				System::IO::File::Copy(sourcePath, dialog->FileName, true);
				MessageBox::Show("Inventory file downloaded successfully!", "Download", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			catch (Exception^ ex) {
				MessageBox::Show("Error copying file:\n" + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}



	private: System::Void deleteBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ clickedBtn = dynamic_cast<Button^>(sender);
		if (clickedBtn == nullptr) return;

		// Extract index from name (e.g., "deleteBtn3" → "3")
		String^ name = clickedBtn->Name;
		if (!name->StartsWith("deleteBtn")) return;
		String^ indexStr = name->Substring(9);

		// Names to delete
		String^ boxName = "newBox" + indexStr;
		String^ previewName = "previewBtn" + indexStr;
		String^ downloadName = "downloadBtn" + indexStr;
		String^ labelName = "fileLabel" + indexStr;

		// Remove the specific controls
		cli::array<String^>^ namesToDelete = { boxName, previewName, downloadName, name, labelName};
		for each (String ^ ctrlName in namesToDelete) {
			Control^ ctrl = panel9->Controls[ctrlName];
			if (ctrl != nullptr) {
				panel9->Controls->Remove(ctrl);
				delete ctrl;
			}
		}

		// Rearrange remaining dynamic controls only
		ArrayList^ boxes = gcnew ArrayList();
		ArrayList^ previews = gcnew ArrayList();
		ArrayList^ downloads = gcnew ArrayList();
		ArrayList^ deletes = gcnew ArrayList();
		ArrayList^ labels = gcnew ArrayList();

		for each (Control ^ ctrl in panel9->Controls) {
			if (ctrl->Name->StartsWith("newBox")) boxes->Add(ctrl);
			else if (ctrl->Name->StartsWith("previewBtn")) previews->Add(ctrl);
			else if (ctrl->Name->StartsWith("downloadBtn")) downloads->Add(ctrl);
			else if (ctrl->Name->StartsWith("deleteBtn")) deletes->Add(ctrl);
			else if (ctrl->Name->StartsWith("fileLabel")) labels->Add(ctrl);
		}

		int count = boxes->Count;

		for (int i = 0; i < count; i++) {
			int col = i % 3;
			int row = i / 3;
			String^ suffix = (i + 1).ToString();

			PictureBox^ box = static_cast<PictureBox^>(boxes[i]);
			Button^ preview = static_cast<Button^>(previews[i]);
			Button^ download = static_cast<Button^>(downloads[i]);
			Button^ del = static_cast<Button^>(deletes[i]);
			Label^ label = static_cast<Label^>(labels[i]);

			box->Location = Point(77 + 308 * col, 329 + 158 * row);
			box->Name = "newBox" + suffix;

			preview->Location = Point(86 + 308 * col, 421 + 158 * row);
			preview->Name = "previewBtn" + suffix;

			download->Location = Point(225 + 308 * col, 410 + 158 * row);
			download->Name = "downloadBtn" + suffix;

			del->Location = Point(230 + 308 * col, 436 + 158 * row);
			del->Name = "deleteBtn" + suffix;

			label->Location = Point(84 + 308 * col, 335 + 158 * row);
			label->Name = "fileLabel" + suffix;
			label->Text = "FILE " + suffix;
		}

		// Update file count label
		labelFileCount->Text = count.ToString();
	}


	private: System::Void buttonGenerate_Click(System::Object^ sender, System::EventArgs^ e) {
		currentCompany->saveProductsToFile();  // Save the latest snapshot of products to file

		int fileCount = panel9->Controls->Count / 5; // Assuming each set adds 1 picturebox + 3 buttons
		if (fileCount == 6)
		{
			MessageBox::Show("You have reached the maximum number of files");
			return;
		}


		// Base coordinates
		int startX = 77;
		int startY = 329;
		int spacingX = 308;
		int spacingY = 158;

		// Calculating new position based on fileCount
		int col = fileCount % 3; // 0 to 2
		int row = fileCount / 3;

		String^ suffix = (fileCount + 1).ToString();

		// ------------------- PictureBox -------------------
		PictureBox^ newBox = gcnew PictureBox();
		newBox->Name = "newBox" + suffix;
		newBox->Location = Point(startX + spacingX * col, startY + spacingY * row);
		newBox->Size = fileBoxBackground->Size;
		newBox->Image = fileBoxBackground->BackgroundImage;
		newBox->SizeMode = PictureBoxSizeMode::Normal;
		newBox->BackColor = Color::Transparent;
		newBox->Visible = true;
		panel9->Controls->Add(newBox);
		newBox->BringToFront();

		// ------------------- Preview Button -------------------
		Button^ previewBtn = gcnew Button();
		previewBtn->Name = "previewBtn" + suffix;
		previewBtn->Location = Point(86 + spacingX * col, 421 + spacingY * row);
		previewBtn->Cursor = Cursors::Hand;
		previewBtn->Size = buttonPreview->Size;
		previewBtn->Text = buttonPreview->Text;
		previewBtn->FlatStyle = buttonPreview->FlatStyle;
		previewBtn->BackColor = buttonPreview->BackColor;
		previewBtn->ForeColor = buttonPreview->ForeColor;
		previewBtn->Font = buttonPreview->Font;
		previewBtn->FlatAppearance->BorderSize = 0;
		previewBtn->Visible = true;
		previewBtn->Click += gcnew System::EventHandler(this, &DashboardForm1::previewBtn_Click);
		panel9->Controls->Add(previewBtn);
		previewBtn->BringToFront();

		// ------------------- Download Button -------------------
		Button^ downloadBtn = gcnew Button();
		downloadBtn->Name = "downloadBtn" + suffix;
		downloadBtn->Location = Point(225 + spacingX * col, 410 + spacingY * row);
		downloadBtn->Cursor = Cursors::Hand;
		downloadBtn->Size = buttonDownload->Size;
		downloadBtn->Text = buttonDownload->Text;
		downloadBtn->FlatStyle = buttonDownload->FlatStyle;
		downloadBtn->BackColor = buttonDownload->BackColor;
		downloadBtn->ForeColor = buttonDownload->ForeColor;
		downloadBtn->Font = buttonDownload->Font;
		downloadBtn->FlatAppearance->BorderSize = 0;
		downloadBtn->Visible = true;
		downloadBtn->Click += gcnew System::EventHandler(this, &DashboardForm1::downloadBtn_Click);
		panel9->Controls->Add(downloadBtn);
		downloadBtn->BringToFront();

		// ------------------- Delete Button -------------------
		Button^ deleteBtn = gcnew Button();
		deleteBtn->Name = "deleteBtn" + suffix;
		deleteBtn->Location = Point(230 + spacingX * col, 436 + spacingY * row);
		deleteBtn->Cursor = Cursors::Hand;
		deleteBtn->Size = buttonDelete->Size;
		deleteBtn->Text = buttonDelete->Text;
		deleteBtn->FlatStyle = buttonDelete->FlatStyle;
		deleteBtn->BackColor = buttonDelete->BackColor;
		deleteBtn->ForeColor = buttonDelete->ForeColor;
		deleteBtn->Font = buttonDelete->Font;
		deleteBtn->FlatAppearance->BorderSize = 0;
		deleteBtn->Visible = true;
		deleteBtn->Click += gcnew System::EventHandler(this, &DashboardForm1::deleteBtn_Click);
		panel9->Controls->Add(deleteBtn);
		deleteBtn->BringToFront();

		// ------------------- Label -------------------
		Label^ fileLabel = gcnew Label();
		fileLabel->Name = "fileLabel" + (fileCount + 1).ToString();
		fileLabel->Location = Point(84 + spacingX * col, 335 + spacingY * row);
		fileLabel->Text = "FILE_" + (fileCount + 1).ToString();
		fileLabel->ForeColor = Color::FromArgb(140, 82, 255);
		fileLabel->Font = gcnew System::Drawing::Font("LEMONMILK", 14, FontStyle::Bold);
		fileLabel->AutoSize = false;
		fileLabel->BackColor = Color::FromArgb(31, 31, 31);
		panel9->Controls->Add(fileLabel);
		fileLabel->BringToFront();	

		// Update file count label
		labelFileCount->Text = (fileCount + 1).ToString();
	}

	private: System::Void buttonAddProduct_Click(System::Object^ sender, System::EventArgs^ e) {
		// Clear all data
		textBox3->Text = "";
		textBox4->Text = "";
		textBox5->Text = "";
		textBox6->Text = "";
		textBox7->Text = "";

		// Show the add product panel
		panel11->Visible = true;
		panel11->BringToFront();
	}

	Label^ CreateInventoryLabel(String^ name, Point location, System::Drawing::Size size, String^ text)
	{
		Label^ lbl = gcnew Label();
		lbl->Name = name;
		lbl->Location = location;
		lbl->Size = size;
		lbl->Text = text;
		lbl->TextAlign = ContentAlignment::MiddleLeft;
		lbl->Font = gcnew System::Drawing::Font("Poppins", 10.2F);
		lbl->ForeColor = Color::Black;
		lbl->BackColor = Color::White;
		lbl->FlatStyle = FlatStyle::Flat;
		lbl->BorderStyle = BorderStyle::None;
		lbl->AutoEllipsis = true;
		return lbl;
	}

	PictureBox^ CreateInventoryIcon(String^ name, Point loc, System::Drawing::Image^ img, System::Drawing::Size iconSize)
	{
		PictureBox^ pic = gcnew PictureBox();
		pic->Name = name;
		pic->Location = loc;
		pic->Size = iconSize;
		pic->SizeMode = PictureBoxSizeMode::Normal;
		pic->BackColor = Color::White;
		pic->Image = img;
		pic->Cursor = Cursors::Hand;
		return pic;
	}



	private: System::Void delIcon_Click(System::Object^ sender, System::EventArgs^ e) {
		PictureBox^ clickedIcon = dynamic_cast<PictureBox^>(sender);
		if (clickedIcon == nullptr) return;

		// Extract row index from icon name (e.g., "DelIcon_3")
		String^ name = clickedIcon->Name;
		if (!name->StartsWith("DelIcon_")) return;
		int rowIndex = Convert::ToInt32(name->Substring(8)) - 1;

		// Remove product from inventory and update file
		currentCompany->getInventory()->removeProductAt(rowIndex);
		currentCompany->saveProductsToFile();

		// Clear only product-related dynamic controls from panel10
		ArrayList^ toRemove = gcnew ArrayList();
		for each (Control ^ ctrl in panel10->Controls) {
			String^ ctrlName = ctrl->Name;
			if (ctrlName->StartsWith("ID_label_") ||
				ctrlName->StartsWith("Name_label_") ||
				ctrlName->StartsWith("Price_label_") ||
				ctrlName->StartsWith("Category_label_") ||
				ctrlName->StartsWith("Stock_label_") ||
				ctrlName->StartsWith("Sales_label_") ||
				ctrlName->StartsWith("DelIcon_"))
			{
				toRemove->Add(ctrl);
			}
		}

		for each (Control ^ ctrl in toRemove) {
			panel10->Controls->Remove(static_cast<Control^>(ctrl));
			delete ctrl;
		}

		// Rebuild all product rows from current inventory
		productRowCount = 0;
		Product** products = currentCompany->getInventory()->getProducts();
		int count = currentCompany->getInventory()->getProductCount();

		for (int i = 0; i < count; i++) {
			AddProductRow(productRowCount++, products[i]);
		}

		showTopSellingProducts();
	}



	void AddProductRow(int rowIndex, Product* product) {
		int baseY = 310;
		int rowHeight = 30;
		int y = baseY + rowIndex * rowHeight;

		// Convert char* to String^
		String^ idStr = product->getId().ToString();
		String^ nameStr = gcnew String(product->getName());
		String^ priceStr = product->getPrice().ToString("F2");
		String^ categoryStr = gcnew String(product->getCategory());
		String^ stockStr = product->getQuantity().ToString();
		String^ salesStr = product->getTotalSales().ToString();

		// Add Labels
		panel10->Controls->Add(CreateInventoryLabel("ID_label_" + (rowIndex + 1), Point(68, y), System::Drawing::Size(51, 30), idStr));
		panel10->Controls->Add(CreateInventoryLabel("Name_label_" + (rowIndex + 1), Point(174, y), System::Drawing::Size(130, 30), nameStr));
		panel10->Controls->Add(CreateInventoryLabel("Price_label_" + (rowIndex + 1), Point(345, y), System::Drawing::Size(110, 30), "$" + priceStr));
		panel10->Controls->Add(CreateInventoryLabel("Category_label_" + (rowIndex + 1), Point(463, y), System::Drawing::Size(90, 30), categoryStr));
		panel10->Controls->Add(CreateInventoryLabel("Stock_label_" + (rowIndex + 1), Point(600, y), System::Drawing::Size(62, 30), stockStr));
		panel10->Controls->Add(CreateInventoryLabel("Sales_label_" + (rowIndex + 1), Point(735, y), System::Drawing::Size(57, 30), salesStr));

		// Action icon (Del button only)
		PictureBox^ icon = CreateInventoryIcon("DelIcon_" + (rowIndex + 1), Point(886, y), delIcon->Image, delIcon->Size);
		icon->Click += gcnew EventHandler(this, &DashboardForm1::delIcon_Click);
		panel10->Controls->Add(icon);
	}


	private: System::Void confirmAddProduct_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ nameStr = textBox3->Text;
		String^ priceStr = textBox4->Text;
		String^ categoryStr = textBox5->Text;
		String^ quantityStr = textBox6->Text;
		String^ salesStr = textBox7->Text;

		if (nameStr == "" || priceStr == "" || categoryStr == "" || quantityStr == "" || salesStr == "") {
			MessageBox::Show("Please fill in all fields!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		std::string nameStd = msclr::interop::marshal_as<std::string>(nameStr);
		std::string categoryStd = msclr::interop::marshal_as<std::string>(categoryStr);

		char* nameChar = new char[nameStd.length() + 1];
		strcpy(nameChar, nameStd.c_str());

		char* categoryChar = new char[categoryStd.length() + 1];
		strcpy(categoryChar, categoryStd.c_str());

		double price = Convert::ToDouble(priceStr);
		int quantity = Convert::ToInt32(quantityStr);
		int totalSales = Convert::ToInt32(salesStr);

		int newProductID = currentCompany->getInventory()->getProductCount() + 1;

		// Add to currentCompany's inventory
		currentCompany->addProduct(newProductID, nameChar, categoryChar, price, quantity);
		Product** products = currentCompany->getInventory()->getProducts();
		products[currentCompany->getInventory()->getProductCount() - 1]->setTotalSales(totalSales);

		// Save to file
		currentCompany->saveProductsToFile();
		Product* latest = currentCompany->getInventory()->getProducts()[currentCompany->getInventory()->getProductCount() - 1];
		AddProductRow(productRowCount++, latest);

		panel11->Hide();

		delete[] nameChar;
		delete[] categoryChar;

		showTopSellingProducts();
	}

};
}
