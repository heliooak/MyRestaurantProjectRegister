#pragma once
#include "User.h"

namespace MyRestaurantProjectRegister {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for RegisterForm
	/// </summary>
	public ref class RegisterForm : public System::Windows::Forms::Form
	{
	public:
		RegisterForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->CenterToScreen();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~RegisterForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbxName;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbxEmail;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ tbxPhone;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ tbxAddress;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ tbxPassword;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ tbxConfirmPassword;
	private: System::Windows::Forms::Button^ btnOK;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::LinkLabel^ llblLogin;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbxName = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbxEmail = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tbxPhone = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tbxAddress = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tbxPassword = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tbxConfirmPassword = (gcnew System::Windows::Forms::TextBox());
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->llblLogin = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(539, 40);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Register";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 82);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(68, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Name";
			// 
			// tbxName
			// 
			this->tbxName->Location = System::Drawing::Point(214, 82);
			this->tbxName->Name = L"tbxName";
			this->tbxName->Size = System::Drawing::Size(337, 31);
			this->tbxName->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 119);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(65, 25);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Email";
			// 
			// tbxEmail
			// 
			this->tbxEmail->Location = System::Drawing::Point(214, 119);
			this->tbxEmail->Name = L"tbxEmail";
			this->tbxEmail->Size = System::Drawing::Size(337, 31);
			this->tbxEmail->TabIndex = 2;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 156);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(74, 25);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Phone";
			// 
			// tbxPhone
			// 
			this->tbxPhone->Location = System::Drawing::Point(214, 156);
			this->tbxPhone->Name = L"tbxPhone";
			this->tbxPhone->Size = System::Drawing::Size(337, 31);
			this->tbxPhone->TabIndex = 2;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 193);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(91, 25);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Address";
			// 
			// tbxAddress
			// 
			this->tbxAddress->Location = System::Drawing::Point(214, 193);
			this->tbxAddress->Name = L"tbxAddress";
			this->tbxAddress->Size = System::Drawing::Size(337, 31);
			this->tbxAddress->TabIndex = 2;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 230);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(106, 25);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Password";
			// 
			// tbxPassword
			// 
			this->tbxPassword->Location = System::Drawing::Point(214, 230);
			this->tbxPassword->Name = L"tbxPassword";
			this->tbxPassword->PasswordChar = '*';
			this->tbxPassword->Size = System::Drawing::Size(337, 31);
			this->tbxPassword->TabIndex = 2;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(12, 267);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(186, 25);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Confirm Password";
			// 
			// tbxConfirmPassword
			// 
			this->tbxConfirmPassword->Location = System::Drawing::Point(214, 267);
			this->tbxConfirmPassword->Name = L"tbxConfirmPassword";
			this->tbxConfirmPassword->PasswordChar = '*';
			this->tbxConfirmPassword->Size = System::Drawing::Size(337, 31);
			this->tbxConfirmPassword->TabIndex = 2;
			// 
			// btnOK
			// 
			this->btnOK->Location = System::Drawing::Point(214, 336);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(175, 42);
			this->btnOK->TabIndex = 3;
			this->btnOK->Text = L"OK";
			this->btnOK->UseVisualStyleBackColor = true;
			this->btnOK->Click += gcnew System::EventHandler(this, &RegisterForm::btnOK_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(395, 336);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(156, 42);
			this->btnCancel->TabIndex = 3;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &RegisterForm::btnCancel_Click);
			// 
			// llblLogin
			// 
			this->llblLogin->AutoSize = true;
			this->llblLogin->Location = System::Drawing::Point(486, 389);
			this->llblLogin->Name = L"llblLogin";
			this->llblLogin->Size = System::Drawing::Size(65, 25);
			this->llblLogin->TabIndex = 4;
			this->llblLogin->TabStop = true;
			this->llblLogin->Text = L"Login";
			this->llblLogin->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &RegisterForm::llblLogin_LinkClicked);
			// 
			// RegisterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(563, 423);
			this->Controls->Add(this->llblLogin);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnOK);
			this->Controls->Add(this->tbxConfirmPassword);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->tbxPassword);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->tbxAddress);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->tbxPhone);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->tbxEmail);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tbxName);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"RegisterForm";
			this->Text = L"Register Form";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	public: bool switchToLogin = false;
	private: System::Void llblLogin_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->switchToLogin = true;
		this->Close();
	}

	public: User^ user = nullptr;
	private: System::Void btnOK_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ name = tbxName->Text;
		String^ email = tbxEmail->Text;
		String^ phone = tbxPhone->Text;
		String^ address = tbxAddress->Text;
		String^ password = tbxPassword->Text;
		String^ confirmPassword = tbxConfirmPassword->Text;

		if (name->Length == 0 || email->Length == 0 || phone->Length == 0
			|| address->Length == 0 || password->Length == 0) {

			MessageBox::Show("Please enter all the fields", "On or more empty fields", MessageBoxButtons::OK);

			return;
		}

		if (String::Compare(password, confirmPassword) != 0) {
			MessageBox::Show("Password and Confirm Password do not match",
				"Password Error", MessageBoxButtons::OK);
		}

		try {
			String^ connString = "Data Source=EC2AMAZ-KQB7O61\\SQLEXPRESS;Initial Catalog=myrestaurant;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ sqlQuery = "INSERT INTO users " +
				"(name, email, phone, address, password) VALUES " +
				"(@name, @email, @phone, @address, @password);";

			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@name", name);
			command.Parameters->AddWithValue("@email", email);
			command.Parameters->AddWithValue("@phone", phone);
			command.Parameters->AddWithValue("@address", address);
			command.Parameters->AddWithValue("@password", password);

			command.ExecuteNonQuery();
			user = gcnew User;
			user->name = name;
			user->email = email;
			user->phone = phone;
			user->address = address;
			user->password = password;

			this->Close();
		}
		catch (Exception^ e) {
			MessageBox::Show("Failed to register new user",
				"Register Failure", MessageBoxButtons::OK);
		}
	}
};
}
