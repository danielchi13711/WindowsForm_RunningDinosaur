#pragma once

namespace finalproject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for ScoreForm
	/// </summary>
	public ref class ScoreForm : public System::Windows::Forms::Form
	{
	public:
		ScoreForm(void)
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
		~ScoreForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  rankPictureBox;
	protected:
	private: System::Windows::Forms::PictureBox^  namePictureBox;
	private: System::Windows::Forms::PictureBox^  ScorePictureBox;
	private: System::Windows::Forms::Button^  closeButton;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ScoreForm::typeid));
			this->rankPictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->namePictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->ScorePictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->closeButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rankPictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->namePictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ScorePictureBox))->BeginInit();
			this->SuspendLayout();
			// 
			// rankPictureBox
			// 
			this->rankPictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"rankPictureBox.Image")));
			this->rankPictureBox->Location = System::Drawing::Point(12, 12);
			this->rankPictureBox->Name = L"rankPictureBox";
			this->rankPictureBox->Size = System::Drawing::Size(100, 50);
			this->rankPictureBox->TabIndex = 0;
			this->rankPictureBox->TabStop = false;
			// 
			// namePictureBox
			// 
			this->namePictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"namePictureBox.Image")));
			this->namePictureBox->Location = System::Drawing::Point(154, 12);
			this->namePictureBox->Name = L"namePictureBox";
			this->namePictureBox->Size = System::Drawing::Size(100, 50);
			this->namePictureBox->TabIndex = 1;
			this->namePictureBox->TabStop = false;
			// 
			// ScorePictureBox
			// 
			this->ScorePictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ScorePictureBox.Image")));
			this->ScorePictureBox->Location = System::Drawing::Point(303, 12);
			this->ScorePictureBox->Name = L"ScorePictureBox";
			this->ScorePictureBox->Size = System::Drawing::Size(100, 50);
			this->ScorePictureBox->TabIndex = 2;
			this->ScorePictureBox->TabStop = false;
			// 
			// closeButton
			// 
			this->closeButton->Location = System::Drawing::Point(170, 408);
			this->closeButton->Name = L"closeButton";
			this->closeButton->Size = System::Drawing::Size(75, 23);
			this->closeButton->TabIndex = 3;
			this->closeButton->Text = L"Close";
			this->closeButton->UseVisualStyleBackColor = true;
			this->closeButton->Click += gcnew System::EventHandler(this, &ScoreForm::closeButton_Click);
			// 
			// ScoreForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(424, 443);
			this->Controls->Add(this->closeButton);
			this->Controls->Add(this->ScorePictureBox);
			this->Controls->Add(this->namePictureBox);
			this->Controls->Add(this->rankPictureBox);
			this->Name = L"ScoreForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"ScoreForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rankPictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->namePictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ScorePictureBox))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Windows::Forms::Label^ RankLabel;
	private: System::Windows::Forms::Label^ NameLabel;
	private: System::Windows::Forms::Label^ ScoreLabel;
	private: static String^ PlayerName;
	private: static String^ PlayerScore;
	private: int mHightLightIndex = -1;
	public: void ReadFile() {
		String^ readline;
		array<String^ >^ words;
		StreamReader^ sr = File::OpenText("res/Score.txt");
		int Number = 0;
		while ((readline = sr->ReadLine()) != nullptr) {
			words = readline->Split();
			PlayerName = words[0];
			PlayerScore = words[1];
			DisplayPlayer(Number++);
		}
		sr->Close();
	}
	public: void HightLight(int index) {
		mHightLightIndex = index;
	}
	private: void DisplayPlayer(int index) {
		// Rank Label
		
		this->RankLabel = (gcnew System::Windows::Forms::Label());
		this->RankLabel->AutoSize = true;
		this->RankLabel->Font = (gcnew System::Drawing::Font(L"PMingLiU", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(136)));
		this->RankLabel->Location = System::Drawing::Point(50, 100 + index * 30);
		this->RankLabel->Name = L"RankLabel";
		this->RankLabel->Size = System::Drawing::Size(53, 19);
		this->RankLabel->TabIndex = 2;
		this->RankLabel->Text = (index + 1).ToString();
		this->Controls->Add(this->RankLabel);
		// NameLabel
		this->NameLabel = (gcnew System::Windows::Forms::Label());
		this->NameLabel->AutoSize = true;
		this->NameLabel->Font = (gcnew System::Drawing::Font(L"PMingLiU", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(136)));
		this->NameLabel->Location = System::Drawing::Point(200, 100 + index * 30);
		this->NameLabel->Name = L"NameLabel";
		this->NameLabel->Size = System::Drawing::Size(53, 19);
		this->NameLabel->TabIndex = 2;
		this->NameLabel->Text = PlayerName;
		this->Controls->Add(this->NameLabel);

		// ScoreLabel
		this->ScoreLabel = (gcnew System::Windows::Forms::Label());
		this->ScoreLabel->AutoSize = true;
		this->ScoreLabel->Font = (gcnew System::Drawing::Font(L"PMingLiU", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(136)));
		this->ScoreLabel->Location = System::Drawing::Point(350, 100 + index * 30);
		this->ScoreLabel->Name = L"ScoreLabel";
		this->ScoreLabel->Size = System::Drawing::Size(53, 19);
		this->ScoreLabel->TabIndex = 2;
		this->ScoreLabel->Text = PlayerScore;
		this->Controls->Add(this->ScoreLabel);
		if (index == mHightLightIndex) {
			this->RankLabel->ForeColor = Color::Red;
			this->NameLabel->ForeColor = Color::Red;
			this->ScoreLabel->ForeColor = Color::Red;
			//Update();
		}
	}
	private: System::Void closeButton_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
};

}
