#include <Windows.h>
#include "MainUI.h"

using namespace LibraryMgmt;

[STAThreadAttribute ( )]
#pragma warning(suppress: 28251)
int WINAPI WinMain ( HINSTANCE hInstance,
					 HINSTANCE hPrevInstance,
					 LPSTR lpCmdLine,
					 int nCmdShow )
{
	Application::EnableVisualStyles ( );
	Application::SetCompatibleTextRenderingDefault ( false );
	Application::Run ( gcnew MainUI ( ) );
	return 0;
}