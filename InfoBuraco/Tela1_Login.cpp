#include "Tela1_Login.h"
namespace InfoBuraco {
	using namespace System;
	using namespace System::Windows::Forms;
	[STAThread]
	void Main()
	{
		Application::EnableVisualStyles();
		Application::SetCompatibleTextRenderingDefault(false);
		Application::Run(gcnew Tela1_Login);

	}
}