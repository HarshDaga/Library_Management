#include <Windows.h>
#include "MainUI.h"

using namespace LibraryMgmt;

[STAThreadAttribute ( )]
int WINAPI WinMain ( HINSTANCE hInstance,
					 HINSTANCE hPrevInstance,
					 LPSTR lpCmdLine,
					 int nCmdShow )
{
	CDBManager::CDBManager ( );
	Application::EnableVisualStyles ( );
	Application::SetCompatibleTextRenderingDefault ( false );
	Application::Run ( gcnew MainUI ( ) );
	return 0;
} 