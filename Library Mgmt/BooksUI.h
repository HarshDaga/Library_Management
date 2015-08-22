#pragma once
#include "common.h"
#include "IssueUI.h"
#include "IssueHistoryUI.h"

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
		IssueHistoryUI ^issueHistoryUI;
	private: System::Windows::Forms::Button^  btIssue;
	private: System::Windows::Forms::ToolTip^  toolTip;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip;
	private: System::Windows::Forms::ToolStripMenuItem^  issueToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  issueHistoryToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  deleteToolStripMenuItem;

	private: System::Windows::Forms::Button^  btDelete;
	public:
		BooksUI ( void )
		{
			InitializeComponent ( );
			issueUI = gcnew IssueUI ( 0, dgvBooks );
			issueHistoryUI = gcnew IssueHistoryUI ( );
			this->Icon = CDummy::gIcon;
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

	private: System::Windows::Forms::Button^  btBookName;
	private: System::Windows::Forms::Button^  btAuthor;



	private: System::Windows::Forms::GroupBox^  gbSearchBooks;
	private: System::Data::DataSet^  dsBooks;
	private: System::Windows::Forms::ComboBox^  cbOwner;
	private: System::Windows::Forms::Button^  btOwner;

	private: System::Windows::Forms::ComboBox^  cbAuthor;
	private: System::Windows::Forms::ComboBox^  cbBookName;
	private: System::ComponentModel::IContainer^  components;

#pragma endregion

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
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = ( gcnew System::Windows::Forms::DataGridViewCellStyle ( ) );
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = ( gcnew System::Windows::Forms::DataGridViewCellStyle ( ) );
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle3 = ( gcnew System::Windows::Forms::DataGridViewCellStyle ( ) );
			this->dgvBooks = ( gcnew System::Windows::Forms::DataGridView ( ) );
			this->contextMenuStrip = ( gcnew System::Windows::Forms::ContextMenuStrip ( this->components ) );
			this->issueToolStripMenuItem = ( gcnew System::Windows::Forms::ToolStripMenuItem ( ) );
			this->issueHistoryToolStripMenuItem = ( gcnew System::Windows::Forms::ToolStripMenuItem ( ) );
			this->deleteToolStripMenuItem = ( gcnew System::Windows::Forms::ToolStripMenuItem ( ) );
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
			this->toolTip = ( gcnew System::Windows::Forms::ToolTip ( this->components ) );
			( cli::safe_cast<System::ComponentModel::ISupportInitialize^>( this->dgvBooks ) )->BeginInit ( );
			this->contextMenuStrip->SuspendLayout ( );
			( cli::safe_cast<System::ComponentModel::ISupportInitialize^>( this->dsBooks ) )->BeginInit ( );
			this->gbSearchBooks->SuspendLayout ( );
			this->SuspendLayout ( );
			// 
			// dgvBooks
			// 
			this->dgvBooks->AllowUserToAddRows = false;
			this->dgvBooks->AllowUserToDeleteRows = false;
			this->dgvBooks->AllowUserToOrderColumns = true;
			this->dgvBooks->AllowUserToResizeRows = false;
			this->dgvBooks->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dgvBooks->BackgroundColor = System::Drawing::SystemColors::ControlDark;
			this->dgvBooks->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::Raised;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::ControlLight;
			dataGridViewCellStyle1->Font = ( gcnew System::Drawing::Font ( L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
																		   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>( 0 ) ) );
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgvBooks->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dgvBooks->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvBooks->ContextMenuStrip = this->contextMenuStrip;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::ControlLight;
			dataGridViewCellStyle2->Font = ( gcnew System::Drawing::Font ( L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
																		   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>( 0 ) ) );
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dgvBooks->DefaultCellStyle = dataGridViewCellStyle2;
			this->dgvBooks->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->dgvBooks->Location = System::Drawing::Point ( 12, 169 );
			this->dgvBooks->MultiSelect = false;
			this->dgvBooks->Name = L"dgvBooks";
			this->dgvBooks->ReadOnly = true;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::ControlLight;
			dataGridViewCellStyle3->Font = ( gcnew System::Drawing::Font ( L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
																		   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>( 0 ) ) );
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgvBooks->RowHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dgvBooks->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->dgvBooks->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->dgvBooks->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dgvBooks->Size = System::Drawing::Size ( 1010, 406 );
			this->dgvBooks->TabIndex = 0;
			this->dgvBooks->TabStop = false;
			this->toolTip->SetToolTip ( this->dgvBooks, L"Double Click or Return to Issue" );
			this->dgvBooks->CellDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler ( this, &BooksUI::dgvBooks_CellDoubleClick );
			this->dgvBooks->CurrentCellChanged += gcnew System::EventHandler ( this, &BooksUI::dgvBooks_CurrentCellChanged );
			this->dgvBooks->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler ( this, &BooksUI::dgvBooks_KeyPress );
			// 
			// contextMenuStrip
			// 
			this->contextMenuStrip->Items->AddRange ( gcnew cli::array< System::Windows::Forms::ToolStripItem^  > ( 3 )
			{
				this->issueToolStripMenuItem,
					this->issueHistoryToolStripMenuItem, this->deleteToolStripMenuItem
			} );
			this->contextMenuStrip->Name = L"contextMenuStrip";
			this->contextMenuStrip->Size = System::Drawing::Size ( 170, 70 );
			// 
			// issueToolStripMenuItem
			// 
			this->issueToolStripMenuItem->Name = L"issueToolStripMenuItem";
			this->issueToolStripMenuItem->Size = System::Drawing::Size ( 169, 22 );
			this->issueToolStripMenuItem->Text = L"Issue";
			this->issueToolStripMenuItem->Click += gcnew System::EventHandler ( this, &BooksUI::menuItemIssue_Click );
			// 
			// issueHistoryToolStripMenuItem
			// 
			this->issueHistoryToolStripMenuItem->Name = L"issueHistoryToolStripMenuItem";
			this->issueHistoryToolStripMenuItem->Size = System::Drawing::Size ( 169, 22 );
			this->issueHistoryToolStripMenuItem->Text = L"View Issue History";
			this->issueHistoryToolStripMenuItem->Click += gcnew System::EventHandler ( this, &BooksUI::issueHistoryToolStripMenuItem_Click );
			// 
			// deleteToolStripMenuItem
			// 
			this->deleteToolStripMenuItem->Name = L"deleteToolStripMenuItem";
			this->deleteToolStripMenuItem->Size = System::Drawing::Size ( 169, 22 );
			this->deleteToolStripMenuItem->Text = L"Delete";
			this->deleteToolStripMenuItem->Click += gcnew System::EventHandler ( this, &BooksUI::deleteToolStripMenuItem_Click );
			// 
			// dsBooks
			// 
			this->dsBooks->DataSetName = L"Books DataSet";
			// 
			// btReset
			// 
			this->btReset->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btReset->FlatAppearance->BorderSize = 0;
			this->btReset->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btReset->Font = ( gcnew System::Drawing::Font ( L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																  static_cast<System::Byte>( 0 ) ) );
			this->btReset->Location = System::Drawing::Point ( 12, 31 );
			this->btReset->Name = L"btReset";
			this->btReset->Size = System::Drawing::Size ( 130, 94 );
			this->btReset->TabIndex = 1;
			this->btReset->Text = L"RESET";
			this->toolTip->SetToolTip ( this->btReset, L"Reset all filters." );
			this->btReset->UseVisualStyleBackColor = false;
			this->btReset->Click += gcnew System::EventHandler ( this, &BooksUI::btReset_Click );
			// 
			// btBookName
			// 
			this->btBookName->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btBookName->FlatAppearance->BorderSize = 0;
			this->btBookName->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btBookName->Font = ( gcnew System::Drawing::Font ( L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																	 static_cast<System::Byte>( 0 ) ) );
			this->btBookName->Location = System::Drawing::Point ( 6, 19 );
			this->btBookName->Name = L"btBookName";
			this->btBookName->Size = System::Drawing::Size ( 316, 55 );
			this->btBookName->TabIndex = 2;
			this->btBookName->Text = L"Book Name";
			this->toolTip->SetToolTip ( this->btBookName, L"Filter by book name." );
			this->btBookName->UseVisualStyleBackColor = false;
			this->btBookName->Click += gcnew System::EventHandler ( this, &BooksUI::btBookName_Click );
			// 
			// btAuthor
			// 
			this->btAuthor->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btAuthor->FlatAppearance->BorderSize = 0;
			this->btAuthor->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btAuthor->Font = ( gcnew System::Drawing::Font ( L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																   static_cast<System::Byte>( 0 ) ) );
			this->btAuthor->Location = System::Drawing::Point ( 328, 19 );
			this->btAuthor->Name = L"btAuthor";
			this->btAuthor->Size = System::Drawing::Size ( 266, 55 );
			this->btAuthor->TabIndex = 3;
			this->btAuthor->Text = L"Author";
			this->toolTip->SetToolTip ( this->btAuthor, L"Filter by author name." );
			this->btAuthor->UseVisualStyleBackColor = false;
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
			this->gbSearchBooks->Font = ( gcnew System::Drawing::Font ( L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																		static_cast<System::Byte>( 0 ) ) );
			this->gbSearchBooks->Location = System::Drawing::Point ( 190, 12 );
			this->gbSearchBooks->Name = L"gbSearchBooks";
			this->gbSearchBooks->Size = System::Drawing::Size ( 832, 128 );
			this->gbSearchBooks->TabIndex = 6;
			this->gbSearchBooks->TabStop = false;
			this->gbSearchBooks->Text = L"Search Books";
			// 
			// cbOwner
			// 
			this->cbOwner->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->cbOwner->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->cbOwner->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->cbOwner->Font = ( gcnew System::Drawing::Font ( L"Microsoft Sans Serif", 8.25F ) );
			this->cbOwner->FormattingEnabled = true;
			this->cbOwner->Location = System::Drawing::Point ( 600, 95 );
			this->cbOwner->Name = L"cbOwner";
			this->cbOwner->Size = System::Drawing::Size ( 226, 21 );
			this->cbOwner->Sorted = true;
			this->cbOwner->TabIndex = 7;
			// 
			// btOwner
			// 
			this->btOwner->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btOwner->FlatAppearance->BorderSize = 0;
			this->btOwner->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btOwner->Font = ( gcnew System::Drawing::Font ( L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																  static_cast<System::Byte>( 0 ) ) );
			this->btOwner->Location = System::Drawing::Point ( 600, 19 );
			this->btOwner->Name = L"btOwner";
			this->btOwner->Size = System::Drawing::Size ( 226, 55 );
			this->btOwner->TabIndex = 4;
			this->btOwner->Text = L"Owner";
			this->toolTip->SetToolTip ( this->btOwner, L"Filter by owner name." );
			this->btOwner->UseVisualStyleBackColor = false;
			this->btOwner->Click += gcnew System::EventHandler ( this, &BooksUI::btOwner_Click );
			// 
			// cbAuthor
			// 
			this->cbAuthor->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->cbAuthor->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->cbAuthor->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->cbAuthor->Font = ( gcnew System::Drawing::Font ( L"Microsoft Sans Serif", 8.25F ) );
			this->cbAuthor->FormattingEnabled = true;
			this->cbAuthor->Location = System::Drawing::Point ( 328, 95 );
			this->cbAuthor->Name = L"cbAuthor";
			this->cbAuthor->Size = System::Drawing::Size ( 266, 21 );
			this->cbAuthor->Sorted = true;
			this->cbAuthor->TabIndex = 6;
			// 
			// cbBookName
			// 
			this->cbBookName->AllowDrop = true;
			this->cbBookName->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->cbBookName->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->cbBookName->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->cbBookName->Font = ( gcnew System::Drawing::Font ( L"Microsoft Sans Serif", 8.25F ) );
			this->cbBookName->FormattingEnabled = true;
			this->cbBookName->Location = System::Drawing::Point ( 6, 95 );
			this->cbBookName->Name = L"cbBookName";
			this->cbBookName->Size = System::Drawing::Size ( 316, 21 );
			this->cbBookName->Sorted = true;
			this->cbBookName->TabIndex = 5;
			// 
			// btIssue
			// 
			this->btIssue->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btIssue->FlatAppearance->BorderSize = 0;
			this->btIssue->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btIssue->Font = ( gcnew System::Drawing::Font ( L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																  static_cast<System::Byte>( 0 ) ) );
			this->btIssue->Location = System::Drawing::Point ( 161, 581 );
			this->btIssue->Name = L"btIssue";
			this->btIssue->Size = System::Drawing::Size ( 272, 55 );
			this->btIssue->TabIndex = 8;
			this->btIssue->Text = L"Issue";
			this->btIssue->UseVisualStyleBackColor = false;
			this->btIssue->Click += gcnew System::EventHandler ( this, &BooksUI::btIssue_Click );
			// 
			// btDelete
			// 
			this->btDelete->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btDelete->FlatAppearance->BorderSize = 0;
			this->btDelete->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb ( static_cast<System::Int32>( static_cast<System::Byte>( 255 ) ),
																									static_cast<System::Int32>( static_cast<System::Byte>( 128 ) ), static_cast<System::Int32>( static_cast<System::Byte>( 128 ) ) );
			this->btDelete->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btDelete->Font = ( gcnew System::Drawing::Font ( L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																   static_cast<System::Byte>( 0 ) ) );
			this->btDelete->ForeColor = System::Drawing::Color::DarkRed;
			this->btDelete->Location = System::Drawing::Point ( 579, 581 );
			this->btDelete->Name = L"btDelete";
			this->btDelete->Size = System::Drawing::Size ( 272, 55 );
			this->btDelete->TabIndex = 9;
			this->btDelete->Text = L"Delete";
			this->toolTip->SetToolTip ( this->btDelete, L"Delete entry from database!" );
			this->btDelete->UseVisualStyleBackColor = false;
			this->btDelete->Click += gcnew System::EventHandler ( this, &BooksUI::btDelete_Click );
			// 
			// BooksUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF ( 6, 13 );
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size ( 1034, 648 );
			this->Controls->Add ( this->btDelete );
			this->Controls->Add ( this->btIssue );
			this->Controls->Add ( this->gbSearchBooks );
			this->Controls->Add ( this->btReset );
			this->Controls->Add ( this->dgvBooks );
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"BooksUI";
			this->Text = L"Books";
			this->Shown += gcnew System::EventHandler ( this, &BooksUI::BooksUI_Shown );
			( cli::safe_cast<System::ComponentModel::ISupportInitialize^>( this->dgvBooks ) )->EndInit ( );
			this->contextMenuStrip->ResumeLayout ( false );
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
		auto table = dsBooks->Tables[ 0 ];
		if ( !table->Columns->Contains ( "Status" ) )
		{
			table->Columns->Add ( "Status" );
			table->Columns[ "Status" ]->Expression = "IIF(Available=1, 'Available', 'Issued')";
		}
		dgvBooks->DataSource = table;
		dgvBooks->Columns[ "Available" ]->Visible = false;
	}

	private: System::Void btReset_Click ( System::Object^  sender, System::EventArgs^  e )
	{
		refreshView ( );
		DSFILTER = "";
	}

	private: System::Void cbAuthor_Fetch ( )
	{
		cbAuthor->Items->Clear ( );
		cbAuthor->Items->AddRange ( CLibDBManager::getAuthors ( )->ToArray ( ) );
	}

	private: System::Void cbOwner_Fetch ( )
	{
		cbOwner->Items->Clear ( );
		cbOwner->Items->AddRange ( CLibDBManager::getStaff ( )->ToArray ( ) );
	}

	private: System::Void cbBookName_Fetch ( )
	{
		cbBookName->Items->Clear ( );
		cbBookName->Items->AddRange ( CLibDBManager::getBooks ( )->ToArray ( ) );
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
		DSFILTER = "ID >= 1 ";
		if ( !String::IsNullOrEmpty ( book_name ) )
			DSFILTER += "AND Book = '" + book_name + "' ";
		if ( !String::IsNullOrEmpty ( author_name ) )
			DSFILTER += "AND Author = '" + author_name + "' ";
		if ( !String::IsNullOrEmpty ( owner_name ) )
			DSFILTER += "AND Owner = '" + owner_name + "' ";
	}

	private: System::Void btBookName_Click ( System::Object^  sender, System::EventArgs^  e )
	{
		book_name = ( cbBookName->SelectedIndex == -1 ) ? "" : cbBookName->Text;
		UpdateConstraints ( );
	}

	private: System::Void btAuthor_Click ( System::Object^  sender, System::EventArgs^  e )
	{
		author_name = ( cbAuthor->SelectedIndex == -1 ) ? "" : cbAuthor->Text;
		UpdateConstraints ( );
	}

	private: System::Void btOwner_Click ( System::Object^  sender, System::EventArgs^  e )
	{
		owner_name = ( cbOwner->SelectedIndex == -1 ) ? "" : cbOwner->Text;
		UpdateConstraints ( );
	}

	private: System::Void btIssue_Click ( System::Object^  sender, System::EventArgs^  e )
	{
		int id = Convert::ToInt32 ( dgvBooks->CurrentRow->Cells[ "ID" ]->Value );
		if ( btIssue->Text == "Return" )
		{
			auto reader = CDBManager::query ( "SELECT * FROM issue_history WHERE lib_id = " + id.ToString ( ) +
											  " AND return_date IS NULL" );
			if ( reader->Read ( ) )
			{
				auto cmd = CDBManager::getCmd ( "UPDATE issue_history SET return_date = @return_date "
												"WHERE lib_id = " + id.ToString ( ) );
				cmd->Prepare ( );
				cmd->Parameters->AddWithValue ( "@return_date", ( gcnew DateTime ( ) )->Now );
				cmd->ExecuteNonQuery ( );
			}
			refreshView ( );
			MessageBox::Show ( "The book has been returned.", "Returned",
							   MessageBoxButtons::OK, MessageBoxIcon::Asterisk );
			return;
		}
		if ( !issueUI->Visible )
		{
			issueUI = gcnew IssueUI ( id, dgvBooks );
			issueUI->Show ( );
		}
		else
			issueUI->lib_id = id;
		issueUI->Focus ( );
	}

	private: System::Void btDelete_Click ( System::Object^  sender, System::EventArgs^  e )
	{
		int id = Convert::ToInt32 ( dgvBooks->CurrentRow->Cells[ "ID" ]->Value );
		auto result = MessageBox::Show ( "This operation is irreversible.\n"
										 "Proceed?", "Delete Book", MessageBoxButtons::YesNo,
										 MessageBoxIcon::Question, MessageBoxDefaultButton::Button2 );
		if ( result == System::Windows::Forms::DialogResult::Yes )
		{
			CDBManager::nonQuery ( "DELETE FROM library WHERE id = " + id.ToString ( ) );
			refreshView ( );
		}
	}

	private: System::Void dgvBooks_CurrentCellChanged ( System::Object^  sender, System::EventArgs^  e )
	{
		if ( !dgvBooks->CurrentRow )
			return;
		int id = Convert::ToInt32 ( dgvBooks->CurrentRow->Cells[ "ID" ]->Value );
		btIssue->Text = ( Convert::ToBoolean ( dgvBooks->CurrentRow->Cells[ "Available" ]->Value ) ) ?
			"Issue" : "Return";
		issueToolStripMenuItem->Text = btIssue->Text;
	}

	private: System::Void dgvBooks_CellDoubleClick ( System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e )
	{
		btIssue->PerformClick ( );
	}
	private: System::Void dgvBooks_KeyPress ( System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e )
	{
		if ( e->KeyChar == (char) Keys::Return ||
			 e->KeyChar == (char) Keys::Space )
			 btIssue->PerformClick ( );
		else if ( Char::ToUpper ( e->KeyChar ) == (char) Keys::D )
			btDelete->PerformClick ( );
	}

	private: System::Void menuItemIssue_Click ( System::Object^  sender, System::EventArgs^  e )
	{
		btIssue->PerformClick ( );
	}

	private: System::Void issueHistoryToolStripMenuItem_Click ( System::Object^  sender, System::EventArgs^  e )
	{
		String ^book = Convert::ToString ( dgvBooks->CurrentRow->Cells[ "Book" ]->Value );
		String ^author = Convert::ToString ( dgvBooks->CurrentRow->Cells[ "Author" ]->Value );
		if ( !issueHistoryUI->Visible )
		{
			issueHistoryUI = gcnew IssueHistoryUI ( );
			issueHistoryUI->Show ( );
		}
		issueHistoryUI->Focus ( );
		String ^constraint = "Book = '" + book + "' AND Author = '" + author + "'";
		issueHistoryUI->dsHistory->Tables[ 0 ]->DefaultView->RowFilter = constraint;
	}

	private: System::Void deleteToolStripMenuItem_Click ( System::Object^  sender, System::EventArgs^  e )
	{
		btDelete->PerformClick ( );
	}
#undef DSFILTER
	};
}
