#pragma once

namespace LibraryMgmt {

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
		BooksUI(void)
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
		~BooksUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dgvBooks;
	protected:
	private: System::Windows::Forms::Button^  vtReset;
	private: System::Windows::Forms::Button^  btBookName;
	private: System::Windows::Forms::TextBox^  tbBookName;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  tbAuthor;
	private: System::Windows::Forms::GroupBox^  gbSearchBooks;

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
			this->dgvBooks = ( gcnew System::Windows::Forms::DataGridView ( ) );
			this->vtReset = ( gcnew System::Windows::Forms::Button ( ) );
			this->btBookName = ( gcnew System::Windows::Forms::Button ( ) );
			this->tbBookName = ( gcnew System::Windows::Forms::TextBox ( ) );
			this->button1 = ( gcnew System::Windows::Forms::Button ( ) );
			this->tbAuthor = ( gcnew System::Windows::Forms::TextBox ( ) );
			this->gbSearchBooks = ( gcnew System::Windows::Forms::GroupBox ( ) );
			( cli::safe_cast<System::ComponentModel::ISupportInitialize^>( this->dgvBooks ) )->BeginInit ( );
			this->gbSearchBooks->SuspendLayout ( );
			this->SuspendLayout ( );
			// 
			// dgvBooks
			// 
			this->dgvBooks->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvBooks->Location = System::Drawing::Point ( 12, 169 );
			this->dgvBooks->Name = L"dgvBooks";
			this->dgvBooks->Size = System::Drawing::Size ( 891, 252 );
			this->dgvBooks->TabIndex = 0;
			// 
			// vtReset
			// 
			this->vtReset->Font = ( gcnew System::Drawing::Font ( L"Consolas", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>( 0 ) ) );
			this->vtReset->Location = System::Drawing::Point ( 12, 25 );
			this->vtReset->Name = L"vtReset";
			this->vtReset->Size = System::Drawing::Size ( 130, 94 );
			this->vtReset->TabIndex = 1;
			this->vtReset->Text = L"RESET";
			this->vtReset->UseVisualStyleBackColor = true;
			// 
			// btBookName
			// 
			this->btBookName->Font = ( gcnew System::Drawing::Font ( L"Consolas", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>( 0 ) ) );
			this->btBookName->Location = System::Drawing::Point ( 6, 19 );
			this->btBookName->Name = L"btBookName";
			this->btBookName->Size = System::Drawing::Size ( 213, 55 );
			this->btBookName->TabIndex = 2;
			this->btBookName->Text = L"Book Name";
			this->btBookName->UseVisualStyleBackColor = true;
			// 
			// tbBookName
			// 
			this->tbBookName->Location = System::Drawing::Point ( 6, 93 );
			this->tbBookName->Name = L"tbBookName";
			this->tbBookName->Size = System::Drawing::Size ( 213, 26 );
			this->tbBookName->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Font = ( gcnew System::Drawing::Font ( L"Consolas", 14 ) );
			this->button1->Location = System::Drawing::Point ( 269, 19 );
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size ( 213, 55 );
			this->button1->TabIndex = 4;
			this->button1->Text = L"Author";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// tbAuthor
			// 
			this->tbAuthor->Location = System::Drawing::Point ( 269, 93 );
			this->tbAuthor->Name = L"tbAuthor";
			this->tbAuthor->Size = System::Drawing::Size ( 213, 26 );
			this->tbAuthor->TabIndex = 5;
			// 
			// gbSearchBooks
			// 
			this->gbSearchBooks->Anchor = static_cast<System::Windows::Forms::AnchorStyles>( ( System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right ) );
			this->gbSearchBooks->Controls->Add ( this->btBookName );
			this->gbSearchBooks->Controls->Add ( this->tbAuthor );
			this->gbSearchBooks->Controls->Add ( this->tbBookName );
			this->gbSearchBooks->Controls->Add ( this->button1 );
			this->gbSearchBooks->Font = ( gcnew System::Drawing::Font ( L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>( 0 ) ) );
			this->gbSearchBooks->Location = System::Drawing::Point ( 190, 12 );
			this->gbSearchBooks->Name = L"gbSearchBooks";
			this->gbSearchBooks->Size = System::Drawing::Size ( 491, 128 );
			this->gbSearchBooks->TabIndex = 6;
			this->gbSearchBooks->TabStop = false;
			this->gbSearchBooks->Text = L"Search Books";
			// 
			// BooksUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF ( 6, 13 );
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size ( 915, 433 );
			this->Controls->Add ( this->gbSearchBooks );
			this->Controls->Add ( this->vtReset );
			this->Controls->Add ( this->dgvBooks );
			this->Name = L"BooksUI";
			this->Text = L"BooksUI";
			( cli::safe_cast<System::ComponentModel::ISupportInitialize^>( this->dgvBooks ) )->EndInit ( );
			this->gbSearchBooks->ResumeLayout ( false );
			this->gbSearchBooks->PerformLayout ( );
			this->ResumeLayout ( false );

		}
#pragma endregion
	};
}
