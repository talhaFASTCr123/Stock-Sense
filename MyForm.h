#pragma once
#include <msclr/marshal_cppstd.h>
using namespace msclr::interop;
#include "DashboardForm1.h" 
#include "CompanyFile.h"

namespace inventoryManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		}

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button4;

	public:

	protected:
		CompanyFile* currentCompany;
		Users* currentRegisteringUser;  // the user currently being registered (email match)
		bool isCreatingNewCompany;      // true if user is creating a new company
		~MyForm()
		{
			if (components)
			{
				delete currentCompany;
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:

	private: System::Windows::Forms::RichTextBox^ richTextBox1;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button3;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox4;


	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;



	protected:
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"LEMON MILK", 8, System::Drawing::FontStyle::Bold));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(790, 484);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(299, 38);
			this->button1->TabIndex = 2;
			this->button1->TabStop = false;
			this->button1->Text = L"Log In";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox1->Cursor = System::Windows::Forms::Cursors::Cross;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Poppins SemiBold", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(815, 274);
			this->richTextBox1->Multiline = false;
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->richTextBox1->Size = System::Drawing::Size(257, 20);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::richTextBox1_TextChanged);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->textBox5);
			this->panel1->Controls->Add(this->textBox4);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1310, 795);
			this->panel1->TabIndex = 3;
			this->panel1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseDown);
			this->panel1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseMove);
			this->panel1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseUp);
			// 
			// textBox5
			// 
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Cursor = System::Windows::Forms::Cursors::Cross;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Poppins SemiBold", 7.8F, System::Drawing::FontStyle::Bold));
			this->textBox5->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBox5->Location = System::Drawing::Point(804, 479);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(269, 20);
			this->textBox5->TabIndex = 8;
			this->textBox5->TabStop = false;
			this->textBox5->WordWrap = false;
			// 
			// textBox4
			// 
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Cursor = System::Windows::Forms::Cursors::Cross;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Poppins SemiBold", 7.8F, System::Drawing::FontStyle::Bold));
			this->textBox4->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBox4->Location = System::Drawing::Point(790, 339);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(283, 20);
			this->textBox4->TabIndex = 7;
			this->textBox4->TabStop = false;
			this->textBox4->WordWrap = false;
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Cursor = System::Windows::Forms::Cursors::Cross;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Poppins SemiBold", 7.8F, System::Drawing::FontStyle::Bold));
			this->textBox1->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBox1->Location = System::Drawing::Point(791, 248);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(281, 20);
			this->textBox1->TabIndex = 4;
			this->textBox1->TabStop = false;
			this->textBox1->WordWrap = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"LEMON MILK", 8, System::Drawing::FontStyle::Bold));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(789, 577);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(299, 38);
			this->button3->TabIndex = 3;
			this->button3->TabStop = false;
			this->button3->Text = L"REGISTER";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox6
			// 
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->Cursor = System::Windows::Forms::Cursors::Cross;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Poppins SemiBold", 5.8F, System::Drawing::FontStyle::Bold));
			this->textBox6->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBox6->Location = System::Drawing::Point(815, 399);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(257, 15);
			this->textBox6->TabIndex = 6;
			this->textBox6->TabStop = false;
			this->textBox6->UseSystemPasswordChar = true;
			this->textBox6->WordWrap = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"LEMON MILK", 8, System::Drawing::FontStyle::Bold));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(790, 547);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(299, 38);
			this->button2->TabIndex = 1;
			this->button2->TabStop = false;
			this->button2->Text = L"Register Company";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->Controls->Add(this->button4);
			this->panel2->Controls->Add(this->textBox3);
			this->panel2->Controls->Add(this->textBox2);
			this->panel2->Location = System::Drawing::Point(475, 217);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(538, 398);
			this->panel2->TabIndex = 9;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatAppearance->BorderSize = 3;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"LEMON MILK", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(119, 335);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(299, 44);
			this->button4->TabIndex = 10;
			this->button4->TabStop = false;
			this->button4->Text = L"CONFIRM";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click_1);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::Black;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Cursor = System::Windows::Forms::Cursors::Cross;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Poppins SemiBold", 5.8F, System::Drawing::FontStyle::Bold));
			this->textBox3->ForeColor = System::Drawing::Color::White;
			this->textBox3->Location = System::Drawing::Point(139, 287);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(257, 15);
			this->textBox3->TabIndex = 10;
			this->textBox3->TabStop = false;
			this->textBox3->UseSystemPasswordChar = true;
			this->textBox3->WordWrap = false;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::Black;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Cursor = System::Windows::Forms::Cursors::Cross;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Poppins SemiBold", 5.8F, System::Drawing::FontStyle::Bold));
			this->textBox2->ForeColor = System::Drawing::Color::White;
			this->textBox2->Location = System::Drawing::Point(138, 217);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(257, 15);
			this->textBox2->TabIndex = 9;
			this->textBox2->TabStop = false;
			this->textBox2->UseSystemPasswordChar = true;
			this->textBox2->WordWrap = false;
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1310, 795);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Stock Sense Login";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseUp);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	// Dragging the form
	bool dragging = false;
	Point offset;

	// The Main Form
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		button1->FlatStyle = FlatStyle::Flat;
		button1->FlatAppearance->BorderSize = 0;
		button1->FlatAppearance->MouseOverBackColor = button1->BackColor;
		button1->FlatAppearance->MouseDownBackColor = button1->BackColor;

		button2->FlatStyle = FlatStyle::Flat;
		button2->FlatAppearance->BorderSize = 0;
		button2->FlatAppearance->MouseOverBackColor = button2->BackColor;
		button2->FlatAppearance->MouseDownBackColor = button2->BackColor;

		button3->FlatStyle = FlatStyle::Flat;
		button3->FlatAppearance->BorderSize = 0;
		button3->FlatAppearance->MouseOverBackColor = button3->BackColor;
		button3->FlatAppearance->MouseDownBackColor = button3->BackColor;

		button4->FlatStyle = FlatStyle::Flat;
		button4->FlatAppearance->BorderSize = 0;
		button4->FlatAppearance->MouseOverBackColor = button4->BackColor;
		button4->FlatAppearance->MouseDownBackColor = button4->BackColor;

		panel1->BringToFront();
		panel2->Hide();
		dragging = false;
	}

	// Run this if user said that he has a company and wants to register as employee
	void prefillUsernameField(string sEmail) {
		currentRegisteringUser = currentCompany->getUserByMail(sEmail);

		if (isCreatingNewCompany) {
			// Let user choose their username
			richTextBox1->ReadOnly = false;
			richTextBox1->Text = "";
		}
		else {
			if (currentRegisteringUser != nullptr) {
				richTextBox1->Text = gcnew String(currentRegisteringUser->getUsername().c_str());
				richTextBox1->ReadOnly = true;
			}
		}
	}


	// Button-1: Login button on login page
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		// Store the inputs
		String^ username = richTextBox1->Text;
		String^ password = textBox6->Text;

		// Validation
		if (username == "" || password == "") {
			MessageBox::Show("Enter both username and password.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		string sPass = marshal_as<string>(password);

		if (currentRegisteringUser == nullptr) {
			MessageBox::Show("Unexpected error. No user found.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// If password is empty, ask user to set a new password
		if (currentRegisteringUser->getPassword() == "") {
			panel2->Show();
		}
		else {
			// Check entered password
			if (currentRegisteringUser->getPassword() == sPass) {
				// Successful login
				MessageBox::Show("Login successful!", "Success");
				DashboardForm1^ dashboard = gcnew DashboardForm1();
				dashboard->Show();
				this->Hide();
			}
			else {
				MessageBox::Show("Incorrect password.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}

	}



	// Button-2: Back To Register Company Button
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		// Reset user registration fields
		richTextBox1->Text = "";
		richTextBox1->ReadOnly = false;
		textBox6->Text = "";      // Login password box
		textBox2->Text = "";      // New password
		textBox3->Text = "";      // Confirm password

		// Reset company registration fields
		textBox1->Text = "";      // Full Name
		textBox4->Text = "";      // Email
		textBox5->Text = "";      // Company Name

		// Hide panels except initial
		panel2->Hide();
		panel1->Show();

		// Reset state variables
		currentRegisteringUser = nullptr;
		isCreatingNewCompany = false;
	}


	// Button-3: Initial Register company button
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ fullName = textBox1->Text;
		String^ email = textBox4->Text;
		String^ companyName = textBox5->Text;

		// Validation
		if (fullName == "" || email == "" || companyName == "") {
			MessageBox::Show("Please fill in all fields.", "Missing Data", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		// Convert to std::string
		string sFullName = marshal_as<string>(fullName);
		string sEmail = marshal_as<string>(email);
		string sCompany = marshal_as<string>(companyName);

		if (!validateEmailFormat(sEmail)) {
			MessageBox::Show("Invalid email format!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		// Check if company file already exists
		string companyFilePath = sCompany + "UserDirectory.csv";

		ifstream checkFile(companyFilePath);
		if (!checkFile.good()) {
			// Company doesn't exist. Ask to create it
			System::Windows::Forms::DialogResult result = MessageBox::Show("Company does not exist. Do you want to create a new company?", "Company Not Found", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

			if (result == System::Windows::Forms::DialogResult::Yes) {
				// Create new company and set current user as owner
				currentCompany = new CompanyFile(sCompany);
				bool success = currentCompany->registerNewOwner(sFullName, sEmail);
				if (!success) {
					MessageBox::Show("Owner registration failed.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}
				currentCompany->saveUsersToFile();

				MessageBox::Show("Company registered! You can now create your user account.", "Success");
				isCreatingNewCompany = true;
				prefillUsernameField(sEmail);
				panel1->Hide(); // Go to user registration
			}
			else {
				MessageBox::Show("Please enter a valid existing company to proceed.", "Company Required", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
		}
		else {
			// Company exists, check if email exists in that company
			currentCompany = new CompanyFile(sCompany);
			currentCompany->loadUsersFromFile();

			Users* existing = currentCompany->getUserByMail(sEmail);
			if (existing == nullptr) {
				MessageBox::Show("This email has not been added to the company. Please ask the owner to add you.", "Access Denied", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				delete currentCompany;
				currentCompany = nullptr;
				return;
			}

			// Show user registration form
			isCreatingNewCompany = false;
			prefillUsernameField(sEmail);
			panel1->Hide(); // Go to user registration
		}
	}

		   // Confirm button on entering new password
	private: System::Void button4_Click_1(System::Object^ sender, System::EventArgs^ e)
	{
		String^ p1 = textBox2->Text;
		String^ p2 = textBox3->Text;

		if (p1 == "" || p2 == "") {
			MessageBox::Show("Please fill both password fields.", "Missing Data", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		if (p1 != p2) {
			MessageBox::Show("Passwords do not match!", "Mismatch", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		string sPass = marshal_as<string>(p1);
		currentRegisteringUser->setPassword(sPass);
		currentCompany->saveUsersToFile();

		panel2->Hide();
		MessageBox::Show("Password set successfully. You can now log in!", "Done");
	}


	// Button-4: Log In (from sign-up form: THIS HAS BEEN REMOVED )
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

		inventoryManagementSystem::DashboardForm1^ dashboard = gcnew inventoryManagementSystem::DashboardForm1();
		dashboard->Show();
		this->Hide();
	}

	/* DRAGGING FUNTIOANLITY BELOW THIS */
	private: System::Void MyForm_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) 
	{
		dragging = true;
		offset.X = e->X;
		offset.Y = e->Y;
	}

	private: System::Void MyForm_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) 
	{
		// Check whether able to move
		if (dragging)
		{
			Point currentScreenPosition = PointToScreen(Point(e->X, e->Y));
			Location = Point(currentScreenPosition.X - offset.X, currentScreenPosition.Y - offset.Y);
		}
	}

	// Disable dragging here (When mouse is not being pressed)
	private: System::Void MyForm_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) 
	{
		dragging = false;
	}



	private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		// Optional logic
	}

	private: System::Void richTextBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		// Optional logic
	}
};
}
