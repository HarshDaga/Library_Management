#pragma once

using namespace System;
using namespace System::Data;
using namespace System::Xml;
using namespace MySql::Data::MySqlClient;

public ref class CDBManager
{
public:

	static MySqlConnection ^connection = nullptr;

	CDBManager ( )
	{
		if ( !connection )
			init ( );
	}

	void init ( )
	{
		connection = gcnew MySqlConnection ( L"server=localhost;user id=dept_lib_admin;password=123456;persistsecurityinfo=True;database=dept_library" );
		connection->Open ( );
		//MySqlCommand ^cmd = gcnew MySqlCommand ( L"DESC library", connection );
		//MySqlDataReader ^reader = cmd->ExecuteReader ( );
		//String ^buff = gcnew String ( "" );
		//while ( reader->Read ( ) )
		//{
		//	for ( int i = 0; i != reader->FieldCount; ++i )
		//		buff += reader[ i ] + "    ";
		//	buff += "\n";
		//}
		//Console::WriteLine ( buff );
	}

	static int nonQuery ( String ^cmdText )
	{
		MySqlCommand ^cmd = gcnew MySqlCommand ( cmdText, connection );
		return cmd->ExecuteNonQuery ( );
	}

	static MySqlDataReader^ query ( String ^cmdText )
	{
		MySqlCommand ^cmd = gcnew MySqlCommand ( cmdText, connection );
		return cmd->ExecuteReader ( );
	}

	static Object^ scalar ( String ^cmdText )
	{
		MySqlCommand ^cmd = gcnew MySqlCommand ( cmdText, connection );
		return cmd->ExecuteScalar ( );
	}
};