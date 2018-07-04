#pragma once
#include "game.h"
#include "ScoreForm.h"
#include "OptionForm.h"
#include "restartForm.h"
#include "EndingForm.h"
namespace finalproject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Media;
	
	/// <summary>
	/// MyForm 的摘要
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			LoadOptionInformation();
			//Passing();
			//
			//TODO:  在此加入建構函式程式碼
			//
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  startButton;
	private: System::Windows::Forms::Button^  rankButton;

	protected:

	protected:

	private: System::Windows::Forms::Button^  optionButton;
	private: System::Windows::Forms::Button^  exitButton;



	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器
		/// 修改這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->startButton = (gcnew System::Windows::Forms::Button());
			this->rankButton = (gcnew System::Windows::Forms::Button());
			this->optionButton = (gcnew System::Windows::Forms::Button());
			this->exitButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// startButton
			// 
			this->startButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->startButton->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->startButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->startButton->Font = (gcnew System::Drawing::Font(L"DFKai-SB", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->startButton->Location = System::Drawing::Point(429, 97);
			this->startButton->Name = L"startButton";
			this->startButton->Size = System::Drawing::Size(213, 46);
			this->startButton->TabIndex = 0;
			this->startButton->Text = L"開始遊戲";
			this->startButton->UseVisualStyleBackColor = false;
			this->startButton->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// rankButton
			// 
			this->rankButton->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->rankButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->rankButton->Font = (gcnew System::Drawing::Font(L"DFKai-SB", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->rankButton->Location = System::Drawing::Point(429, 256);
			this->rankButton->Name = L"rankButton";
			this->rankButton->Size = System::Drawing::Size(213, 46);
			this->rankButton->TabIndex = 1;
			this->rankButton->Text = L"排名紀錄";
			this->rankButton->UseVisualStyleBackColor = false;
			this->rankButton->Click += gcnew System::EventHandler(this, &MyForm::rankButton_Click);
			// 
			// optionButton
			// 
			this->optionButton->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->optionButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->optionButton->Font = (gcnew System::Drawing::Font(L"DFKai-SB", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->optionButton->Location = System::Drawing::Point(429, 175);
			this->optionButton->Name = L"optionButton";
			this->optionButton->Size = System::Drawing::Size(213, 46);
			this->optionButton->TabIndex = 2;
			this->optionButton->Text = L"遊戲設置";
			this->optionButton->UseVisualStyleBackColor = false;
			this->optionButton->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// exitButton
			// 
			this->exitButton->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->exitButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->exitButton->Font = (gcnew System::Drawing::Font(L"DFKai-SB", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->exitButton->Location = System::Drawing::Point(429, 336);
			this->exitButton->Name = L"exitButton";
			this->exitButton->Size = System::Drawing::Size(213, 46);
			this->exitButton->TabIndex = 3;
			this->exitButton->Text = L"結束遊戲";
			this->exitButton->UseVisualStyleBackColor = false;
			this->exitButton->Click += gcnew System::EventHandler(this, &MyForm::exitButton_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1092, 447);
			this->Controls->Add(this->exitButton);
			this->Controls->Add(this->optionButton);
			this->Controls->Add(this->rankButton);
			this->Controls->Add(this->startButton);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->ResumeLayout(false);

		}
#pragma endregion
private: array<String^ >^ name_list;
private: array<int >^ score_list;
private: int Index;
private: static SoundPlayer^ music;
private: void PlayMusic(String^ musicpath) {
	music = gcnew SoundPlayer(musicpath);
	music->PlayLooping();
}
private: void StopMusic() {
	music->Stop();
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (OptionForm::musicOpen) {
		StopMusic();
		PlayMusic(L"res/GameMusic.wav");
	}
	game^ start = gcnew game;
	start->ShowDialog();
	while (restartForm::Restart) {
		game^ restart = gcnew game;
		restart->ShowDialog();
	}
	if (restartForm::Submit) {
		ReadFile();
		SaveFile();
		ScoreForm^ score = gcnew ScoreForm;
		score->HightLight(InsertIndex());
		score->ReadFile();
		score->ShowDialog();
	}
	LoadOptionInformation();
	if (game::Pass) {
		Passing();
	}
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	OptionForm^ option = gcnew OptionForm;
	option->ShowDialog();
	LoadOptionInformation();
}
private: System::Void rankButton_Click(System::Object^  sender, System::EventArgs^  e) {
	ScoreForm^ score = gcnew ScoreForm;
	score->ReadFile();
	score->ShowDialog();
}


private: System::Void exitButton_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
	private: void LoadOptionInformation() {
		game::SetImmortal(OptionForm::ImmortalOpen);
		game::SetSoundEffect(OptionForm::soundeffectOpen);
		if (OptionForm::musicOpen) {
			PlayMusic(L"res/music.wav");
		}
		else {
			StopMusic();
		}

	}
	private: void ReadFile() {
		name_list = gcnew array<String^ >(10);
		score_list = gcnew array<int >(10);
		String^ readline;
		array<String^ >^ words;
		StreamReader^ sr = File::OpenText("res/Score.txt");
		Index = 0;
		while ((readline = sr->ReadLine()) != nullptr) {
			words = readline->Split();
			name_list[Index] = words[0];
			score_list[Index] = Int32::Parse(words[1]);
			Index++;
			if (Index == 9) break;
		}
		sr->Close();
	}
	private: int InsertIndex() {
		int begin = 0;
		int end = Index;
		int middle = 0;
		while (begin < end) {
			middle = (begin + end) / 2;
			if (end <= begin + 1) {
				if (score_list[middle] > game::score)
					return end;
				else if (score_list[middle] < game::score)
					return begin;
				else
					return middle;
			}
			else if (score_list[middle] >= game::score)
			{
				begin = middle;
			}
			else if (score_list[middle] < game::score) {
				end = middle;
			}
		}
		
	}
	private: void SaveFile() {
		StreamWriter^ sw = gcnew StreamWriter(L"res/Score.txt");
		for (int i = 0; i < InsertIndex(); i++) {
			sw->WriteLine("{0}	{1}", name_list[i], score_list[i]);
		}
		sw->WriteLine("{0}	{1}", OptionForm::playerName, game::score);
		for (int i = InsertIndex(); i < Index; i++) {
			sw->WriteLine("{0}	{1}", name_list[i], score_list[i]);
		}
		sw->Close();
	}
	private: void Passing() {
		if (OptionForm::musicOpen) {
			StopMusic();
			PlayMusic(L"res/endingmusic.wav");
		}
		EndingForm^ ending = gcnew EndingForm();
		ending->ShowDialog();
	}
};
}
