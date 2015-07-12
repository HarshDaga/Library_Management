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

		IssueUI ( int lib_id )
		{
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
			this->cbStudentID = ( gcnew System::Windows::Forms::ComboBox ( ) );
			this->cbStaffID = ( gcnew System::Windows::Forms::ComboBox ( ) );
			this->btStudent = ( gcnew System::Windows::Forms::Button ( ) );
			this->btStaff = ( gcnew System::Windows::Forms::Button ( ) );
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
			// Issue_ReturnUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF ( 6, 13 );
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size ( 769, 375 );
			this->Controls->Add ( this->btStaff );
			this->Controls->Add ( this->btStudent );
			this->Controls->Add ( this->cbStaffID );
			this->Controls->Add ( this->cbStudentID );
			this->Name = L"Issue_ReturnUI";
			this->Text = L"Issue_ReturnUI";
			this->Shown += gcnew System::EventHandler ( this, &IssueUI::Issue_Return_Shown );
			this->ResumeLayout ( false );

		}
#pragma endregion

	public:
		void cbStudentID_Fetch ( )
		{
			auto reader = CDBManager::query ( "SELECT id FROM students" );
			Strings ^names = gcnew Strings ( );
			while ( reader->Read ( ) )
				names->Add ( reader->GetString ( 0 ) );
			reader->Close ( );
			cbStudentID->Items->Clear ( );
			cbStudentID->Items->AddRange ( names->ToArray ( ) );
		}

		void cbOwner_Fetch ( )
		{
			auto reader = CDBManager::query ( "SELECT * FROM staff" );
			Strings ^names = gcnew Strings ( );
			while ( reader->Read ( ) )
				names->Add ( reader->GetString ( 1 ) );
			reader->Close ( );
			cbStaffID->Items->Clear ( );
			cbStaffID->Items->AddRange ( names->ToArray ( ) );
		}

	private: System::Void Issue_Return_Shown ( System::Object^  sender, System::EventArgs^  e )
	{
		cbStudentID_Fetch ( );
		cbOwner_Fetch ( );
	}

	private: System::Void btStudent_Click ( System::Object^  sender, System::EventArgs^  e )
	{
		String ^student_id = cbStudentID->Text;
		if ( cbStudentID->Items->Contains ( student_id ) )
		{
			auto cmd = CDBManager::getCmd ( "INSERT INTO issue_history(lib_id, student_id, issue_date) "
											"VALUES(@lib_id, @student_id, @issue_date)");
			cmd->Prepare ( );
			cmd->Parameters->AddWithValue ( "@lib_id", lib_id );
			cmd->Parameters->AddWithValue ( "@student_id", student_id );
			cmd->Parameters->AddWithValue ( "@issue_date", ( gcnew DateTime ( ) )->Now );
			cmd->ExecuteNonQuery ( );
		}
	}

	private: System::Void btStaff_Click ( System::Object^  sender, System::EventArgs^  e )
	{

	}
	};
}
