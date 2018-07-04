#pragma once

namespace finalproject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for OptionForm
	/// </summary>
	public ref class OptionForm : public System::Windows::Forms::Form
	{
	public:
		OptionForm(void)
		{
			InitializeComponent();
			SetDefault();

			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~OptionForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^  label2;


	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  saveButton;
	private: System::Windows::Forms::Button^  cancelButton;
	private: System::Windows::Forms::CheckBox^  musicCheckBox;
	private: System::Windows::Forms::CheckBox^  immortalCheckBox;


	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::CheckBox^  soundeffectCheckBox;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(OptionForm::typeid));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->saveButton = (gcnew System::Windows::Forms::Button());
			this->cancelButton = (gcnew System::Windows::Forms::Button());
			this->musicCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->immortalCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->soundeffectCheckBox = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(18, 48);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(66, 12);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Sound Effect";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(18, 133);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(32, 12);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Name";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(122, 130);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(104, 22);
			this->textBox1->TabIndex = 5;
			this->textBox1->Text = L"Player";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(18, 182);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(50, 12);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Character";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(149, 167);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(55, 49);
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// saveButton
			// 
			this->saveButton->Location = System::Drawing::Point(122, 238);
			this->saveButton->Name = L"saveButton";
			this->saveButton->Size = System::Drawing::Size(75, 23);
			this->saveButton->TabIndex = 8;
			this->saveButton->Text = L"Save";
			this->saveButton->UseVisualStyleBackColor = true;
			this->saveButton->Click += gcnew System::EventHandler(this, &OptionForm::saveButton_Click);
			// 
			// cancelButton
			// 
			this->cancelButton->Location = System::Drawing::Point(209, 238);
			this->cancelButton->Name = L"cancelButton";
			this->cancelButton->Size = System::Drawing::Size(75, 23);
			this->cancelButton->TabIndex = 9;
			this->cancelButton->Text = L"Cancel";
			this->cancelButton->UseVisualStyleBackColor = true;
			this->cancelButton->Click += gcnew System::EventHandler(this, &OptionForm::cancelButton_Click);
			// 
			// musicCheckBox
			// 
			this->musicCheckBox->AutoSize = true;
			this->musicCheckBox->Checked = true;
			this->musicCheckBox->CheckState = System::Windows::Forms::CheckState::Checked;
			this->musicCheckBox->Location = System::Drawing::Point(148, 12);
			this->musicCheckBox->Name = L"musicCheckBox";
			this->musicCheckBox->Size = System::Drawing::Size(49, 16);
			this->musicCheckBox->TabIndex = 10;
			this->musicCheckBox->Text = L"Open";
			this->musicCheckBox->UseVisualStyleBackColor = true;
			// 
			// immortalCheckBox
			// 
			this->immortalCheckBox->AutoSize = true;
			this->immortalCheckBox->Location = System::Drawing::Point(148, 84);
			this->immortalCheckBox->Name = L"immortalCheckBox";
			this->immortalCheckBox->Size = System::Drawing::Size(49, 16);
			this->immortalCheckBox->TabIndex = 12;
			this->immortalCheckBox->Text = L"Open";
			this->immortalCheckBox->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(20, 84);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(48, 12);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Immotral";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(18, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(33, 12);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Music";
			// 
			// soundeffectCheckBox
			// 
			this->soundeffectCheckBox->AutoSize = true;
			this->soundeffectCheckBox->Checked = true;
			this->soundeffectCheckBox->CheckState = System::Windows::Forms::CheckState::Checked;
			this->soundeffectCheckBox->Location = System::Drawing::Point(148, 47);
			this->soundeffectCheckBox->Name = L"soundeffectCheckBox";
			this->soundeffectCheckBox->Size = System::Drawing::Size(49, 16);
			this->soundeffectCheckBox->TabIndex = 13;
			this->soundeffectCheckBox->Text = L"Open";
			this->soundeffectCheckBox->UseVisualStyleBackColor = true;
			// 
			// OptionForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->soundeffectCheckBox);
			this->Controls->Add(this->immortalCheckBox);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->musicCheckBox);
			this->Controls->Add(this->cancelButton);
			this->Controls->Add(this->saveButton);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"OptionForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"OptionMenu";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: bool SaveName;
	public: static bool ImmortalOpen = false;
	public: static bool musicOpen = true;
	public: static bool soundeffectOpen = true;
	public: static String^ playerName = L"Player";
	private: void SetDefault() {
		SaveName = false;
		this->textBox1->Text = playerName;
		this->immortalCheckBox->Checked = this->ImmortalOpen;
		this->musicCheckBox->Checked = this->musicOpen;
		this->soundeffectCheckBox->Checked = this->soundeffectOpen;
	}
	public: String^ GetPlayerName() {
		return this->textBox1->Text;
	}
	private: System::Void saveButton_Click(System::Object^  sender, System::EventArgs^  e) {
		ImmortalOpen = this->immortalCheckBox->Checked;
		musicOpen = this->musicCheckBox->Checked;
		soundeffectOpen = this->soundeffectCheckBox->Checked;
		playerName = this->textBox1->Text;

		this->Close();
	}
	private: System::Void cancelButton_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
};
}
