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
			InitializeComponent ( );
			this->Icon = CDummy::gIcon;
			b_showAll = true;
			refresh ( );
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
	public: System::Data::DataSet^  dsHistory;
	private: System::Windows::Forms::Button^  btToggle;
			 bool b_showAll;
	private: System::Windows::Forms::ToolTip^  toolTip;

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
		void InitializeComponent(void)
		{
			this->components = ( gcnew System::ComponentModel::Container ( ) );
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = ( gcnew System::Windows::Forms::DataGridViewCellStyle ( ) );
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = ( gcnew System::Windows::Forms::DataGridViewCellStyle ( ) );
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle3 = ( gcnew System::Windows::Forms::DataGridViewCellStyle ( ) );
			this->dgvHistory = ( gcnew System::Windows::Forms::DataGridView ( ) );
			this->dsHistory = ( gcnew System::Data::DataSet ( ) );
			this->btToggle = ( gcnew System::Windows::Forms::Button ( ) );
			this->toolTip = ( gcnew System::Windows::Forms::ToolTip ( this->components ) );
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
			this->dgvHistory->Location = System::Drawing::Point ( 12, 66 );
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
			this->dgvHistory->Size = System::Drawing::Size ( 1115, 494 );
			this->dgvHistory->TabIndex = 1;
			this->toolTip->SetToolTip ( this->dgvHistory, L"Double click on a book to return it." );
			this->dgvHistory->CellDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler ( this, &IssueHistoryUI::dgvHistory_CellDoubleClick );
			// 
			// dsHistory
			// 
			this->dsHistory->DataSetName = L"Issue History DataSet";
			// 
			// btToggle
			// 
			this->btToggle->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btToggle->FlatAppearance->BorderSize = 0;
			this->btToggle->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btToggle->Font = ( gcnew System::Drawing::Font ( L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																   static_cast<System::Byte>( 0 ) ) );
			this->btToggle->Location = System::Drawing::Point ( 12, 12 );
			this->btToggle->Name = L"btToggle";
			this->btToggle->Size = System::Drawing::Size ( 1115, 48 );
			this->btToggle->TabIndex = 2;
			this->btToggle->Text = L"Toggle All/Unreturned Books";
			this->btToggle->UseVisualStyleBackColor = false;
			this->btToggle->Click += gcnew System::EventHandler ( this, &IssueHistoryUI::btToggle_Click );
			// 
			// toolTip
			// 
			this->toolTip->AutomaticDelay = 200;
			this->toolTip->ToolTipIcon = System::Windows::Forms::ToolTipIcon::Info;
			// 
			// IssueHistoryUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF ( 6, 13 );
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size ( 1139, 572 );
			this->Controls->Add ( this->btToggle );
			this->Controls->Add ( this->dgvHistory );
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"IssueHistoryUI";
			this->Text = L"Issue History";
			this->Shown += gcnew System::EventHandler ( this, &IssueHistoryUI::IssueHistoryUI_Shown );
			( cli::safe_cast<System::ComponentModel::ISupportInitialize^>( this->dgvHistory ) )->EndInit ( );
			( cli::safe_cast<System::ComponentModel::ISupportInitialize^>( this->dsHistory ) )->EndInit ( );
			this->ResumeLayout ( false );

		}
#pragma endregion

	public: void colorRows ( )
	{
		for each ( DataGridViewRow ^row in dgvHistory->Rows )
		{
			row->DefaultCellStyle->ForeColor =
				( ( Convert::ToInt32 ( row->Cells[ "Duration" ]->Value ) > 7 ) &&
				  ( String::IsNullOrEmpty ( row->Cells[ "Return_Date" ]->Value->ToString ( ) ) )
				  ) ?
				Color::DarkRed : Color::Black;
		}
	}

	public: void refresh ( )
	{
		MySqlDataAdapter ^adapter = CDBManager::getAdapter ( "SELECT * FROM view_issue_history" );
		dsHistory->Clear ( );
		adapter->Fill ( dsHistory );
		dgvHistory->DataSource = dsHistory->Tables[ 0 ];
		colorRows ( );
	}

	private: System::Void IssueHistoryUI_Shown ( System::Object^  sender, System::EventArgs^  e )
	{ 
		refresh ( );
	}

	private: System::Void btToggle_Click ( System::Object^  sender, System::EventArgs^  e )
	{
		dsHistory->Tables[ 0 ]->DefaultView->RowFilter = ( b_showAll ) ?
			"Return_Date Is Null" : "";
		b_showAll = !b_showAll;
		colorRows ( );
	}

	private: System::Void dgvHistory_CellDoubleClick ( System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e )
	{
		auto id = dgvHistory->CurrentRow->Cells[ "ID" ]->Value->ToString ( );
		auto cmd = CDBManager::getCmd ( "UPDATE issue_history SET return_date = @return_date "
										"WHERE ID = " + id );
		cmd->Prepare ( );
		cmd->Parameters->AddWithValue ( "@return_date", ( gcnew DateTime ( ) )->Now );
		cmd->ExecuteNonQuery ( );
		MessageBox::Show ( "The book has been returned.", "Returned",
						   MessageBoxButtons::OK, MessageBoxIcon::Asterisk );
		refresh ( );
	}
};
}
