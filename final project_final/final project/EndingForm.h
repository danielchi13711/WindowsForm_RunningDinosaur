#pragma once
#include "GamingHeader.h"
#include "NotifyForm.h"
namespace finalproject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Media;

	/// <summary>
	/// Summary for EndingForm
	/// </summary>

	public ref class EndingForm : public System::Windows::Forms::Form
	{
	public:
		EndingForm(void)
		{
			InitializeComponent();
			SetDefaultAnimation();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~EndingForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox_c;
	private: System::Windows::Forms::PictureBox^  pictureBox_r;
	protected:

	protected:

	protected:

	private: System::Windows::Forms::PictureBox^  pictureBox_n;

	private: System::Windows::Forms::PictureBox^  pictureBox_o;
	private: System::Windows::Forms::PictureBox^  pictureBox_g;
	private: System::Windows::Forms::PictureBox^  pictureBox_a;
	private: System::Windows::Forms::PictureBox^  pictureBox_t;
	private: System::Windows::Forms::PictureBox^  pictureBox_u;
	private: System::Windows::Forms::PictureBox^  pictureBox_l;
	private: System::Windows::Forms::PictureBox^  pictureBox_a2;
	private: System::Windows::Forms::PictureBox^  pictureBox_t2;
	private: System::Windows::Forms::PictureBox^  pictureBox_i;
	private: System::Windows::Forms::PictureBox^  pictureBox_o2;
	private: System::Windows::Forms::PictureBox^  pictureBox_n2;











	private: System::Windows::Forms::Timer^  MainTimer;
	private: System::Windows::Forms::PictureBox^  dinoPictureBox;
	private: System::Windows::Forms::PictureBox^  backgroundPictureBox;
	private: System::Windows::Forms::PictureBox^  bigMeatPircuteBox;



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
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(EndingForm::typeid));
			this->pictureBox_c = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_r = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_n = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_o = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_g = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_a = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_t = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_u = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_l = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_a2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_t2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_i = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_o2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_n2 = (gcnew System::Windows::Forms::PictureBox());
			this->MainTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->dinoPictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->backgroundPictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->bigMeatPircuteBox = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_c))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_r))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_n))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_o))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_g))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_a))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_t))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_u))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_l))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_a2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_t2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_i))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_o2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_n2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dinoPictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->backgroundPictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bigMeatPircuteBox))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox_c
			// 
			this->pictureBox_c->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_c.Image")));
			this->pictureBox_c->Location = System::Drawing::Point(0, 0);
			this->pictureBox_c->Name = L"pictureBox_c";
			this->pictureBox_c->Size = System::Drawing::Size(98, 110);
			this->pictureBox_c->TabIndex = 1;
			this->pictureBox_c->TabStop = false;
			// 
			// pictureBox_r
			// 
			this->pictureBox_r->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_r.Image")));
			this->pictureBox_r->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_r.InitialImage")));
			this->pictureBox_r->Location = System::Drawing::Point(339, 0);
			this->pictureBox_r->Name = L"pictureBox_r";
			this->pictureBox_r->Size = System::Drawing::Size(58, 70);
			this->pictureBox_r->TabIndex = 2;
			this->pictureBox_r->TabStop = false;
			// 
			// pictureBox_n
			// 
			this->pictureBox_n->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_n.Image")));
			this->pictureBox_n->Location = System::Drawing::Point(179, 0);
			this->pictureBox_n->Name = L"pictureBox_n";
			this->pictureBox_n->Size = System::Drawing::Size(74, 70);
			this->pictureBox_n->TabIndex = 3;
			this->pictureBox_n->TabStop = false;
			// 
			// pictureBox_o
			// 
			this->pictureBox_o->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_o.Image")));
			this->pictureBox_o->Location = System::Drawing::Point(104, 0);
			this->pictureBox_o->Name = L"pictureBox_o";
			this->pictureBox_o->Size = System::Drawing::Size(69, 70);
			this->pictureBox_o->TabIndex = 4;
			this->pictureBox_o->TabStop = false;
			// 
			// pictureBox_g
			// 
			this->pictureBox_g->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_g.Image")));
			this->pictureBox_g->Location = System::Drawing::Point(259, 0);
			this->pictureBox_g->Name = L"pictureBox_g";
			this->pictureBox_g->Size = System::Drawing::Size(74, 100);
			this->pictureBox_g->TabIndex = 5;
			this->pictureBox_g->TabStop = false;
			// 
			// pictureBox_a
			// 
			this->pictureBox_a->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_a.Image")));
			this->pictureBox_a->Location = System::Drawing::Point(403, 0);
			this->pictureBox_a->Name = L"pictureBox_a";
			this->pictureBox_a->Size = System::Drawing::Size(82, 70);
			this->pictureBox_a->TabIndex = 6;
			this->pictureBox_a->TabStop = false;
			// 
			// pictureBox_t
			// 
			this->pictureBox_t->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_t.Image")));
			this->pictureBox_t->Location = System::Drawing::Point(491, 0);
			this->pictureBox_t->Name = L"pictureBox_t";
			this->pictureBox_t->Size = System::Drawing::Size(42, 100);
			this->pictureBox_t->TabIndex = 7;
			this->pictureBox_t->TabStop = false;
			// 
			// pictureBox_u
			// 
			this->pictureBox_u->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_u.Image")));
			this->pictureBox_u->Location = System::Drawing::Point(539, 0);
			this->pictureBox_u->Name = L"pictureBox_u";
			this->pictureBox_u->Size = System::Drawing::Size(78, 70);
			this->pictureBox_u->TabIndex = 8;
			this->pictureBox_u->TabStop = false;
			// 
			// pictureBox_l
			// 
			this->pictureBox_l->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_l.Image")));
			this->pictureBox_l->Location = System::Drawing::Point(623, 0);
			this->pictureBox_l->Name = L"pictureBox_l";
			this->pictureBox_l->Size = System::Drawing::Size(52, 100);
			this->pictureBox_l->TabIndex = 9;
			this->pictureBox_l->TabStop = false;
			// 
			// pictureBox_a2
			// 
			this->pictureBox_a2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_a2.Image")));
			this->pictureBox_a2->Location = System::Drawing::Point(681, 0);
			this->pictureBox_a2->Name = L"pictureBox_a2";
			this->pictureBox_a2->Size = System::Drawing::Size(83, 70);
			this->pictureBox_a2->TabIndex = 10;
			this->pictureBox_a2->TabStop = false;
			// 
			// pictureBox_t2
			// 
			this->pictureBox_t2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_t2.Image")));
			this->pictureBox_t2->Location = System::Drawing::Point(770, 0);
			this->pictureBox_t2->Name = L"pictureBox_t2";
			this->pictureBox_t2->Size = System::Drawing::Size(46, 100);
			this->pictureBox_t2->TabIndex = 11;
			this->pictureBox_t2->TabStop = false;
			// 
			// pictureBox_i
			// 
			this->pictureBox_i->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_i.Image")));
			this->pictureBox_i->Location = System::Drawing::Point(822, 0);
			this->pictureBox_i->Name = L"pictureBox_i";
			this->pictureBox_i->Size = System::Drawing::Size(40, 100);
			this->pictureBox_i->TabIndex = 12;
			this->pictureBox_i->TabStop = false;
			// 
			// pictureBox_o2
			// 
			this->pictureBox_o2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_o2.Image")));
			this->pictureBox_o2->Location = System::Drawing::Point(868, 0);
			this->pictureBox_o2->Name = L"pictureBox_o2";
			this->pictureBox_o2->Size = System::Drawing::Size(73, 70);
			this->pictureBox_o2->TabIndex = 14;
			this->pictureBox_o2->TabStop = false;
			// 
			// pictureBox_n2
			// 
			this->pictureBox_n2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_n2.Image")));
			this->pictureBox_n2->Location = System::Drawing::Point(947, 0);
			this->pictureBox_n2->Name = L"pictureBox_n2";
			this->pictureBox_n2->Size = System::Drawing::Size(77, 70);
			this->pictureBox_n2->TabIndex = 13;
			this->pictureBox_n2->TabStop = false;
			// 
			// MainTimer
			// 
			this->MainTimer->Enabled = true;
			this->MainTimer->Interval = 50;
			this->MainTimer->Tick += gcnew System::EventHandler(this, &EndingForm::MainTimer_Tick);
			// 
			// dinoPictureBox
			// 
			this->dinoPictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"dinoPictureBox.Image")));
			this->dinoPictureBox->Location = System::Drawing::Point(104, 380);
			this->dinoPictureBox->Name = L"dinoPictureBox";
			this->dinoPictureBox->Size = System::Drawing::Size(105, 112);
			this->dinoPictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->dinoPictureBox->TabIndex = 15;
			this->dinoPictureBox->TabStop = false;
			// 
			// backgroundPictureBox
			// 
			this->backgroundPictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"backgroundPictureBox.Image")));
			this->backgroundPictureBox->Location = System::Drawing::Point(0, 0);
			this->backgroundPictureBox->Name = L"backgroundPictureBox";
			this->backgroundPictureBox->Size = System::Drawing::Size(1112, 672);
			this->backgroundPictureBox->TabIndex = 16;
			this->backgroundPictureBox->TabStop = false;
			// 
			// bigMeatPircuteBox
			// 
			this->bigMeatPircuteBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bigMeatPircuteBox.Image")));
			this->bigMeatPircuteBox->Location = System::Drawing::Point(320, 57);
			this->bigMeatPircuteBox->Name = L"bigMeatPircuteBox";
			this->bigMeatPircuteBox->Size = System::Drawing::Size(512, 512);
			this->bigMeatPircuteBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->bigMeatPircuteBox->TabIndex = 17;
			this->bigMeatPircuteBox->TabStop = false;
			// 
			// EndingForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1034, 553);
			this->Controls->Add(this->bigMeatPircuteBox);
			this->Controls->Add(this->pictureBox_t);
			this->Controls->Add(this->pictureBox_a);
			this->Controls->Add(this->pictureBox_r);
			this->Controls->Add(this->pictureBox_g);
			this->Controls->Add(this->pictureBox_n);
			this->Controls->Add(this->dinoPictureBox);
			this->Controls->Add(this->pictureBox_o2);
			this->Controls->Add(this->pictureBox_n2);
			this->Controls->Add(this->pictureBox_i);
			this->Controls->Add(this->pictureBox_t2);
			this->Controls->Add(this->pictureBox_a2);
			this->Controls->Add(this->pictureBox_l);
			this->Controls->Add(this->pictureBox_u);
			this->Controls->Add(this->pictureBox_o);
			this->Controls->Add(this->pictureBox_c);
			this->Controls->Add(this->backgroundPictureBox);
			this->Name = L"EndingForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"EndingForm";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &EndingForm::EndingForm_FormClosing);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &EndingForm::EndingForm_KeyDown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_c))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_r))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_n))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_o))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_g))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_a))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_t))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_u))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_l))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_a2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_t2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_i))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_o2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_n2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dinoPictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->backgroundPictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bigMeatPircuteBox))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: int MainCounter = 0;
	private:

		Character^ __c;
		Character^ __r;
		Character^ __n;
		Character^ __o;
		Character^ __g;
		Character^ __a;
		Character^ __t;
		Character^ __u;
		Character^ __l;
		Character^ __a2;
		Character^ __t2;
		Character^ __i;
		Character^ __o2;
		Character^ __n2;
		Dinosaur^ dino;
		Point^ Meat_point;

	private: void SetDefaultAnimation() {

		__c = gcnew Character(pictureBox_c);
		__r = gcnew Character(pictureBox_r);
		__n = gcnew Character(pictureBox_n);
		__o = gcnew Character(pictureBox_o);
		__g = gcnew Character(pictureBox_g);
		__a = gcnew Character(pictureBox_a);
		__t = gcnew Character(pictureBox_t);
		__u = gcnew Character(pictureBox_u);
		__l = gcnew Character(pictureBox_l);
		__a2 = gcnew Character(pictureBox_a2);
		__t2 = gcnew Character(pictureBox_t2);
		__i = gcnew Character(pictureBox_i);
		__o2 = gcnew Character(pictureBox_o2);
		__n2 = gcnew Character(pictureBox_n2);
		dino = gcnew Dinosaur(dinoPictureBox);
		dino->SetParentPic(backgroundPictureBox);
		bigMeatPircuteBox->Parent = backgroundPictureBox;
		bigMeatPircuteBox->BackColor = Color::Transparent;
		Meat_point = bigMeatPircuteBox->Location;
		System::Drawing::Size^ size = bigMeatPircuteBox->Size;
		Meat_point->Y = -size->Height;
		bigMeatPircuteBox->Location = Point(Meat_point->X, Meat_point->Y);
	}
	
	private: System::Void MainTimer_Tick(System::Object^  sender, System::EventArgs^  e) {
		MainCounter++;
		CharacterHandle();
		DinosaurAnimation();
		if (MainCounter >= 240 && MainCounter <= 300) {
			Meat_point->Y += 10;
			bigMeatPircuteBox->Location = Point(Meat_point->X, Meat_point->Y);
		}
	}
	private: void DinosaurAnimation() {
		if (MainCounter < 50) {
			dino->RightMoving();
		}
		else if (MainCounter == 65) {
			dino->LeftMoving();
		}
		else if (MainCounter > 80 && MainCounter < 120) {
			dino->LeftMoving();
		}
		else if (MainCounter == 130) {
			dino->RightMoving();
		}
		else if (MainCounter == 140) {
			dino->LeftMoving();
		}
		else if (MainCounter > 150 && MainCounter < 180) {
			dino->LeftMoving();
		}
		else if (MainCounter == 210) {
			MainTimer->Stop();
		}
		
		if (MainCounter >= 300 && MainCounter < 332) {
			dino->RightMoving();
		}
		if (MainCounter >= 332 && MainCounter <= 342) {
			int accelerate = 10;
			int velocity = 50;
			int time = MainCounter - 332;
			double displacement = velocity * time - 0.5 * accelerate * time * time;
 			dino->Jump((int)displacement);
		}
		if (MainCounter >= 343 && MainCounter <= 362) {
			dino->RightMoving();
		}
		if (MainCounter == 363) {
			MainTimer->Stop();
			NotifyForm^ notify = gcnew NotifyForm();
			notify->ShowDialog();
			this->Close();

		}
		
	}
	private: void CharacterHandle() {
		if (MainCounter >= 10) {
			__c->Visiable();
			__c->Moving();
		}
		if (MainCounter >= 20) {
			__o->Visiable();
			__o->Moving();
		}
		if (MainCounter >= 30) {
			__n->Visiable();
			__n->Moving();
		}
		if (MainCounter >= 40) {
			__g->Visiable();
			__g->Moving();
		}
		if (MainCounter >= 50) {
			__r->Visiable();
			__r->Moving();
		}
		if (MainCounter >= 60) {
			__a->Visiable();
			__a->Moving();
		}
		if (MainCounter >= 70) {
			__t->Visiable();
			__t->Moving();
		}
		if (MainCounter >= 80) {
			__u->Visiable();
			__u->Moving();
		}
		if (MainCounter >= 90) {
			__l->Visiable();
			__l->Moving();
		}
		if (MainCounter >= 100) {
			__a2->Visiable();
			__a2->Moving();
		}
		if (MainCounter >= 110) {
			__t2->Visiable();
			__t2->Moving();
		}
		if (MainCounter >= 120) {
			__i->Visiable();
			__i->Moving();
		}
		if (MainCounter >= 130) {
			__o2->Visiable();
			__o2->Moving();
		}
		if (MainCounter >= 140) {
			__n2->Visiable();
			__n2->Moving();
		}

	}

private: System::Void EndingForm_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	if (e->KeyCode == Keys::Space) {
		MainTimer->Start();
	}

}
private: System::Void EndingForm_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
	MainTimer->Stop();

}
};
}
