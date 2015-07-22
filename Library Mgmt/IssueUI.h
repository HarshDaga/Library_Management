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
	private: System::Windows::Forms::ErrorProvider^  errorProvider;
	private: System::Windows::Forms::GroupBox^  gbStaff;
	private: System::Windows::Forms::GroupBox^  gbStudents;
	private: System::Windows::Forms::ToolTip^  toolTip;

	private: System::Windows::Forms::TextBox^  tbStudentName;
	public:
		IssueUI ( int lib_id, DataGridView ^dgvBooks )
		{
			auto res = gcnew ResXResourceSet ( "./Resource.resx" );
			this->Icon = cli::safe_cast<Drawing::Icon^> ( res->GetObject ( "Icon", true ) );
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
			this->gbStudents = ( gcnew System::Windows::Forms::GroupBox ( ) );
			this->gbStaff = ( gcnew System::Windows::Forms::GroupBox ( ) );
			this->toolTip = ( gcnew System::Windows::Forms::ToolTip ( this->components ) );
			( cli::safe_cast<System::ComponentModel::ISupportInitialize^>( this->errorProvider ) )->BeginInit ( );
			this->gbStudents->SuspendLayout ( );
			this->gbStaff->SuspendLayout ( );
			this->SuspendLayout ( );
			// 
			// cbStudentID
			// 
			this->cbStudentID->AllowDrop = true;
			this->cbStudentID->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->cbStudentID->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->cbStudentID->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->cbStudentID->Font = ( gcnew System::Drawing::Font ( L"Microsoft Sans Serif", 8.25F ) );
			this->cbStudentID->FormattingEnabled = true;
			this->cbStudentID->Location = System::Drawing::Point ( 6, 99 );
			this->cbStudentID->Name = L"cbStudentID";
			this->cbStudentID->Size = System::Drawing::Size ( 272, 21 );
			this->cbStudentID->Sorted = true;
			this->cbStudentID->TabIndex = 6;
			this->toolTip->SetToolTip ( this->cbStudentID, L"Student roll no." );
			this->cbStudentID->TextChanged += gcnew System::EventHandler ( this, &IssueUI::cbStudentID_TextChanged );
			// 
			// cbStaffID
			// 
			this->cbStaffID->AllowDrop = true;
			this->cbStaffID->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->cbStaffID->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->cbStaffID->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->cbStaffID->Font = ( gcnew System::Drawing::Font ( L"Microsoft Sans Serif", 8.25F ) );
			this->cbStaffID->FormattingEnabled = true;
			this->cbStaffID->Location = System::Drawing::Point ( 6, 99 );
			this->cbStaffID->Name = L"cbStaffID";
			this->cbStaffID->Size = System::Drawing::Size ( 272, 21 );
			this->cbStaffID->Sorted = true;
			this->cbStaffID->TabIndex = 9;
			this->toolTip->SetToolTip ( this->cbStaffID, L"Professor name." );
			// 
			// btStudent
			// 
			this->btStudent->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btStudent->FlatAppearance->BorderSize = 0;
			this->btStudent->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btStudent->Font = ( gcnew System::Drawing::Font ( L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>( 0 ) ) );
			this->btStudent->Location = System::Drawing::Point ( 52, 164 );
			this->btStudent->Name = L"btStudent";
			this->btStudent->Size = System::Drawing::Size ( 181, 69 );
			this->btStudent->TabIndex = 8;
			this->btStudent->Text = L"Student";
			this->toolTip->SetToolTip ( this->btStudent, L"Issue the book as a student." );
			this->btStudent->UseVisualStyleBackColor = false;
			this->btStudent->Click += gcnew System::EventHandler ( this, &IssueUI::btStudent_Click );
			// 
			// btStaff
			// 
			this->btStaff->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btStaff->FlatAppearance->BorderSize = 0;
			this->btStaff->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btStaff->Font = ( gcnew System::Drawing::Font ( L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>( 0 ) ) );
			this->btStaff->Location = System::Drawing::Point ( 56, 164 );
			this->btStaff->Name = L"btStaff";
			this->btStaff->Size = System::Drawing::Size ( 181, 69 );
			this->btStaff->TabIndex = 10;
			this->btStaff->Text = L"Professor";
			this->toolTip->SetToolTip ( this->btStaff, L"Issue the book as a professor." );
			this->btStaff->UseVisualStyleBackColor = false;
			this->btStaff->Click += gcnew System::EventHandler ( this, &IssueUI::btStaff_Click );
			// 
			// tbStudentName
			// 
			this->tbStudentName->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->tbStudentName->Enabled = false;
			this->tbStudentName->Location = System::Drawing::Point ( 6, 47 );
			this->tbStudentName->Name = L"tbStudentName";
			this->tbStudentName->Size = System::Drawing::Size ( 272, 26 );
			this->tbStudentName->TabIndex = 7;
			this->toolTip->SetToolTip ( this->tbStudentName, L"Add a student name if the student doesn\'t exist in the database." );
			// 
			// errorProvider
			// 
			this->errorProvider->ContainerControl = this;
			// 
			// gbStudents
			// 
			this->gbStudents->Controls->Add ( this->btStudent );
			this->gbStudents->Controls->Add ( this->tbStudentName );
			this->gbStudents->Controls->Add ( this->cbStudentID );
			this->gbStudents->Font = ( gcnew System::Drawing::Font ( L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>( 0 ) ) );
			this->gbStudents->Location = System::Drawing::Point ( 12, 12 );
			this->gbStudents->Name = L"gbStudents";
			this->gbStudents->Size = System::Drawing::Size ( 292, 311 );
			this->gbStudents->TabIndex = 11;
			this->gbStudents->TabStop = false;
			this->gbStudents->Text = L"Student";
			// 
			// gbStaff
			// 
			this->gbStaff->Controls->Add ( this->btStaff );
			this->gbStaff->Controls->Add ( this->cbStaffID );
			this->gbStaff->Font = ( gcnew System::Drawing::Font ( L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>( 0 ) ) );
			this->gbStaff->Location = System::Drawing::Point ( 310, 12 );
			this->gbStaff->Name = L"gbStaff";
			this->gbStaff->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->gbStaff->Size = System::Drawing::Size ( 292, 311 );
			this->gbStaff->TabIndex = 12;
			this->gbStaff->TabStop = false;
			this->gbStaff->Text = L"Staff";
			// 
			// IssueUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF ( 6, 13 );
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size ( 614, 332 );
			this->Controls->Add ( this->gbStaff );
			this->Controls->Add ( this->gbStudents );
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"IssueUI";
			this->Text = L"Issue";
			this->Shown += gcnew System::EventHandler ( this, &IssueUI::IssueUI_Shown );
			( cli::safe_cast<System::ComponentModel::ISupportInitialize^>( this->errorProvider ) )->EndInit ( );
			this->gbStudents->ResumeLayout ( false );
			this->gbStudents->PerformLayout ( );
			this->gbStaff->ResumeLayout ( false );
			this->ResumeLayout ( false );

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
		auto table = dsBooks->Tables[ 0 ];
		if ( !table->Columns->Contains ( "Status" ) )
		{
			table->Columns->Add ( "Status" );
			table->Columns[ "Status" ]->Expression = "IIF(Available=1, 'Available', 'Issued')";
		}
		dgvBooks->DataSource = table;
		MessageBox::Show ( "Succesfully issued.", "Issued",
						   MessageBoxButtons::OK, MessageBoxIcon::Asterisk );
		this->Close ( );
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
		errorProvider->Clear ( );
		String ^name = cbStaffID->Text;
		if ( String::IsNullOrEmpty ( name ) )
		{
			errorProvider->SetError ( cbStaffID, "Cannot be blank." );
			return;
		}
		int staff_id = CLibDBManager::addStaff ( name );
		CDBManager::insert ( "issue_history", "lib_id, staff_id, issue_date",
							 lib_id, staff_id, ( gcnew DateTime ( ) )->Now );
		finishIssue ( );
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
