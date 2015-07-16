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
	/// Summary for Issue_Return
	/// </summary>
	public ref class IssueUI : public System::Windows::Forms::Form
	{
	public:

		int lib_id, student_id, staff_id;
		DataGridView ^dgvBooks;
	private: System::Windows::Forms::ErrorProvider^  errorProvider;
	public:
	private: System::Windows::Forms::TextBox^  tbStudentName;
	public:

		IssueUI ( int lib_id, DataGridView ^dgvBooks )
		{
			this->dgvBooks = dgvBooks;
			this->lib_id = lib_id;
			InitializeComponent ( );
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
	private: System::Windows::Forms::ComboBox^  cbStaffID;
	private: System::Windows::Forms::Button^  btStudent;
	private: System::Windows::Forms::Button^  btStaff;
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
			this->cbStaffID = ( gcnew System::Windows::Forms::ComboBox ( ) );
			this->btStudent = ( gcnew System::Windows::Forms::Button ( ) );
			this->btStaff = ( gcnew System::Windows::Forms::Button ( ) );
			this->tbStudentName = ( gcnew System::Windows::Forms::TextBox ( ) );
			this->errorProvider = ( gcnew System::Windows::Forms::ErrorProvider ( this->components ) );
			( cli::safe_cast<System::ComponentModel::ISupportInitialize^>( this->errorProvider ) )->BeginInit ( );
			this->SuspendLayout ( );
			// 
			// cbStudentID
			// 
			this->cbStudentID->AllowDrop = true;
			this->cbStudentID->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->cbStudentID->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->cbStudentID->Font = ( gcnew System::Drawing::Font ( L"Microsoft Sans Serif", 8.25F ) );
			this->cbStudentID->FormattingEnabled = true;
			this->cbStudentID->Location = System::Drawing::Point ( 41, 90 );
			this->cbStudentID->Name = L"cbStudentID";
			this->cbStudentID->Size = System::Drawing::Size ( 272, 21 );
			this->cbStudentID->Sorted = true;
			this->cbStudentID->TabIndex = 6;
			this->cbStudentID->TextChanged += gcnew System::EventHandler ( this, &IssueUI::cbStudentID_TextChanged );
			// 
			// cbStaffID
			// 
			this->cbStaffID->AllowDrop = true;
			this->cbStaffID->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->cbStaffID->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->cbStaffID->Font = ( gcnew System::Drawing::Font ( L"Microsoft Sans Serif", 8.25F ) );
			this->cbStaffID->FormattingEnabled = true;
			this->cbStaffID->Location = System::Drawing::Point ( 420, 90 );
			this->cbStaffID->Name = L"cbStaffID";
			this->cbStaffID->Size = System::Drawing::Size ( 272, 21 );
			this->cbStaffID->Sorted = true;
			this->cbStaffID->TabIndex = 7;
			// 
			// btStudent
			// 
			this->btStudent->Location = System::Drawing::Point ( 82, 155 );
			this->btStudent->Name = L"btStudent";
			this->btStudent->Size = System::Drawing::Size ( 181, 69 );
			this->btStudent->TabIndex = 8;
			this->btStudent->Text = L"Student";
			this->btStudent->UseVisualStyleBackColor = true;
			this->btStudent->Click += gcnew System::EventHandler ( this, &IssueUI::btStudent_Click );
			// 
			// btStaff
			// 
			this->btStaff->Location = System::Drawing::Point ( 470, 155 );
			this->btStaff->Name = L"btStaff";
			this->btStaff->Size = System::Drawing::Size ( 181, 69 );
			this->btStaff->TabIndex = 9;
			this->btStaff->Text = L"Professor";
			this->btStaff->UseVisualStyleBackColor = true;
			this->btStaff->Click += gcnew System::EventHandler ( this, &IssueUI::btStaff_Click );
			// 
			// tbStudentName
			// 
			this->tbStudentName->Enabled = false;
			this->tbStudentName->Location = System::Drawing::Point ( 41, 38 );
			this->tbStudentName->Name = L"tbStudentName";
			this->tbStudentName->Size = System::Drawing::Size ( 272, 20 );
			this->tbStudentName->TabIndex = 10;
			// 
			// errorProvider
			// 
			this->errorProvider->ContainerControl = this;
			// 
			// IssueUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF ( 6, 13 );
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size ( 769, 375 );
			this->Controls->Add ( this->tbStudentName );
			this->Controls->Add ( this->btStaff );
			this->Controls->Add ( this->btStudent );
			this->Controls->Add ( this->cbStaffID );
			this->Controls->Add ( this->cbStudentID );
			this->Name = L"IssueUI";
			this->Text = L"IssueUI";
			this->Shown += gcnew System::EventHandler ( this, &IssueUI::IssueUI_Shown );
			( cli::safe_cast<System::ComponentModel::ISupportInitialize^>( this->errorProvider ) )->EndInit ( );
			this->ResumeLayout ( false );
			this->PerformLayout ( );

		}
#pragma endregion

	public:
		void cbStudentID_Fetch ( )
		{
			auto names = CLibDBManager::getStudents ( );
			cbStudentID->Items->Clear ( );
			cbStudentID->Items->AddRange ( names->ToArray ( ) );
		}

		void cbOwner_Fetch ( )
		{
			auto names = CLibDBManager::getStaff ( );
			cbStaffID->Items->Clear ( );
			cbStaffID->Items->AddRange ( names->ToArray ( ) );
		}

	private: System::Void IssueUI_Shown ( System::Object^  sender, System::EventArgs^  e )
	{
		cbStudentID_Fetch ( );
		cbOwner_Fetch ( );
	}

	public: void finishIssue ( )
	{
		MySqlDataAdapter ^adapter = CDBManager::getAdapter ( "SELECT * FROM view_library ORDER BY id" );
		DataSet ^dsBooks = gcnew DataSet ( );
		dsBooks->BeginInit ( );
		dsBooks->Clear ( );
		adapter->Fill ( dsBooks );
		dgvBooks->DataSource = dsBooks->Tables[ 0 ];
		MessageBox::Show ( "Succesfully issued." );
	}

	private: System::Void btStudent_Click ( System::Object^  sender, System::EventArgs^  e )
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
		CDBManager::insert ( "issue_history", "lib_id, student_id, issue_date",
							 lib_id, student_id, ( gcnew DateTime ( ) )->Now );
		finishIssue ( );
	}

	private: System::Void btStaff_Click ( System::Object^  sender, System::EventArgs^  e )
	{
		String ^name = cbStaffID->Text;
		int staff_id = CLibDBManager::addStaff ( name );
		CDBManager::insert ( "issue_history", "lib_id, staff_id, issue_date",
							 lib_id, staff_id, ( gcnew DateTime ( ) )->Now );
		finishIssue ( );
	}

	private: System::Void cbStudentID_TextChanged ( System::Object^  sender, System::EventArgs^  e )
	{
		String ^student_id = cbStudentID->Text;
		tbStudentName->Enabled = !cbStudentID->Items->Contains ( student_id );
	}
};
}
