#pragma once
#include "common.h"
#include "IssueUI.h"

namespace LibraryMgmt
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for BooksUI
	/// </summary>
	public ref class BooksUI : public System::Windows::Forms::Form
	{

	public:
		String ^book_name, ^author_name, ^owner_name;
		IssueUI ^issueUI;
	private: System::Windows::Forms::Button^  btIssue;

	private: System::Windows::Forms::Button^  btDelete;

	public:
		BooksUI ( void )
		{
			InitializeComponent ( );
			issueUI = gcnew IssueUI ( 0, dgvBooks );
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~BooksUI ( )
		{
			if ( components )
			{
				delete components;
			}
		}
#pragma region Controls
	public: System::Windows::Forms::DataGridView^  dgvBooks;
	public: System::Windows::Forms::Button^  btReset;
	private:

	protected:

	private: System::Windows::Forms::Button^  btBookName;
	private: System::Windows::Forms::Button^  btAuthor;



	private: System::Windows::Forms::GroupBox^  gbSearchBooks;
	private: System::Data::DataSet^  dsBooks;
	private: System::Windows::Forms::ComboBox^  cbOwner;
	private: System::Windows::Forms::Button^  btOwner;

	private: System::Windows::Forms::ComboBox^  cbAuthor;
	private: System::Windows::Forms::ComboBox^  cbBookName;

#pragma endregion

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent ( void )
		{
			this->dgvBooks = ( gcnew System::Windows::Forms::DataGridView ( ) );
			this->dsBooks = ( gcnew System::Data::DataSet ( ) );
			this->btReset = ( gcnew System::Windows::Forms::Button ( ) );
			this->btBookName = ( gcnew System::Windows::Forms::Button ( ) );
			this->btAuthor = ( gcnew System::Windows::Forms::Button ( ) );
			this->gbSearchBooks = ( gcnew System::Windows::Forms::GroupBox ( ) );
			this->cbOwner = ( gcnew System::Windows::Forms::ComboBox ( ) );
			this->btOwner = ( gcnew System::Windows::Forms::Button ( ) );
			this->cbAuthor = ( gcnew System::Windows::Forms::ComboBox ( ) );
			this->cbBookName = ( gcnew System::Windows::Forms::ComboBox ( ) );
			this->btIssue = ( gcnew System::Windows::Forms::Button ( ) );
			this->btDelete = ( gcnew System::Windows::Forms::Button ( ) );
			( cli::safe_cast<System::ComponentModel::ISupportInitialize^>( this->dgvBooks ) )->BeginInit ( );
			( cli::safe_cast<System::ComponentModel::ISupportInitialize^>( this->dsBooks ) )->BeginInit ( );
			this->gbSearchBooks->SuspendLayout ( );
			this->SuspendLayout ( );
			// 
			// dgvBooks
			// 
			this->dgvBooks->AllowUserToAddRows = false;
			this->dgvBooks->AllowUserToDeleteRows = false;
			this->dgvBooks->AllowUserToOrderColumns = true;
			this->dgvBooks->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvBooks->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->dgvBooks->Location = System::Drawing::Point ( 12, 169 );
			this->dgvBooks->MultiSelect = false;
			this->dgvBooks->Name = L"dgvBooks";
			this->dgvBooks->ReadOnly = true;
			this->dgvBooks->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dgvBooks->Size = System::Drawing::Size ( 891, 252 );
			this->dgvBooks->TabIndex = 0;
			this->dgvBooks->CurrentCellChanged += gcnew System::EventHandler ( this, &BooksUI::dgvBooks_CurrentCellChanged );
			// 
			// dsBooks
			// 
			this->dsBooks->DataSetName = L"Books DataSet";
			// 
			// btReset
			// 
			this->btReset->Font = ( gcnew System::Drawing::Font ( L"Consolas", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>( 0 ) ) );
			this->btReset->Location = System::Drawing::Point ( 12, 31 );
			this->btReset->Name = L"btReset";
			this->btReset->Size = System::Drawing::Size ( 130, 94 );
			this->btReset->TabIndex = 1;
			this->btReset->Text = L"RESET";
			this->btReset->UseVisualStyleBackColor = true;
			this->btReset->Click += gcnew System::EventHandler ( this, &BooksUI::btReset_Click );
			// 
			// btBookName
			// 
			this->btBookName->Font = ( gcnew System::Drawing::Font ( L"Consolas", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>( 0 ) ) );
			this->btBookName->Location = System::Drawing::Point ( 6, 19 );
			this->btBookName->Name = L"btBookName";
			this->btBookName->Size = System::Drawing::Size ( 272, 55 );
			this->btBookName->TabIndex = 2;
			this->btBookName->Text = L"Book Name";
			this->btBookName->UseVisualStyleBackColor = true;
			this->btBookName->Click += gcnew System::EventHandler ( this, &BooksUI::btBookName_Click );
			// 
			// btAuthor
			// 
			this->btAuthor->Font = ( gcnew System::Drawing::Font ( L"Consolas", 14 ) );
			this->btAuthor->Location = System::Drawing::Point ( 284, 19 );
			this->btAuthor->Name = L"btAuthor";
			this->btAuthor->Size = System::Drawing::Size ( 213, 55 );
			this->btAuthor->TabIndex = 4;
			this->btAuthor->Text = L"Author";
			this->btAuthor->UseVisualStyleBackColor = true;
			this->btAuthor->Click += gcnew System::EventHandler ( this, &BooksUI::btAuthor_Click );
			// 
			// gbSearchBooks
			// 
			this->gbSearchBooks->Controls->Add ( this->cbOwner );
			this->gbSearchBooks->Controls->Add ( this->btOwner );
			this->gbSearchBooks->Controls->Add ( this->cbAuthor );
			this->gbSearchBooks->Controls->Add ( this->cbBookName );
			this->gbSearchBooks->Controls->Add ( this->btBookName );
			this->gbSearchBooks->Controls->Add ( this->btAuthor );
			this->gbSearchBooks->Font = ( gcnew System::Drawing::Font ( L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>( 0 ) ) );
			this->gbSearchBooks->Location = System::Drawing::Point ( 190, 12 );
			this->gbSearchBooks->Name = L"gbSearchBooks";
			this->gbSearchBooks->Size = System::Drawing::Size ( 713, 128 );
			this->gbSearchBooks->TabIndex = 6;
			this->gbSearchBooks->TabStop = false;
			this->gbSearchBooks->Text = L"Search Books";
			// 
			// cbOwner
			// 
			this->cbOwner->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->cbOwner->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->cbOwner->Font = ( gcnew System::Drawing::Font ( L"Microsoft Sans Serif", 8.25F ) );
			this->cbOwner->FormattingEnabled = true;
			this->cbOwner->Location = System::Drawing::Point ( 503, 95 );
			this->cbOwner->Name = L"cbOwner";
			this->cbOwner->Size = System::Drawing::Size ( 166, 21 );
			this->cbOwner->Sorted = true;
			this->cbOwner->TabIndex = 8;
			// 
			// btOwner
			// 
			this->btOwner->Font = ( gcnew System::Drawing::Font ( L"Consolas", 14 ) );
			this->btOwner->Location = System::Drawing::Point ( 503, 19 );
			this->btOwner->Name = L"btOwner";
			this->btOwner->Size = System::Drawing::Size ( 166, 55 );
			this->btOwner->TabIndex = 7;
			this->btOwner->Text = L"Owner";
			this->btOwner->UseVisualStyleBackColor = true;
			this->btOwner->Click += gcnew System::EventHandler ( this, &BooksUI::btOwner_Click );
			// 
			// cbAuthor
			// 
			this->cbAuthor->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->cbAuthor->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->cbAuthor->Font = ( gcnew System::Drawing::Font ( L"Microsoft Sans Serif", 8.25F ) );
			this->cbAuthor->FormattingEnabled = true;
			this->cbAuthor->Location = System::Drawing::Point ( 284, 95 );
			this->cbAuthor->Name = L"cbAuthor";
			this->cbAuthor->Size = System::Drawing::Size ( 213, 21 );
			this->cbAuthor->Sorted = true;
			this->cbAuthor->TabIndex = 6;
			// 
			// cbBookName
			// 
			this->cbBookName->AllowDrop = true;
			this->cbBookName->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->cbBookName->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->cbBookName->Font = ( gcnew System::Drawing::Font ( L"Microsoft Sans Serif", 8.25F ) );
			this->cbBookName->FormattingEnabled = true;
			this->cbBookName->Location = System::Drawing::Point ( 6, 95 );
			this->cbBookName->Name = L"cbBookName";
			this->cbBookName->Size = System::Drawing::Size ( 272, 21 );
			this->cbBookName->Sorted = true;
			this->cbBookName->TabIndex = 5;
			// 
			// btIssue
			// 
			this->btIssue->Font = ( gcnew System::Drawing::Font ( L"Consolas", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>( 0 ) ) );
			this->btIssue->Location = System::Drawing::Point ( 136, 456 );
			this->btIssue->Name = L"btIssue";
			this->btIssue->Size = System::Drawing::Size ( 272, 55 );
			this->btIssue->TabIndex = 7;
			this->btIssue->Text = L"Issue";
			this->btIssue->UseVisualStyleBackColor = true;
			this->btIssue->Click += gcnew System::EventHandler ( this, &BooksUI::btIssue_Click );
			// 
			// btDelete
			// 
			this->btDelete->Font = ( gcnew System::Drawing::Font ( L"Consolas", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>( 0 ) ) );
			this->btDelete->ForeColor = System::Drawing::Color::Red;
			this->btDelete->Location = System::Drawing::Point ( 554, 456 );
			this->btDelete->Name = L"btDelete";
			this->btDelete->Size = System::Drawing::Size ( 272, 55 );
			this->btDelete->TabIndex = 9;
			this->btDelete->Text = L"Delete";
			this->btDelete->UseVisualStyleBackColor = true;
			this->btDelete->Click += gcnew System::EventHandler ( this, &BooksUI::btDelete_Click );
			// 
			// BooksUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF ( 6, 13 );
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size ( 935, 532 );
			this->Controls->Add ( this->btDelete );
			this->Controls->Add ( this->btIssue );
			this->Controls->Add ( this->gbSearchBooks );
			this->Controls->Add ( this->btReset );
			this->Controls->Add ( this->dgvBooks );
			this->Name = L"BooksUI";
			this->Text = L"BooksUI";
			this->Shown += gcnew System::EventHandler ( this, &BooksUI::BooksUI_Shown );
			( cli::safe_cast<System::ComponentModel::ISupportInitialize^>( this->dgvBooks ) )->EndInit ( );
			( cli::safe_cast<System::ComponentModel::ISupportInitialize^>( this->dsBooks ) )->EndInit ( );
			this->gbSearchBooks->ResumeLayout ( false );
			this->ResumeLayout ( false );

		}
#pragma endregion

#define DSFILTER	dsBooks->Tables[ 0 ]->DefaultView->RowFilter

	public: void refreshView ( )
	{
		MySqlDataAdapter ^adapter = CDBManager::getAdapter ( "SELECT * FROM view_library ORDER BY id" );
		dsBooks->Clear ( );
		adapter->Fill ( dsBooks );
		dgvBooks->DataSource = dsBooks->Tables[ 0 ];
	}

	private: System::Void btReset_Click ( System::Object^  sender, System::EventArgs^  e )
	{
		refreshView ( );
		DSFILTER = "";
	}

	private: System::Void cbAuthor_Fetch ( )
	{
		auto names = CLibDBManager::getAuthors ( );
		cbAuthor->Items->Clear ( );
		cbAuthor->Items->AddRange ( names->ToArray ( ) );
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

	private: System::Void BooksUI_Shown ( System::Object^  sender, System::EventArgs^  e )
	{
		cbAuthor_Fetch ( );
		cbOwner_Fetch ( );
		cbBookName_Fetch ( );
		btReset->PerformClick ( );
	}

	public: void UpdateConstraints ( )
	{
		// TODO
		DSFILTER = "ID >=1 ";
		if ( !String::IsNullOrEmpty ( book_name ) )
			DSFILTER += "AND Book = '" + book_name + "' ";
		if ( !String::IsNullOrEmpty ( author_name ) )
			DSFILTER += "AND Author = '" + author_name + "' ";
		if ( !String::IsNullOrEmpty ( owner_name ) )
			DSFILTER += "AND Owner = '" + owner_name + "' ";
	}

	private: System::Void btBookName_Click ( System::Object^  sender, System::EventArgs^  e )
	{
		auto index = cbBookName->SelectedIndex;
		book_name = ( index == -1 ) ? "" : cbBookName->Text;
		UpdateConstraints ( );
	}

	private: System::Void btAuthor_Click ( System::Object^  sender, System::EventArgs^  e )
	{
		auto index = cbAuthor->SelectedIndex;
		author_name = ( index == -1 ) ? "" : cbAuthor->Text;
		UpdateConstraints ( );
	}

	private: System::Void btOwner_Click ( System::Object^  sender, System::EventArgs^  e )
	{
		auto index = cbOwner->SelectedIndex;
		owner_name = ( index == -1 ) ? "" : cbOwner->Text;
		UpdateConstraints ( );
	}

	private: System::Void btIssue_Click ( System::Object^  sender, System::EventArgs^  e )
	{
		int id = dgvBooks->CurrentRow->Index + 1;
		if ( btIssue->Text == "Return" )
		{
			auto reader = CDBManager::query ( "SELECT * FROM issue_history WHERE lib_id = " + id.ToString ( ) + 
											  " AND return_date IS NULL");
			if ( reader->Read ( ) )
			{
				auto cmd = CDBManager::getCmd ( "UPDATE issue_history SET return_date = @return_date "
												"WHERE lib_id = " + id.ToString ( ) );
				cmd->Prepare ( );
				cmd->Parameters->AddWithValue ( "@return_date", ( gcnew DateTime ( ) )->Now );
				cmd->ExecuteNonQuery ( );
			}
			refreshView ( );
			MessageBox::Show ( "The book has been returned." );
			return;
		}
		if ( !issueUI->Visible )
		{
			issueUI = gcnew IssueUI ( id, dgvBooks );
			issueUI->Show ( );
		}
		issueUI->Focus ( );
	}

	private: System::Void btDelete_Click ( System::Object^  sender, System::EventArgs^  e )
	{
		// TO DO
	}

	private: System::Void dgvBooks_CurrentCellChanged ( System::Object^  sender, System::EventArgs^  e )
	{
		if ( !dgvBooks->CurrentRow )
			return;
		int id = dgvBooks->CurrentRow->Index + 1;
		btIssue->Text = ( Convert::ToBoolean ( dgvBooks->CurrentRow->Cells[ "Available" ]->Value ) ) ?
						"Issue" : "Return";
	}
#undef DSFILTER
};
}
