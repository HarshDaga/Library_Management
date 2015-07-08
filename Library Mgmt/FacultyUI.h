#pragma once

namespace LibraryMgmt {

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

		FacultyUI(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FacultyUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btAddMember;
	protected:
	private: System::Windows::Forms::TextBox^  tbMemberName;
	private: System::Windows::Forms::GroupBox^  gbMemberEntry;
	private: System::Windows::Forms::Label^  lblMemberName;
	private: System::Windows::Forms::Label^  lblMemberID;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::ComboBox^  cbMemberDetails;
	private: System::Windows::Forms::GroupBox^  gbMemberDetails;
	private: System::Windows::Forms::Button^  btMemberDetails;

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
			this->btAddMember = ( gcnew System::Windows::Forms::Button ( ) );
			this->tbMemberName = ( gcnew System::Windows::Forms::TextBox ( ) );
			this->gbMemberEntry = ( gcnew System::Windows::Forms::GroupBox ( ) );
			this->textBox1 = ( gcnew System::Windows::Forms::TextBox ( ) );
			this->lblMemberID = ( gcnew System::Windows::Forms::Label ( ) );
			this->lblMemberName = ( gcnew System::Windows::Forms::Label ( ) );
			this->cbMemberDetails = ( gcnew System::Windows::Forms::ComboBox ( ) );
			this->gbMemberDetails = ( gcnew System::Windows::Forms::GroupBox ( ) );
			this->btMemberDetails = ( gcnew System::Windows::Forms::Button ( ) );
			this->gbMemberEntry->SuspendLayout ( );
			this->gbMemberDetails->SuspendLayout ( );
			this->SuspendLayout ( );
			// 
			// btAddMember
			// 
			this->btAddMember->Location = System::Drawing::Point ( 24, 176 );
			this->btAddMember->Name = L"btAddMember";
			this->btAddMember->Size = System::Drawing::Size ( 136, 38 );
			this->btAddMember->TabIndex = 0;
			this->btAddMember->Text = L"Add Member";
			this->btAddMember->UseVisualStyleBackColor = true;
			// 
			// tbMemberName
			// 
			this->tbMemberName->Location = System::Drawing::Point ( 100, 73 );
			this->tbMemberName->Name = L"tbMemberName";
			this->tbMemberName->Size = System::Drawing::Size ( 103, 20 );
			this->tbMemberName->TabIndex = 1;
			// 
			// gbMemberEntry
			// 
			this->gbMemberEntry->Controls->Add ( this->lblMemberName );
			this->gbMemberEntry->Controls->Add ( this->lblMemberID );
			this->gbMemberEntry->Controls->Add ( this->textBox1 );
			this->gbMemberEntry->Controls->Add ( this->tbMemberName );
			this->gbMemberEntry->Controls->Add ( this->btAddMember );
			this->gbMemberEntry->Location = System::Drawing::Point ( 22, 16 );
			this->gbMemberEntry->Name = L"gbMemberEntry";
			this->gbMemberEntry->Size = System::Drawing::Size ( 291, 343 );
			this->gbMemberEntry->TabIndex = 2;
			this->gbMemberEntry->TabStop = false;
			this->gbMemberEntry->Text = L"Member Entry";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point ( 100, 118 );
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size ( 103, 20 );
			this->textBox1->TabIndex = 2;
			// 
			// lblMemberID
			// 
			this->lblMemberID->AutoSize = true;
			this->lblMemberID->Font = ( gcnew System::Drawing::Font ( L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>( 0 ) ) );
			this->lblMemberID->Location = System::Drawing::Point ( 47, 73 );
			this->lblMemberID->Name = L"lblMemberID";
			this->lblMemberID->Size = System::Drawing::Size ( 26, 20 );
			this->lblMemberID->TabIndex = 4;
			this->lblMemberID->Text = L"ID";
			// 
			// lblMemberName
			// 
			this->lblMemberName->AutoSize = true;
			this->lblMemberName->Font = ( gcnew System::Drawing::Font ( L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>( 0 ) ) );
			this->lblMemberName->Location = System::Drawing::Point ( 21, 118 );
			this->lblMemberName->Name = L"lblMemberName";
			this->lblMemberName->Size = System::Drawing::Size ( 63, 20 );
			this->lblMemberName->TabIndex = 6;
			this->lblMemberName->Text = L"NAME :";
			// 
			// cbMemberDetails
			// 
			this->cbMemberDetails->FormattingEnabled = true;
			this->cbMemberDetails->Location = System::Drawing::Point ( 50, 72 );
			this->cbMemberDetails->Name = L"cbMemberDetails";
			this->cbMemberDetails->Size = System::Drawing::Size ( 214, 21 );
			this->cbMemberDetails->TabIndex = 7;
			// 
			// gbMemberDetails
			// 
			this->gbMemberDetails->Controls->Add ( this->btMemberDetails );
			this->gbMemberDetails->Controls->Add ( this->cbMemberDetails );
			this->gbMemberDetails->Location = System::Drawing::Point ( 319, 16 );
			this->gbMemberDetails->Name = L"gbMemberDetails";
			this->gbMemberDetails->Size = System::Drawing::Size ( 282, 343 );
			this->gbMemberDetails->TabIndex = 8;
			this->gbMemberDetails->TabStop = false;
			this->gbMemberDetails->Text = L"Member Details";
			// 
			// btMemberDetails
			// 
			this->btMemberDetails->Location = System::Drawing::Point ( 88, 176 );
			this->btMemberDetails->Name = L"btMemberDetails";
			this->btMemberDetails->Size = System::Drawing::Size ( 121, 38 );
			this->btMemberDetails->TabIndex = 8;
			this->btMemberDetails->Text = L"View Details";
			this->btMemberDetails->UseVisualStyleBackColor = true;
			// 
			// FacultyUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF ( 6, 13 );
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size ( 613, 378 );
			this->Controls->Add ( this->gbMemberDetails );
			this->Controls->Add ( this->gbMemberEntry );
			this->Name = L"FacultyUI";
			this->Text = L"FacultyUI";
			this->gbMemberEntry->ResumeLayout ( false );
			this->gbMemberEntry->PerformLayout ( );
			this->gbMemberDetails->ResumeLayout ( false );
			this->ResumeLayout ( false );

		}
#pragma endregion
	};
}
