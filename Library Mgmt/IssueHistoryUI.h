#pragma once
#include "common.h"

namespace LibraryMgmt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Resources;

	/// <summary>
	/// Summary for IssueHistoryUI
	/// </summary>
	public ref class IssueHistoryUI : public System::Windows::Forms::Form
	{
	public:
		IssueHistoryUI(void)
		{
			auto res = gcnew Resources::ResXResourceSet ( "./Resource.resx" );
			this->Icon = cli::safe_cast<Drawing::Icon^> ( res->GetObject ( "Icon", true ) );
			InitializeComponent ( );
			MySqlDataAdapter ^adapter = CDBManager::getAdapter ( "SELECT * FROM view_issue_history" );
			dsHistory->Clear ( );
			adapter->Fill ( dsHistory );
			dgvHistory->DataSource = dsHistory->Tables[ 0 ];
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~IssueHistoryUI()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::DataGridView^  dgvHistory;
	protected:
	private: System::Data::DataSet^  dsHistory;
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
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = ( gcnew System::Windows::Forms::DataGridViewCellStyle ( ) );
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = ( gcnew System::Windows::Forms::DataGridViewCellStyle ( ) );
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle3 = ( gcnew System::Windows::Forms::DataGridViewCellStyle ( ) );
			this->dgvHistory = ( gcnew System::Windows::Forms::DataGridView ( ) );
			this->dsHistory = ( gcnew System::Data::DataSet ( ) );
			( cli::safe_cast<System::ComponentModel::ISupportInitialize^>( this->dgvHistory ) )->BeginInit ( );
			( cli::safe_cast<System::ComponentModel::ISupportInitialize^>( this->dsHistory ) )->BeginInit ( );
			this->SuspendLayout ( );
			// 
			// dgvHistory
			// 
			this->dgvHistory->AllowUserToAddRows = false;
			this->dgvHistory->AllowUserToDeleteRows = false;
			this->dgvHistory->AllowUserToOrderColumns = true;
			this->dgvHistory->AllowUserToResizeRows = false;
			this->dgvHistory->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dgvHistory->BackgroundColor = System::Drawing::SystemColors::ControlDark;
			this->dgvHistory->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::Raised;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::ControlLight;
			dataGridViewCellStyle1->Font = ( gcnew System::Drawing::Font ( L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>( 0 ) ) );
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgvHistory->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dgvHistory->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::ControlLight;
			dataGridViewCellStyle2->Font = ( gcnew System::Drawing::Font ( L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>( 0 ) ) );
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dgvHistory->DefaultCellStyle = dataGridViewCellStyle2;
			this->dgvHistory->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->dgvHistory->Location = System::Drawing::Point ( 12, 12 );
			this->dgvHistory->MultiSelect = false;
			this->dgvHistory->Name = L"dgvHistory";
			this->dgvHistory->ReadOnly = true;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::ControlLight;
			dataGridViewCellStyle3->Font = ( gcnew System::Drawing::Font ( L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>( 0 ) ) );
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgvHistory->RowHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dgvHistory->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->dgvHistory->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dgvHistory->Size = System::Drawing::Size ( 919, 411 );
			this->dgvHistory->TabIndex = 1;
			// 
			// dsHistory
			// 
			this->dsHistory->DataSetName = L"Issue History DataSet";
			// 
			// IssueHistoryUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF ( 6, 13 );
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size ( 943, 435 );
			this->Controls->Add ( this->dgvHistory );
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"IssueHistoryUI";
			this->Text = L"Issue History";
			( cli::safe_cast<System::ComponentModel::ISupportInitialize^>( this->dgvHistory ) )->EndInit ( );
			( cli::safe_cast<System::ComponentModel::ISupportInitialize^>( this->dsHistory ) )->EndInit ( );
			this->ResumeLayout ( false );

		}
#pragma endregion
	};
}
