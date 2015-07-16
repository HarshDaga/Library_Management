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
		auto result = gcnew MySqlCommand ( cmdText, connection );
		result->Prepare ( );
		return result;
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

	//************************************
	// Method:    insert
	// FullName:  CDBManager::insert
	// Access:    public static 
	// Returns:   int	ID of the newly inserted row
	// Qualifier:
	// Parameter: String ^table			Table Name
	// Parameter: String ^cols_csv		Column Names (csv)
	// Parameter: ... array<System::Object^> ^values	Values to insert in order
	//************************************
	static int insert ( String ^table, String ^cols_csv, ... array<System::Object^> ^values )
	{
		String ^cmdText = "INSERT INTO " + table + "(" + cols_csv + ") VALUES(";
		cols_csv = cols_csv->Replace ( " ", "" );
		cols_csv = "@" + cols_csv->Replace ( ",", ",@" );
		cmdText += cols_csv + ")";
		auto cmd = getCmd ( cmdText );
		auto params = cols_csv->Split ( ',' );
		for ( int i = 0; i != values->Length; ++i )
			cmd->Parameters->AddWithValue ( params[ i ], values[ i ] );
		cmd->ExecuteNonQuery ( );
		return (int) cmd->LastInsertedId;
	}
};

public ref class CLibDBManager
{
public:

	CLibDBManager ( )
	{
		gcnew CDBManager ( );
	}

	static Strings^ getStudents ( )
	{
		auto reader = CDBManager::query ( "SELECT id FROM students" );
		Strings ^names = gcnew Strings ( );
		while ( reader->Read ( ) )
			names->Add ( reader->GetString ( 0 ) );
		reader->Close ( );
		return names;
	}

	static Strings^ getStaff ( )
	{
		auto reader = CDBManager::query ( "SELECT * FROM staff" );
		Strings ^names = gcnew Strings ( );
		while ( reader->Read ( ) )
			names->Add ( reader->GetString ( 1 ) );
		reader->Close ( );
		return names;
	}

	static Strings^ getAuthors ( )
	{
		auto reader = CDBManager::query ( "SELECT * FROM authors" );
		Strings ^names = gcnew Strings ( );
		while ( reader->Read ( ) )
			names->Add ( reader->GetString ( 1 ) );
		reader->Close ( );
		return names;
	}

	static Strings^ getBooks ( )
	{
		auto reader = CDBManager::query ( "SELECT * FROM books" );
		Strings ^names = gcnew Strings ( );
		while ( reader->Read ( ) )
			names->Add ( reader->GetString ( 1 ) );
		reader->Close ( );
		return names;
	}

	static Strings^ getCategories ( )
	{
		auto reader = CDBManager::query ( "SELECT * FROM categories" );
		Strings ^names = gcnew Strings ( );
		while ( reader->Read ( ) )
			names->Add ( reader->GetString ( 1 ) );
		reader->Close ( );
		return names;
	}

	static String^ findStudent ( String ^id )
	{
		auto reader = CDBManager::query ( "SELECT id FROM students WHERE id = '" + id + "'" );
		if ( reader->Read ( ) )
			return reader->GetString ( 0 );
		else
			return nullptr;
	}

	static int findStaff ( String ^name )
	{
		auto reader = CDBManager::query ( "SELECT id FROM staff WHERE name = '" + name + "'" );
		if ( reader->Read ( ) )
			return (int) reader->GetInt32 ( 0 );
		else
			return 0;
	}

	static int findAuthor ( String ^name )
	{
		auto reader = CDBManager::query ( "SELECT id FROM authors WHERE name = '" + name + "'" );
		if ( reader->Read ( ) )
			return (int) reader->GetInt32 ( 0 );
		else
			return 0;
	}

	static int findBook ( String ^name )
	{
		auto reader = CDBManager::query ( "SELECT id FROM books WHERE name = '" + name + "'" );
		if ( reader->Read ( ) )
			return (int) reader->GetInt32 ( 0 );
		else
			return 0;
	}

	static int findCategory ( String ^name )
	{
		auto reader = CDBManager::query ( "SELECT id FROM categories WHERE name = '" + name + "'" );
		if ( reader->Read ( ) )
			return (int) reader->GetInt32 ( 0 );
		else
			return 0;
	}

	static String^ addStudent ( String ^id, String ^name )
	{
		auto student_id = CLibDBManager::findStudent ( id );
		if ( !student_id )
		{
			auto cmd = CDBManager::getCmd ( "INSERT INTO students(id, name)"
											"VALUES(@id, @name)" );
			cmd->Parameters->AddWithValue ( "@id", id );
			cmd->Parameters->AddWithValue ( "@name", name );
			cmd->ExecuteNonQuery ( );
			student_id = id;
		}
		return student_id;
	}

	static int addStaff ( String ^name )
	{
		int owner_id = CLibDBManager::findStaff ( name );
		if ( !owner_id )
		{
			auto cmd = CDBManager::getCmd ( "INSERT INTO staff(name)"
											"VALUES(@name)" );
			cmd->Parameters->AddWithValue ( "@name", name );
			cmd->ExecuteNonQuery ( );
			owner_id = (int) cmd->LastInsertedId;
		}
		return owner_id;
	}

	static int addAuthor ( String ^name )
	{
		int author_id = CLibDBManager::findAuthor ( name );
		if ( !author_id )
		{
			auto cmd = CDBManager::getCmd ( "INSERT INTO authors(name)"
											"VALUES(@name)" );
			cmd->Parameters->AddWithValue ( "@name", name );
			cmd->ExecuteNonQuery ( );
			author_id = (int) cmd->LastInsertedId;
		}
		return author_id;
	}

	static int addBook ( String ^name )
	{
		int book_id = CLibDBManager::findBook ( name );
		if ( !book_id )
		{
			auto cmd = CDBManager::getCmd ( "INSERT INTO books(name)"
											"VALUES(@name)" );
			cmd->Parameters->AddWithValue ( "@name", name );
			cmd->ExecuteNonQuery ( );
			book_id = (int) cmd->LastInsertedId;
		}
		return book_id;
	}

	static int addCategory ( String ^name )
	{
		int category_id = CLibDBManager::findCategory ( name );
		if ( !category_id )
		{
			auto cmd = CDBManager::getCmd ( "INSERT INTO categories(name)"
											"VALUES(@name)" );
			cmd->Parameters->AddWithValue ( "@name", name );
			cmd->ExecuteNonQuery ( );
			category_id = (int) cmd->LastInsertedId;
		}
		return category_id;
	}
};