#pragma once
#include "Encryption.h"
#include <msclr/marshal_cppstd.h> // Include the header for string marshaling



namespace Encryptox {
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;

	string FileName;
	string password;
	Encryption enc1;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;




	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox2;

	protected:

	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Raavi", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->label1->Location = System::Drawing::Point(226, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(179, 47);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ENCRYPTOX";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Raavi", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label2->Location = System::Drawing::Point(146, 92);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(38, 22);
			this->label2->TabIndex = 1;
			this->label2->Text = L"File :";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(190, 92);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(215, 20);
			this->textBox1->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(411, 91);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(70, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Browse..";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Teal;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Location = System::Drawing::Point(57, 304);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(184, 23);
			this->button2->TabIndex = 6;
			this->button2->Text = L"ENCRYPT";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Teal;
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button3->Cursor = System::Windows::Forms::Cursors::Default;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Location = System::Drawing::Point(348, 304);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(184, 23);
			this->button3->TabIndex = 7;
			this->button3->Text = L"DECRYPT";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label4->Location = System::Drawing::Point(125, 137);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(59, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Password :";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(190, 134);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(215, 20);
			this->textBox2->TabIndex = 9;
			this->textBox2->UseSystemPasswordChar = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SpringGreen;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(620, 431);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"Encryptox";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		openFileDialog1->ShowDialog();
		FileName = marshal_as<string>(openFileDialog1->FileName);

		textBox1->Text = openFileDialog1->FileName;
		

	}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	password = marshal_as<string>(textBox2->Text);
	enc1.Encrypt(FileName, password);
	if (enc1.encryptFlag == 1)
	{
		MessageBox::Show("The file is encrypted", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	password = marshal_as<string>(textBox2->Text);
	enc1.Decrypt(FileName, password);
	if (enc1.decryptFlag == 1)
	{
		MessageBox::Show("The file is decrypted", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}
};
}
