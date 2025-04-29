#include "DashboardForm1.h"
#include "MyForm.h" // Safe include
#include "Reviews.h"

using namespace inventoryManagementSystem;
using namespace System::Windows::Forms;

DashboardForm1::DashboardForm1(void)
{
    InitializeComponent();
    reviewManager = new ReviewManager();


}


 // Shifted this logout button to .cpp file because there was an issue regaridng the MyForm object and circular dependencies
System::Void DashboardForm1::button8_Click(System::Object^ sender, System::EventArgs^ e)
{
    SetActiveButton(button8);

    System::Windows::Forms::DialogResult result = MessageBox::Show(
        "Are you sure you want to log out?",
        "Log Out",
        MessageBoxButtons::YesNo,
        MessageBoxIcon::Question
    );

    if (result == System::Windows::Forms::DialogResult::Yes)
    {
        MyForm^ loginForm = gcnew MyForm();
        loginForm->Show();
        this->Close();
    }
}