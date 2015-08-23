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
	using namespace System::Resources;

	/// <summary>
	/// Summary for Issue_Return
	/// </summary>
	public ref class IssueUI : public System::Windows::Forms::Form
	{
	public:
		int lib_id, student_id, staff_id;
		DataGridView ^dgvBooks;
		bool isRequest;
	private: System::Windows::Forms::ErrorProvider^  errorProvider;

	private: System::Windows::Forms::GroupBox^  gbStudents;
	private: System::Windows::Forms::ToolTip^  toolTip;
	private: System::Data::DataSet^  dsBooks;

	private: System::Windows::Forms::TextBox^  tbStudentName;
	public:
		IssueUI ( int lib_id, DataGridView ^dgvBooks, bool isRequest )
		{
			this->dgvBooks = dgvBooks;
			this->lib_id = lib_id;
			this->isRequest = isRequest;
			InitializeComponent ( );
			this->Icon = CDummy::gIcon;
			if ( isRequest )
				btIssue->Text = "Request";
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~IssueUI ( )
		{
			if ( components )
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^  cbStudentID;
	private: System::Windows::Forms::Button^  btIssue;

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
			this->cbStudentID = ( gcnew System::Windows::Forms::ComboBox ( ) );
			this->btIssue = ( gcnew System::Windows::Forms::Button ( ) );
			this->tbStudentName = ( gcnew System::Windows::Forms::TextBox ( ) );
			this->errorProvider = ( gcnew System::Windows::Forms::ErrorProvider ( this->components ) );
			this->gbStudents = ( gcnew System::Windows::Forms::GroupBox ( ) );
			this->toolTip = ( gcnew System::Windows::Forms::ToolTip ( this->components ) );
			this->dsBooks = ( gcnew System::Data::DataSet ( ) );
			( cli::safe_cast<System::ComponentModel::ISupportInitialize^>( this->errorProvider ) )->BeginInit ( );
			this->gbStudents->SuspendLayout ( );
			( cli::safe_cast<System::ComponentModel::ISupportInitialize^>( this->dsBooks ) )->BeginInit ( );
			this->SuspendLayout ( );
			// 
			// cbStudentID
			// 
			this->cbStudentID->AllowDrop = true;
			this->cbStudentID->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->cbStudentID->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->cbStudentID->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->cbStudentID->Font = ( gcnew System::Drawing::Font ( L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																	  static_cast<System::Byte>( 0 ) ) );
			this->cbStudentID->FormattingEnabled = true;
			this->cbStudentID->Location = System::Drawing::Point ( 6, 99 );
			this->cbStudentID->Name = L"cbStudentID";
			this->cbStudentID->Size = System::Drawing::Size ( 395, 28 );
			this->cbStudentID->Sorted = true;
			this->cbStudentID->TabIndex = 6;
			this->toolTip->SetToolTip ( this->cbStudentID, L"Student roll no." );
			this->cbStudentID->TextChanged += gcnew System::EventHandler ( this, &IssueUI::cbStudentID_TextChanged );
			// 
			// btIssue
			// 
			this->btIssue->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btIssue->FlatAppearance->BorderSize = 0;
			this->btIssue->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btIssue->Font = ( gcnew System::Drawing::Font ( L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																  static_cast<System::Byte>( 0 ) ) );
			this->btIssue->Location = System::Drawing::Point ( 108, 164 );
			this->btIssue->Name = L"btIssue";
			this->btIssue->Size = System::Drawing::Size ( 181, 69 );
			this->btIssue->TabIndex = 8;
			this->btIssue->Text = L"Issue";
			this->toolTip->SetToolTip ( this->btIssue, L"Issue the book as a student." );
			this->btIssue->UseVisualStyleBackColor = false;
			this->btIssue->Click += gcnew System::EventHandler ( this, &IssueUI::btIssue_Click );
			// 
			// tbStudentName
			// 
			this->tbStudentName->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->tbStudentName->Enabled = false;
			this->tbStudentName->Font = ( gcnew System::Drawing::Font ( L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																		static_cast<System::Byte>( 0 ) ) );
			this->tbStudentName->Location = System::Drawing::Point ( 6, 47 );
			this->tbStudentName->Name = L"tbStudentName";
			this->tbStudentName->Size = System::Drawing::Size ( 395, 31 );
			this->tbStudentName->TabIndex = 7;
			this->toolTip->SetToolTip ( this->tbStudentName, L"Add a student name if the student doesn\'t exist in the database." );
			// 
			// errorProvider
			// 
			this->errorProvider->ContainerControl = this;
			// 
			// gbStudents
			// 
			this->gbStudents->Controls->Add ( this->btIssue );
			this->gbStudents->Controls->Add ( this->tbStudentName );
			this->gbStudents->Controls->Add ( this->cbStudentID );
			this->gbStudents->Font = ( gcnew System::Drawing::Font ( L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																	 static_cast<System::Byte>( 0 ) ) );
			this->gbStudents->Location = System::Drawing::Point ( 12, 12 );
			this->gbStudents->Name = L"gbStudents";
			this->gbStudents->Size = System::Drawing::Size ( 407, 311 );
			this->gbStudents->TabIndex = 11;
			this->gbStudents->TabStop = false;
			this->gbStudents->Text = L"Student";
			// 
			// dsBooks
			// 
			this->dsBooks->DataSetName = L"NewDataSet";
			// 
			// IssueUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF ( 6, 13 );
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size ( 432, 332 );
			this->Controls->Add ( this->gbStudents );
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"IssueUI";
			this->Text = L"Issue";
			this->Shown += gcnew System::EventHandler ( this, &IssueUI::IssueUI_Shown );
			( cli::safe_cast<System::ComponentModel::ISupportInitialize^>( this->errorProvider ) )->EndInit ( );
			this->gbStudents->ResumeLayout ( false );
			this->gbStudents->PerformLayout ( );
			( cli::safe_cast<System::ComponentModel::ISupportInitialize^>( this->dsBooks ) )->EndInit ( );
			this->ResumeLayout ( false );

		}
#pragma endregion

	public: void cbStudentID_Fetch ( )
	{
		auto names = CLibDBManager::getStudents ( );
		cbStudentID->Items->Clear ( );
		cbStudentID->Items->AddRange ( names->ToArray ( ) );
	}

	private: System::Void IssueUI_Shown ( System::Object^  sender, System::EventArgs^  e )
	{
		cbStudentID_Fetch ( );
	}

	public: void updateBooksUI ( )
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
	}

	private: System::Void btIssue_Click ( System::Object^  sender, System::EventArgs^  e )
	{
		errorProvider->Clear ( );
		String ^student_id = cbStudentID->Text;
		if ( !cbStudentID->Items->Contains ( student_id ) )
		{
			String ^student_name = tbStudentName->Text;
			if ( String::IsNullOrEmpty ( student_id ) )
			{
				errorProvider->SetError ( cbStudentID, "Cannot be blank." );
				return;
			}
			if ( String::IsNullOrEmpty ( student_name ) )
			{
				errorProvider->SetError ( tbStudentName, "Cannot be blank." );
				return;
			}
			CLibDBManager::addStudent ( student_id, student_name );
		}
		if ( isRequest )
		{
			auto exists = CDBManager::scalar <unsigned> ( "SELECT 1 FROM request_queue WHERE lib_id=" + lib_id +
														  " AND student_id='" + student_id + "'" );
			if ( exists )
			{
				MessageBox::Show ( "You're already in the queue!", "Oops..",
								   MessageBoxButtons::OK, MessageBoxIcon::Exclamation );
				return;
			}
			CDBManager::insert ( "request_queue", "lib_id, student_id",
								 lib_id, student_id );
			auto pos = CDBManager::scalar<unsigned> ( "SELECT COUNT(1) FROM request_queue WHERE lib_id=" +
													  lib_id );
			MessageBox::Show ( "You're at queue position: " + pos, "Requested",
							   MessageBoxButtons::OK, MessageBoxIcon::Asterisk );
		}
		else
		{
			CDBManager::insert ( "issue_history", "lib_id, student_id, issue_date",
								 lib_id, student_id, ( gcnew DateTime ( ) )->Now );
			MessageBox::Show ( "Successfully issued.", "Issued",
							   MessageBoxButtons::OK, MessageBoxIcon::Asterisk );
		}
		updateBooksUI ( );
		this->Close ( );
	}

	private: System::Void cbStudentID_TextChanged ( System::Object^  sender, System::EventArgs^  e )
	{
		String ^student_id = cbStudentID->Text;
		tbStudentName->Enabled = !cbStudentID->Items->Contains ( student_id );
		if ( !tbStudentName->Enabled )
			tbStudentName->Text = CLibDBManager::findStudent ( student_id, true );
	}

};
}
