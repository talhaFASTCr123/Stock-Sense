#include <windows.h>  // Required for SetProcessDPIAware
#include <iostream>
#include "MyForm.h"
#include "DashboardForm1.h"

#pragma comment(lib, "user32.lib")  // ✅ This tells the linker to use user32.lib

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(array<String^>^ args) {
    // Enable High-DPI Awareness to fix blurry UI
    SetProcessDPIAware();

    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    inventoryManagementSystem::MyForm form;
    Application::Run(% form);
}
