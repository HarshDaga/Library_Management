#pragma once
#include "common.h"

namespace LibraryMgmt
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FacultyUI
	/// </summary>
	public ref class FacultyUI : public System::Windows::Forms::Form
	{
	public:
		FacultyUI ( void )
		{
			InitializeComponent ( );
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FacultyUI ( )
		{
			if ( components )
			{
				delete components;
			}
		}


#pragma region Controls
	private: System::Windows::Forms::ErrorProvider^  errorProvider;

	private: System::Windows::Forms::GroupBox^  gbAddBook;
	private: System::Windows::Forms::Button^  btAddBook;

	private: System::Windows::Forms::Label^  Owner;
	private: System::Windows::Forms::ComboBox^  cbAuthor;
	private: System::Windows::Forms::ComboBox^  cbOwner;
	private: System::Windows::Forms::Label^  lblBookName;
	private: System::Windows::Forms::Label^  lblCategory;
	private: System::Windows::Forms::Label^  lblAuthor;
	private: System::Windows::Forms::ComboBox^  cbCategory;
	private: System::Windows::Forms::ComboBox^  cbBookName;
#pragma endregion



	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent ( void )
		{
			this->components = ( gcnew System::ComponentModel::Container ( ) );
			System::ComponentModel::ComponentResourceManager^  resources = ( gcnew System::ComponentModel::ComponentResourceManager ( FacultyUI::typeid ) );
			this->errorProvider = ( gcnew System::Windows::Forms::ErrorProvider ( this->components ) );
			this->cbAuthor = ( gcnew System::Windows::Forms::ComboBox ( ) );
			this->lblBookName = ( gcnew System::Windows::Forms::Label ( ) );
			this->lblAuthor = ( gcnew System::Windows::Forms::Label ( ) );
			this->lblCategory = ( gcnew System::Windows::Forms::Label ( ) );
			this->cbCategory = ( gcnew System::Windows::Forms::ComboBox ( ) );
			this->Owner = ( gcnew System::Windows::Forms::Label ( ) );
			this->cbOwner = ( gcnew System::Windows::Forms::ComboBox ( ) );
			this->btAddBook = ( gcnew System::Windows::Forms::Button ( ) );
			this->gbAddBook = ( gcnew System::Windows::Forms::GroupBox ( ) );
			this->cbBookName = ( gcnew System::Windows::Forms::ComboBox ( ) );
			( cli::safe_cast<System::ComponentModel::ISupportInitialize^>( this->errorProvider ) )->BeginInit ( );
			this->gbAddBook->SuspendLayout ( );
			this->SuspendLayout ( );
			// 
			// errorProvider
			// 
			this->errorProvider->ContainerControl = this;
			// 
			// cbAuthor
			// 
			this->cbAuthor->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->cbAuthor->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->cbAuthor->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->cbAuthor->FormattingEnabled = true;
			this->cbAuthor->Location = System::Drawing::Point ( 303, 111 );
			this->cbAuthor->Name = L"cbAuthor";
			this->cbAuthor->Size = System::Drawing::Size ( 170, 28 );
			this->cbAuthor->Sorted = true;
			this->cbAuthor->TabIndex = 8;
			// 
			// lblBookName
			// 
			this->lblBookName->Font = ( gcnew System::Drawing::Font ( L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>( 0 ) ) );
			this->lblBookName->Location = System::Drawing::Point ( 23, 78 );
			this->lblBookName->Name = L"lblBookName";
			this->lblBookName->Size = System::Drawing::Size ( 270, 20 );
			this->lblBookName->TabIndex = 9;
			this->lblBookName->Text = L"Book Name";
			this->lblBookName->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblAuthor
			// 
			this->lblAuthor->Font = ( gcnew System::Drawing::Font ( L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>( 0 ) ) );
			this->lblAuthor->Location = System::Drawing::Point ( 299, 78 );
			this->lblAuthor->Name = L"lblAuthor";
			this->lblAuthor->Size = System::Drawing::Size ( 174, 20 );
			this->lblAuthor->TabIndex = 10;
			this->lblAuthor->Text = L"Author";
			this->lblAuthor->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblCategory
			// 
			this->lblCategory->Font = ( gcnew System::Drawing::Font ( L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>( 0 ) ) );
			this->lblCategory->Location = System::Drawing::Point ( 475, 78 );
			this->lblCategory->Name = L"lblCategory";
			this->lblCategory->Size = System::Drawing::Size ( 177, 20 );
			this->lblCategory->TabIndex = 12;
			this->lblCategory->Text = L"Category";
			this->lblCategory->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// cbCategory
			// 
			this->cbCategory->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->cbCategory->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->cbCategory->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->cbCategory->FormattingEnabled = true;
			this->cbCategory->Location = System::Drawing::Point ( 479, 111 );
			this->cbCategory->Name = L"cbCategory";
			this->cbCategory->Size = System::Drawing::Size ( 173, 28 );
			this->cbCategory->Sorted = true;
			this->cbCategory->TabIndex = 11;
			// 
			// Owner
			// 
			this->Owner->Font = ( gcnew System::Drawing::Font ( L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>( 0 ) ) );
			this->Owner->Location = System::Drawing::Point ( 654, 78 );
			this->Owner->Name = L"Owner";
			this->Owner->Size = System::Drawing::Size ( 161, 20 );
			this->Owner->TabIndex = 14;
			this->Owner->Text = L"Owner";
			this->Owner->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// cbOwner
			// 
			this->cbOwner->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->cbOwner->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->cbOwner->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->cbOwner->FormattingEnabled = true;
			this->cbOwner->Location = System::Drawing::Point ( 658, 111 );
			this->cbOwner->Name = L"cbOwner";
			this->cbOwner->Size = System::Drawing::Size ( 157, 28 );
			this->cbOwner->Sorted = true;
			this->cbOwner->TabIndex = 13;
			// 
			// btAddBook
			// 
			this->btAddBook->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btAddBook->FlatAppearance->BorderSize = 0;
			this->btAddBook->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btAddBook->Font = ( gcnew System::Drawing::Font ( L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>( 0 ) ) );
			this->btAddBook->Location = System::Drawing::Point ( 27, 145 );
			this->btAddBook->Name = L"btAddBook";
			this->btAddBook->Size = System::Drawing::Size ( 788, 50 );
			this->btAddBook->TabIndex = 15;
			this->btAddBook->Text = L"Add";
			this->btAddBook->UseVisualStyleBackColor = false;
			this->btAddBook->Click += gcnew System::EventHandler ( this, &FacultyUI::btAddBook_Click );
			// 
			// gbAddBook
			// 
			this->gbAddBook->Controls->Add ( this->cbBookName );
			this->gbAddBook->Controls->Add ( this->btAddBook );
			this->gbAddBook->Controls->Add ( this->Owner );
			this->gbAddBook->Controls->Add ( this->cbAuthor );
			this->gbAddBook->Controls->Add ( this->cbOwner );
			this->gbAddBook->Controls->Add ( this->lblBookName );
			this->gbAddBook->Controls->Add ( this->lblCategory );
			this->gbAddBook->Controls->Add ( this->lblAuthor );
			this->gbAddBook->Controls->Add ( this->cbCategory );
			this->gbAddBook->Font = ( gcnew System::Drawing::Font ( L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>( 0 ) ) );
			this->gbAddBook->Location = System::Drawing::Point ( 12, 13 );
			this->gbAddBook->Name = L"gbAddBook";
			this->gbAddBook->Size = System::Drawing::Size ( 854, 353 );
			this->gbAddBook->TabIndex = 16;
			this->gbAddBook->TabStop = false;
			this->gbAddBook->Text = L"Add Book";
			// 
			// cbBookName
			// 
			this->cbBookName->AllowDrop = true;
			this->cbBookName->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->cbBookName->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->cbBookName->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->cbBookName->FormattingEnabled = true;
			this->cbBookName->Location = System::Drawing::Point ( 27, 111 );
			this->cbBookName->Name = L"cbBookName";
			this->cbBookName->Size = System::Drawing::Size ( 270, 28 );
			this->cbBookName->Sorted = true;
			this->cbBookName->TabIndex = 16;
			// 
			// FacultyUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF ( 6, 13 );
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size ( 878, 378 );
			this->Controls->Add ( this->gbAddBook );
			this->Icon = ( cli::safe_cast<System::Drawing::Icon^>( resources->GetObject ( L"$this.Icon" ) ) );
			this->Name = L"FacultyUI";
			this->Text = L"Faculty";
			this->Shown += gcnew System::EventHandler ( this, &FacultyUI::FacultyUI_Shown );
			( cli::safe_cast<System::ComponentModel::ISupportInitialize^>( this->errorProvider ) )->EndInit ( );
			this->gbAddBook->ResumeLayout ( false );
			this->ResumeLayout ( false );

		}
#pragma endregion

	private: System::Void btAddBook_Click ( System::Object^  sender, System::EventArgs^  e )
	{
		String ^name = cbBookName->Text;
		String ^author = cbAuthor->Text;
		String ^category = cbCategory->Text;
		String ^owner = cbOwner->Text;
		int author_id, book_id, owner_id, category_id, status = 0;
		errorProvider->Clear ( );

		if ( !( String::IsNullOrEmpty ( author ) ) )
		{
			author_id = CLibDBManager::addAuthor ( author );
			cbAuthor_Fetch ( );
		}
		if ( !( String::IsNullOrEmpty ( category ) ) )
		{
			category_id = CLibDBManager::addCategory ( category );
			cbCategory_Fetch ( );
		}
		if ( !( String::IsNullOrEmpty ( name ) ) )
		{
			book_id = CLibDBManager::addBook ( name );
			cbBookName_Fetch ( );
		}
		if ( !( String::IsNullOrEmpty ( owner ) ) )
		{
			owner_id = CLibDBManager::addStaff ( owner );
			cbOwner_Fetch ( );
		}
		if ( author_id && book_id && owner_id && category_id )
			CDBManager::insert ( "library", "book_id, author_id, owner_id, category_id",
								 book_id, author_id, owner_id, category_id );
	}

	private: System::Void cbAuthor_Fetch ( )
	{
		auto names = CLibDBManager::getAuthors ( );
		cbAuthor->Items->Clear ( );
		cbAuthor->Items->AddRange ( names->ToArray ( ) );
	}

	private: System::Void cbCategory_Fetch ( )
	{
		auto categories = CLibDBManager::getCategories ( );
		cbCategory->Items->Clear ( );
		cbCategory->Items->AddRange ( categories->ToArray ( ) );
	}

	private: System::Void cbOwner_Fetch ( )
	{
		auto names = CLibDBManager::getStaff ( );
		cbOwner->Items->Clear ( );
		cbOwner->Items->AddRange ( names->ToArray ( ) );
	}

	private: System::Void cbBookName_Fetch ( )
	{
		auto names = CLibDBManager::getBooks ( );
		cbBookName->Items->Clear ( );
		cbBookName->Items->AddRange ( names->ToArray ( ) );
	}

	private: System::Void FacultyUI_Shown ( System::Object^  sender, System::EventArgs^  e )
	{
		cbAuthor_Fetch ( );
		cbCategory_Fetch ( );
		cbOwner_Fetch ( );
		cbBookName_Fetch ( );
	}

	private: System::Void button1_Click_1 ( System::Object^  sender, System::EventArgs^  e )
	{
		StreamReader^ din = File::OpenText ( "Departmental_Library_List.txt" );
		String^ str;
		int count = 0;
		while ( ( str = din->ReadLine ( ) ) != nullptr )
		{
			count++;
			auto str_array = str->Split ( '\t' );
			auto owner_name = str_array[ 1 ];
			auto book_name = str_array[ 2 ];
			auto author_name = str_array[ 3 ];

			auto reader = CDBManager::query ( "SELECT id FROM staff WHERE name = '" + owner_name + "'" );
			reader->Read ( );
			int i_owner = reader->GetInt32 ( 0 );

			reader = CDBManager::query ( "SELECT id FROM authors WHERE name = '" + author_name + "'" );
			reader->Read ( );
			int i_author = reader->GetInt32 ( 0 );

			reader = CDBManager::query ( "SELECT id FROM books WHERE name = '" + book_name + "'" );
			reader->Read ( );
			int i_book = reader->GetInt32 ( 0 );

			auto cmd = CDBManager::getCmd ( "INSERT INTO library(book_id, author_id, owner_id)"
											"VALUES(@book_id, @author_id, @owner_id)" );
			cmd->Parameters->AddWithValue ( "@book_id", i_book );
			cmd->Parameters->AddWithValue ( "@author_id", i_author );
			cmd->Parameters->AddWithValue ( "@owner_id", i_owner );
			cmd->ExecuteNonQuery ( );
		}
	}
};
}
