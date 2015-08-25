#pragma once
#include "FacultyUI.h"
#include "BooksUI.h"
#include "IssueHistoryUI.h"
#include "common.h"
#include "CDummy.h"

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
	/// Summary for MainUI
	/// </summary>
	public ref class MainUI : public System::Windows::Forms::Form
	{
	public:
		FacultyUI ^facUI;
		BooksUI ^booksUI;
		IssueHistoryUI ^issueHistoryUI;
	private: System::Windows::Forms::StatusStrip^ statusStrip;
	private: System::Windows::Forms::ToolStripStatusLabel^ slblStatus;
	private: System::Windows::Forms::Button^ btHistory;
	private: System::Windows::Forms::ToolTip^ toolTip;
	private: System::Windows::Forms::ToolStripStatusLabel^ slblConnected;
	public:
		MainUI ( void )
		{
			InitializeComponent ( );
			try
			{
				CDummy ( );
				this->Icon = CDummy::gIcon;
				CDBManager::CDBManager ( );
			}
			catch ( MySql::Data::MySqlClient::MySqlException ^e )
			{
				slblConnected->ForeColor = System::Drawing::Color::DarkRed;
				slblConnected->Text = e->Message;
				btBooks->Enabled = false;
				btFaculty->Enabled = false;
				btHistory->Enabled = false;
				return;
			}
			catch ( System::IO::FileNotFoundException ^e )
			{
				slblConnected->ForeColor = System::Drawing::Color::DarkRed;
				slblConnected->Text = e->Message;
				btBooks->Enabled = false;
				btFaculty->Enabled = false;
				btHistory->Enabled = false;
				return;
			}
			facUI = gcnew FacultyUI ( );
			booksUI = gcnew BooksUI ( );
			issueHistoryUI = gcnew IssueHistoryUI ( );
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainUI ( )
		{
			if ( components )
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btFaculty;
	private: System::Windows::Forms::Button^ btBooks;
	private: System::ComponentModel::IContainer^ components;
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
			this->btFaculty = ( gcnew System::Windows::Forms::Button ( ) );
			this->btBooks = ( gcnew System::Windows::Forms::Button ( ) );
			this->statusStrip = ( gcnew System::Windows::Forms::StatusStrip ( ) );
			this->slblStatus = ( gcnew System::Windows::Forms::ToolStripStatusLabel ( ) );
			this->slblConnected = ( gcnew System::Windows::Forms::ToolStripStatusLabel ( ) );
			this->btHistory = ( gcnew System::Windows::Forms::Button ( ) );
			this->toolTip = ( gcnew System::Windows::Forms::ToolTip ( this->components ) );
			this->statusStrip->SuspendLayout ( );
			this->SuspendLayout ( );
			// 
			// btFaculty
			// 
			this->btFaculty->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btFaculty->Cursor = System::Windows::Forms::Cursors::Default;
			this->btFaculty->FlatAppearance->BorderSize = 0;
			this->btFaculty->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btFaculty->Font = ( gcnew System::Drawing::Font ( L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																	static_cast<System::Byte>( 0 ) ) );
			this->btFaculty->Location = System::Drawing::Point ( 12, 12 );
			this->btFaculty->Name = L"btFaculty";
			this->btFaculty->Size = System::Drawing::Size ( 237, 242 );
			this->btFaculty->TabIndex = 0;
			this->btFaculty->Text = L"Faculty";
			this->toolTip->SetToolTip ( this->btFaculty, L"Add elements to the database." );
			this->btFaculty->UseVisualStyleBackColor = false;
			this->btFaculty->Click += gcnew System::EventHandler ( this, &MainUI::btFaculty_Click );
			// 
			// btBooks
			// 
			this->btBooks->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btBooks->FlatAppearance->BorderSize = 0;
			this->btBooks->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btBooks->Font = ( gcnew System::Drawing::Font ( L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																  static_cast<System::Byte>( 0 ) ) );
			this->btBooks->Location = System::Drawing::Point ( 255, 12 );
			this->btBooks->Name = L"btBooks";
			this->btBooks->Size = System::Drawing::Size ( 237, 242 );
			this->btBooks->TabIndex = 1;
			this->btBooks->Text = L"Books";
			this->toolTip->SetToolTip ( this->btBooks, L"View/Issue/Return/Delete books from library." );
			this->btBooks->UseVisualStyleBackColor = false;
			this->btBooks->Click += gcnew System::EventHandler ( this, &MainUI::btBooks_Click );
			// 
			// statusStrip
			// 
			this->statusStrip->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->statusStrip->Items->AddRange ( gcnew cli::array< System::Windows::Forms::ToolStripItem^ > ( 2 ) { this->slblStatus, this->slblConnected } );
			this->statusStrip->Location = System::Drawing::Point ( 0, 257 );
			this->statusStrip->Name = L"statusStrip";
			this->statusStrip->Size = System::Drawing::Size ( 747, 22 );
			this->statusStrip->SizingGrip = false;
			this->statusStrip->TabIndex = 2;
			this->statusStrip->Text = L"statusStrip";
			// 
			// slblStatus
			// 
			this->slblStatus->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->slblStatus->Font = ( gcnew System::Drawing::Font ( L"Segoe UI", 9 ) );
			this->slblStatus->Name = L"slblStatus";
			this->slblStatus->Size = System::Drawing::Size ( 42, 17 );
			this->slblStatus->Text = L"Status:";
			// 
			// slblConnected
			// 
			this->slblConnected->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->slblConnected->Font = ( gcnew System::Drawing::Font ( L"Segoe UI", 9 ) );
			this->slblConnected->ForeColor = System::Drawing::Color::Lime;
			this->slblConnected->Name = L"slblConnected";
			this->slblConnected->Size = System::Drawing::Size ( 65, 17 );
			this->slblConnected->Text = L"Connected";
			this->slblConnected->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// btHistory
			// 
			this->btHistory->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btHistory->FlatAppearance->BorderSize = 0;
			this->btHistory->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btHistory->Font = ( gcnew System::Drawing::Font ( L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																	static_cast<System::Byte>( 0 ) ) );
			this->btHistory->Location = System::Drawing::Point ( 498, 12 );
			this->btHistory->Name = L"btHistory";
			this->btHistory->Size = System::Drawing::Size ( 237, 242 );
			this->btHistory->TabIndex = 3;
			this->btHistory->Text = L"Issue History";
			this->toolTip->SetToolTip ( this->btHistory, L"View the issue history." );
			this->btHistory->UseVisualStyleBackColor = false;
			this->btHistory->Click += gcnew System::EventHandler ( this, &MainUI::btHistory_Click );
			// 
			// MainUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF ( 6, 13 );
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size ( 747, 279 );
			this->Controls->Add ( this->btHistory );
			this->Controls->Add ( this->statusStrip );
			this->Controls->Add ( this->btBooks );
			this->Controls->Add ( this->btFaculty );
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"MainUI";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Text = L"Computer Department Library";
			this->statusStrip->ResumeLayout ( false );
			this->statusStrip->PerformLayout ( );
			this->ResumeLayout ( false );
			this->PerformLayout ( );

		}
#pragma endregion
	private: System::Void btFaculty_Click ( System::Object^ sender, System::EventArgs^ e )
	{
		if ( !facUI->Visible )
		{
			facUI = gcnew FacultyUI ( );
			facUI->Show ( );
		}
		facUI->Focus ( );
	}

	private: System::Void btBooks_Click ( System::Object^ sender, System::EventArgs^ e )
	{
		if ( !booksUI->Visible )
		{
			booksUI = gcnew BooksUI ( );
			booksUI->Show ( );
		}
		booksUI->Focus ( );
	}

	private: System::Void btHistory_Click ( System::Object^ sender, System::EventArgs^ e )
	{
		if ( !issueHistoryUI->Visible )
		{
			issueHistoryUI = gcnew IssueHistoryUI ( );
			issueHistoryUI->Show ( );
		}
		issueHistoryUI->Focus ( );
	}
	};
}
