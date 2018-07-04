#pragma once
#include "ScoreForm.h"
namespace finalproject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for restartForm
	/// </summary>
	public ref class restartForm : public System::Windows::Forms::Form
	{
	public:
		restartForm(void)
		{
			InitializeComponent();
			SetButtonStyle();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~restartForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  yesPictureBox;
	private: System::Windows::Forms::PictureBox^  noPictureBox;









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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(restartForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->yesPictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->noPictureBox = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->yesPictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->noPictureBox))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-13, 1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(319, 198);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// yesPictureBox
			// 
			this->yesPictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"yesPictureBox.Image")));
			this->yesPictureBox->Location = System::Drawing::Point(33, 134);
			this->yesPictureBox->Name = L"yesPictureBox";
			this->yesPictureBox->Size = System::Drawing::Size(73, 53);
			this->yesPictureBox->TabIndex = 1;
			this->yesPictureBox->TabStop = false;
			this->yesPictureBox->Click += gcnew System::EventHandler(this, &restartForm::yesPirctureBox_Click);
			// 
			// noPictureBox
			// 
			this->noPictureBox->Cursor = System::Windows::Forms::Cursors::Default;
			this->noPictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"noPictureBox.Image")));
			this->noPictureBox->Location = System::Drawing::Point(193, 134);
			this->noPictureBox->Name = L"noPictureBox";
			this->noPictureBox->Size = System::Drawing::Size(75, 53);
			this->noPictureBox->TabIndex = 2;
			this->noPictureBox->TabStop = false;
			this->noPictureBox->Click += gcnew System::EventHandler(this, &restartForm::noPictureBox_Click);
			// 
			// restartForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(303, 199);
			this->Controls->Add(this->noPictureBox);
			this->Controls->Add(this->yesPictureBox);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"restartForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Restart\?";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->yesPictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->noPictureBox))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	public: static bool Restart;
	public: static bool Submit;
	private: bool FirstOpen;
	private: int Index;

	private: void SetButtonStyle() {
		yesPictureBox->BackColor = Color::Transparent;
		noPictureBox->BackColor = Color::Transparent;
		yesPictureBox->Parent = this->pictureBox1;
		noPictureBox->Parent = this->pictureBox1;
		Restart = false;
		Submit = false;
		FirstOpen = true;
	}

	private: System::Void yesPirctureBox_Click(System::Object^  sender, System::EventArgs^  e) {
		if (FirstOpen) {
			Restart = true;
			this->Close();
			FirstOpen = false;
		}
		else {
			Submit = true;
			this->Close();
		}
	}
	private: System::Void noPictureBox_Click(System::Object^  sender, System::EventArgs^  e) {
		if (FirstOpen) {
			Restart = false;
			pictureBox1->Image = Image::FromFile(L"res/Submit.png");
			FirstOpen = false;
		}
		else {
			Submit = false;
			this->Close();
		}
	}
	};
}
