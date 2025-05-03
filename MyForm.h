#pragma once
#pragma once
#include <msclr/marshal_cppstd.h>
using namespace msclr::interop;
#include "DashboardForm1.h" 
#include "Users.h"

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
			userManager = new UserManager();
		}

	protected:
		UserManager* userManager;
		~MyForm()
		{
			if (components)
			{
				delete userManager;
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->panel1->SuspendLayout();
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
			this->button2->Text = L"Create Account";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
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
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->button4);
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
			this->textBox5->Location = System::Drawing::Point(804, 517);
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
			this->textBox4->Location = System::Drawing::Point(789, 339);
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
			// textBox3
			// 
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Cursor = System::Windows::Forms::Cursors::Cross;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Poppins SemiBold", 5.8F, System::Drawing::FontStyle::Bold));
			this->textBox3->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBox3->Location = System::Drawing::Point(952, 435);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(102, 15);
			this->textBox3->TabIndex = 6;
			this->textBox3->TabStop = false;
			this->textBox3->UseSystemPasswordChar = true;
			this->textBox3->WordWrap = false;
			// 
			// textBox2
			// 
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Cursor = System::Windows::Forms::Cursors::Cross;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Poppins SemiBold", 5.8F, System::Drawing::FontStyle::Bold));
			this->textBox2->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBox2->Location = System::Drawing::Point(804, 433);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(106, 15);
			this->textBox2->TabIndex = 5;
			this->textBox2->TabStop = false;
			this->textBox2->UseSystemPasswordChar = true;
			this->textBox2->WordWrap = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"LEMON MILK", 8, System::Drawing::FontStyle::Bold));
			this->button4->ForeColor = System::Drawing::Color::Black;
			this->button4->Location = System::Drawing::Point(789, 636);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(299, 38);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Log In";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
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
			this->button3->Text = L"Sign Up";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox6
			// 
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->Cursor = System::Windows::Forms::Cursors::Cross;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Poppins SemiBold", 5.8F, System::Drawing::FontStyle::Bold));
			this->textBox6->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBox6->Location = System::Drawing::Point(815, 391);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(257, 15);
			this->textBox6->TabIndex = 6;
			this->textBox6->TabStop = false;
			this->textBox6->UseSystemPasswordChar = true;
			this->textBox6->WordWrap = false;
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1310, 795);
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

		button4->Enabled = false;
		button4->FlatStyle = FlatStyle::Flat;
		button4->FlatAppearance->BorderSize = 0;
		button4->FlatAppearance->MouseOverBackColor = button4->BackColor;
		button4->FlatAppearance->MouseDownBackColor = button4->BackColor;

		panel1->Hide();
		dragging = false;
	}

	
	// Button-1: Login button on login page
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		// Get input
		String^ email = richTextBox1->Text;
		String^ password = textBox6->Text;

		if (email == "" || password == "") {
			MessageBox::Show("Please enter both email and password.", "Login Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		// Convert to std::string
		string uemail = msclr::interop::marshal_as<string>(email);
		string upass = msclr::interop::marshal_as<string>(password);

		// Try logging in
		if (!userManager->login(uemail, upass)) {
			MessageBox::Show("Invalid email or password.", "Login Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// Success
		inventoryManagementSystem::DashboardForm1^ dashboard = gcnew inventoryManagementSystem::DashboardForm1();
		dashboard->Show();
		this->Hide();
	}



	// Button-2: Create Account Button
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		button2->FlatStyle = FlatStyle::Flat;
		button2->FlatAppearance->BorderSize = 0;
		button2->FlatAppearance->MouseOverBackColor = button2->BackColor;
		button2->FlatAppearance->MouseDownBackColor = button2->BackColor;

		// Clear all input fields
		textBox1->Text = "";
		textBox4->Text = "";
		textBox2->Text = "";
		textBox3->Text = "";
		textBox5->Text = "";

		button3->Enabled = true; // Re-enable sign-up button if it was disabled
		button4->Enabled = false;

		// Show the panel again
		panel1->Show();
	}


	// Button-3: Sign Up (Create Account)
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ name = textBox1->Text;
		String^ email = textBox4->Text;
		String^ pass = textBox2->Text;
		String^ confirm = textBox3->Text;
		String^ company = textBox5->Text;

		// Basic Validation
		if (name == "" || email == "" || pass == "" || confirm == "" || company == "") {
			MessageBox::Show("Please fill in all fields.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		if (pass != confirm) {
			MessageBox::Show("Passwords do not match.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// Convert to std::string
		string uname = msclr::interop::marshal_as<string>(name);
		string uemail = msclr::interop::marshal_as<string>(email);
		string upass = msclr::interop::marshal_as<string>(pass);
		string ucompany = msclr::interop::marshal_as<string>(company);

		// Check email format
		if (!validateEmailFormat(uemail)) {
			MessageBox::Show("Invalid email format!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		// Check if email already exists
		if (userManager->getUserByEmail(uemail) != nullptr) {
			System::Windows::Forms::DialogResult result = MessageBox::Show("This email is already registered. Would you like to log in?", "Account Exists",
				MessageBoxButtons::YesNo,
				MessageBoxIcon::Information
			);

			if (result == System::Windows::Forms::DialogResult::Yes) {
				// Go to login page
				panel1->Hide();
			}
			else {
				button3->Enabled = false; // Disable further signups for this session
				button4->Enabled = true;
			}
			return;
		}

		// Create and register new user
		Employee* newUser = new Employee(uname, upass, uemail);
		if (!userManager->registerUser(newUser)) {
			MessageBox::Show("Failed to register. Try again.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			delete newUser;
			return;
		}

		MessageBox::Show("Account created successfully! You can now log in.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		panel1->Hide(); // Return to login
	}



	// Button-4: Log In (from sign-up form)
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		button4->FlatStyle = FlatStyle::Flat;
		button4->FlatAppearance->BorderSize = 0;
		button4->FlatAppearance->MouseOverBackColor = button4->BackColor;
		button4->FlatAppearance->MouseDownBackColor = button4->BackColor;

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
