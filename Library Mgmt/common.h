#pragma once

using namespace System;
using namespace System::IO;
using namespace System::Data;
using namespace System::Xml;
using namespace MySql::Data::MySqlClient;
using namespace System::Collections;
using namespace System::Collections::Generic;

typedef List<String^> Strings;

public ref class CDBManager
{
public:

	static MySqlConnection ^connection = nullptr;
	static MySqlDataReader ^reader = nullptr;

	CDBManager ( )
	{
		if ( !connection )
			init ( );
	}

	void init ( )
	{
		connection = gcnew MySqlConnection ( L"server=localhost;user id=dept_lib_admin;password=123456;persistsecurityinfo=True;database=dept_library;table cache=true" );
		connection->Open ( );
	}

	static MySqlCommand^ getCmd ( String ^cmdText )
	{
		if ( reader && !reader->IsClosed )
			reader->Close ( );
		return gcnew MySqlCommand ( cmdText, connection );
	}

	static int nonQuery ( String ^cmdText )
	{
		if ( reader && !reader->IsClosed )
			reader->Close ( );
		MySqlCommand ^cmd = gcnew MySqlCommand ( cmdText, connection );
		return cmd->ExecuteNonQuery ( );
	}

	static MySqlDataReader^ query ( String ^cmdText )
	{
		if ( reader && !reader->IsClosed )
			reader->Close ( );
		MySqlCommand ^cmd = gcnew MySqlCommand ( cmdText, connection );
		return reader = cmd->ExecuteReader ( );
	}

	static Object^ scalar ( String ^cmdText )
	{
		if ( reader && !reader->IsClosed )
			reader->Close ( );
		MySqlCommand ^cmd = gcnew MySqlCommand ( cmdText, connection );
		return cmd->ExecuteScalar ( );
	}

	static MySqlDataAdapter^ getAdapter ( String ^cmdText )
	{
		if ( reader && !reader->IsClosed )
			reader->Close ( );
		return gcnew MySqlDataAdapter ( cmdText, connection );
	}
};