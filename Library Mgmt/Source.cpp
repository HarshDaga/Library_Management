#include "MainUI.h"

using namespace LibraryMgmt;

[STAThreadAttribute ( )]
int __stdcall WinMain ( void )
{
	Application::EnableVisualStyles ( );
	Application::SetCompatibleTextRenderingDefault ( false );
	Application::Run ( gcnew MainUI ( ) );
	return 0;
} 