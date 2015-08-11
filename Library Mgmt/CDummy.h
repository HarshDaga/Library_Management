#pragma once
namespace LibraryMgmt
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class CDummy
	{
	public:

		static Drawing::Icon ^gIcon;
		CDummy ( )
		{
			if ( gIcon )
				return;
			auto imageResources = ( gcnew System::ComponentModel::ComponentResourceManager ( CDummy::typeid ) );
			gIcon = static_cast<Drawing::Icon^>( imageResources->GetObject ( L"library.icon" ) );
		}
	};
}
