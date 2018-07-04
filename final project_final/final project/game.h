#pragma once
#include "restartForm.h"
#include <Windows.h>
#include <stdio.h>
namespace finalproject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Media;

	/// <summary>
	/// game 的摘要
	/// </summary>
	public ref class game : public System::Windows::Forms::Form
	{
	public:
		int backGround1X = 0;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	public:
		int backGround2X = 0;
		int backGround3X = 0;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	public:
		int backGround4X = 0;
		int backGround5X = 0;
		int backGround6X = 0;
		int backGround7X = 100;
		int backGround7Y = 276;
		int backGround8X = 80;
		int backGround8Y = 322;
		int cactus1X = 480;
		int cactus1Y = 320;
		int cactus2X = 776;
		int cactus2Y = 320;
		int cactus3X = 1057;
		int cactus3Y = 320;
		int cactus4X = 5400;
		int cactus4Y = 337;
		int cactus5X = 1500;
		int cactus5Y = 337;
		int cactus6X = 1800;
		int cactus6Y = 320;
		int cactus7X = 2200;
		int cactus7Y = 337;
		int cactus8X = 2550;
		int cactus8Y = 320;
		int cactus9X = 3000;
		int cactus9Y = 320;
		int cactus10X = 3550;
		int cactus10Y = 320;
		int cactus11X = 4000;
		int cactus11Y = 337;
		int cactus12X = 4550;
		int cactus12Y = 337;
		int cactus13X = 4950;
		int cactus13Y = 320;
		/////////////////////////
		int fuckhorse1X = 560;
		int fuckhorse1Y = 296;
		int fuckhorse2X = 1000;
		int fuckhorse2Y = 313;
		int fuckhorse3X = 1443;
		int fuckhorse3Y = 296;
		int fuckhorse4X = 1843;
		int fuckhorse4Y = 296;
		int fuckhorse5X = 2283;
		int fuckhorse5Y = 313;
		int fuckhorse6X = 2783;
		int fuckhorse6Y = 313;
		int fuckhorse7X = 3183;
		int fuckhorse7Y = 296;
		int fuckhorse8X = 3560;
		int fuckhorse8Y = 296;
		int fuckhorse9X = 3900;
		int fuckhorse9Y = 296;
		int fuckhorse10X = 4230;
		int fuckhorse10Y = 296;
		int fuckhorse11X = 4930;
		int fuckhorse11Y = 296;
		////////////////////////////
		int penguin1X = 560;
		int penguin1Y = 311;
		int penguin2X = 1100;
		int penguin2Y = 311;
		int penguin3X = 1443;
		int penguin3Y = 311;
		int penguin4X = 1843;
		int penguin4Y = 311;
		int penguin5X = 2483;
		int penguin5Y = 311;
		int penguin6X = 2783;
		int penguin6Y = 311;
		int penguin7X = 3183;
		int penguin7Y = 311;
		int penguin8X = 3560;
		int penguin8Y = 311;
		int penguin9X = 3850;
		int penguin9Y = 311;
		int penguin10X = 4430;
		int penguin10Y = 311;
		///////////////////////////////
		int bird1X = 560;
		int bird1Y = 216;
		int bird2X = 1060;
		int bird2Y = 265;
		int bird3X = 1960;
		int bird3Y = 339;
		int bird4X = 2590;
		int bird4Y = 133;
		int bird5X = 3200;
		int bird5Y = 241;
		int bird6X = 3800;
		int bird6Y = 311;
		int bird7X = 4500;
		int bird7Y = 241;
		int bird8X = 5100;
		int bird8Y = 266;
		int bird9X = 5500;
		int bird9Y = 233;
		int bird10X = 6200;
		int bird10Y = 185;

		Control^ stateParent;


	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox6;

	private: System::Windows::Forms::Timer^  timerDino;


	public:

	private: System::Windows::Forms::Timer^  timerChangeDown;
	private: System::Windows::Forms::Timer^  timerChangeUp;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Timer^  timerScore;
	private: System::Windows::Forms::Timer^  timerCrouch;
	private: System::Windows::Forms::Timer^  timerAcceleDown;
	private: System::Windows::Forms::Timer^  timerPump;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::PictureBox^  pictureBox10;
	private: System::Windows::Forms::PictureBox^  pictureBox11;
	private: System::Windows::Forms::PictureBox^  pictureBox12;
	private: System::Windows::Forms::PictureBox^  pictureBox13;
	private: System::Windows::Forms::PictureBox^  pictureBox14;
	private: System::Windows::Forms::PictureBox^  pictureBox15;
	private: System::Windows::Forms::PictureBox^  pictureBox16;
	private: System::Windows::Forms::PictureBox^  pictureBox17;
	private: System::Windows::Forms::PictureBox^  pictureBox18;
	private: System::Windows::Forms::PictureBox^  pictureBox19;
	private: System::Windows::Forms::PictureBox^  pictureBox20;
	private: System::Windows::Forms::PictureBox^  pictureBox21;
	private: System::Windows::Forms::PictureBox^  pictureBox22;
	private: System::Windows::Forms::PictureBox^  pictureBox23;
	private: System::Windows::Forms::PictureBox^  pictureBox24;
	private: System::Windows::Forms::PictureBox^  pictureBox25;
	private: System::Windows::Forms::PictureBox^  pictureBox26;
	private: System::Windows::Forms::PictureBox^  pictureBox27;
	private: System::Windows::Forms::PictureBox^  pictureBox28;
	private: System::Windows::Forms::PictureBox^  pictureBox29;
	private: System::Windows::Forms::PictureBox^  pictureBox30;
	private: System::Windows::Forms::PictureBox^  pictureBox31;
	private: System::Windows::Forms::PictureBox^  pictureBox32;
	private: System::Windows::Forms::PictureBox^  pictureBox33;
	private: System::Windows::Forms::PictureBox^  pictureBox34;
	private: System::Windows::Forms::PictureBox^  pictureBox35;
	private: System::Windows::Forms::PictureBox^  pictureBox36;
	private: System::Windows::Forms::PictureBox^  pictureBox37;
	private: System::Windows::Forms::PictureBox^  pictureBox38;
	private: System::Windows::Forms::PictureBox^  pictureBox39;
	private: System::Windows::Forms::PictureBox^  pictureBox40;
	private: System::Windows::Forms::PictureBox^  pictureBox41;
	private: System::Windows::Forms::PictureBox^  pictureBox42;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
private: System::Windows::Forms::PictureBox^  pictureBox43;
private: System::Windows::Forms::PictureBox^  pictureBox44;
private: System::Windows::Forms::PictureBox^  pictureBox45;
private: System::Windows::Forms::PictureBox^  pictureBox46;
private: System::Windows::Forms::PictureBox^  pictureBox47;
private: System::Windows::Forms::PictureBox^  pictureBox48;
private: System::Windows::Forms::PictureBox^  pictureBox49;
private: System::Windows::Forms::PictureBox^  pictureBox50;
private: System::Windows::Forms::PictureBox^  pictureBox51;
private: System::Windows::Forms::PictureBox^  pictureBox52;












			 
	public:
		game()
		{
			InitializeComponent();
			//
			//TODO:  在此加入建構函式程式碼
			//
			// reset the score
			score = 0;
			// resest the pass
			Pass = false;

			
			SetStyle(ControlStyles::UserPaint, true);
			SetStyle(ControlStyles::AllPaintingInWmPaint, true);
			SetStyle(ControlStyles::DoubleBuffer, true);
			this->DoubleBuffered = true;
			timer1->Start();
			timerDino->Start();
			//label1->Parent = pictureBox1;
			//label1->BackColor = Color::Transparent;
			pictureBox7->Parent = pictureBox1;
			pictureBox7->BackColor = Color::Transparent;			
			timerScore->Start();
			timerPump->Start();
			//////////////////////////////////////////
			pictureBox9->Parent = pictureBox1;
			pictureBox9->BackColor = Color::Transparent;
			pictureBox10->Parent = pictureBox1;
			pictureBox10->BackColor = Color::Transparent;
			pictureBox11->Parent = pictureBox1;
			pictureBox11->BackColor = Color::Transparent;
			pictureBox12->Parent = pictureBox1;
			pictureBox12->BackColor = Color::Transparent;
			pictureBox13->Parent = pictureBox1;
			pictureBox13->BackColor = Color::Transparent;
			pictureBox14->Parent = pictureBox1;
			pictureBox14->BackColor = Color::Transparent;
			pictureBox15->Parent = pictureBox1;
			pictureBox15->BackColor = Color::Transparent;
			pictureBox16->Parent = pictureBox1;
			pictureBox16->BackColor = Color::Transparent;
			pictureBox17->Parent = pictureBox1;
			pictureBox17->BackColor = Color::Transparent;
			pictureBox18->Parent = pictureBox1;
			pictureBox18->BackColor = Color::Transparent;
			pictureBox19->Parent = pictureBox1;
			pictureBox19->BackColor = Color::Transparent;
			pictureBox20->Parent = pictureBox1;
			pictureBox20->BackColor = Color::Transparent;
			pictureBox21->Parent = pictureBox1;
			pictureBox21->BackColor = Color::Transparent;
			/////////////////////////////////////////////
			pictureBox22->Parent = pictureBox2;
			pictureBox22->BackColor = Color::Transparent;
			pictureBox23->Parent = pictureBox2;
			pictureBox23->BackColor = Color::Transparent;
			pictureBox24->Parent = pictureBox2;
			pictureBox24->BackColor = Color::Transparent;
			pictureBox25->Parent = pictureBox2;
			pictureBox25->BackColor = Color::Transparent;
			pictureBox26->Parent = pictureBox2;
			pictureBox26->BackColor = Color::Transparent;
			pictureBox27->Parent = pictureBox2;
			pictureBox27->BackColor = Color::Transparent;
			pictureBox28->Parent = pictureBox2;
			pictureBox28->BackColor = Color::Transparent;
			pictureBox29->Parent = pictureBox2;
			pictureBox29->BackColor = Color::Transparent;
			pictureBox30->Parent = pictureBox2;
			pictureBox30->BackColor = Color::Transparent;
			pictureBox31->Parent = pictureBox2;
			pictureBox31->BackColor = Color::Transparent;
			pictureBox32->Parent = pictureBox2;
			pictureBox32->BackColor = Color::Transparent;
			///////////////////////////////////////////////
			pictureBox33->Parent = pictureBox3;
			pictureBox33->BackColor = Color::Transparent;
			pictureBox34->Parent = pictureBox3;
			pictureBox34->BackColor = Color::Transparent;
			pictureBox35->Parent = pictureBox3;
			pictureBox35->BackColor = Color::Transparent;
			pictureBox36->Parent = pictureBox3;
			pictureBox36->BackColor = Color::Transparent;
			pictureBox37->Parent = pictureBox3;
			pictureBox37->BackColor = Color::Transparent;
			pictureBox38->Parent = pictureBox3;
			pictureBox38->BackColor = Color::Transparent;
			pictureBox39->Parent = pictureBox3;
			pictureBox39->BackColor = Color::Transparent; 
			pictureBox40->Parent = pictureBox3;
			pictureBox40->BackColor = Color::Transparent;
			pictureBox41->Parent = pictureBox3;
			pictureBox41->BackColor = Color::Transparent;
			pictureBox42->Parent = pictureBox3;
			pictureBox42->BackColor = Color::Transparent;
			///////////////////////////////////////////
			pictureBox43->Parent = pictureBox5;
			pictureBox43->BackColor = Color::Transparent;
			pictureBox44->Parent = pictureBox5;
			pictureBox44->BackColor = Color::Transparent;
			pictureBox45->Parent = pictureBox5;
			pictureBox45->BackColor = Color::Transparent;
			pictureBox46->Parent = pictureBox5;
			pictureBox46->BackColor = Color::Transparent;
			pictureBox47->Parent = pictureBox5;
			pictureBox47->BackColor = Color::Transparent;
			pictureBox48->Parent = pictureBox5;
			pictureBox48->BackColor = Color::Transparent;
			pictureBox49->Parent = pictureBox5;
			pictureBox49->BackColor = Color::Transparent;
			pictureBox50->Parent = pictureBox5;
			pictureBox50->BackColor = Color::Transparent;
			pictureBox51->Parent = pictureBox5;
			pictureBox51->BackColor = Color::Transparent;
			pictureBox52->Parent = pictureBox5;
			pictureBox52->BackColor = Color::Transparent;
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~game()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Timer^  timer1;




	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::ComponentModel::IContainer^  components;
	protected:

	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器
		/// 修改這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(game::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->timerDino = (gcnew System::Windows::Forms::Timer(this->components));
			this->timerChangeDown = (gcnew System::Windows::Forms::Timer(this->components));
			this->timerChangeUp = (gcnew System::Windows::Forms::Timer(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->timerScore = (gcnew System::Windows::Forms::Timer(this->components));
			this->timerCrouch = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox20 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox21 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox22 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox23 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox24 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox25 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox26 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox27 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox28 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox29 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox30 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox31 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox32 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox33 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox34 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox35 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox36 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox37 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox38 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox39 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox40 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox41 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox42 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->timerPump = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBox43 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox44 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox45 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox46 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox47 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox48 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox49 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox50 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox51 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox52 = (gcnew System::Windows::Forms::PictureBox());
			this->timerAcceleDown = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox35))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox36))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox37))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox38))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox39))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox40))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox41))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox42))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox43))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox44))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox45))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox46))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox47))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox48))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox49))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox50))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox51))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox52))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1680, 742);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// timer1
			// 
			this->timer1->Interval = 1;
			this->timer1->Tick += gcnew System::EventHandler(this, &game::timer1_Tick);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(0, 0);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(1681, 628);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Visible = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(0, 0);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(1680, 800);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 2;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Visible = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(0, 0);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(1680, 694);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 3;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Visible = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(0, 0);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(1860, 576);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 4;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Visible = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &game::pictureBox5_Click);
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(1, 0);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(1680, 1050);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox6->TabIndex = 5;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Visible = false;
			this->pictureBox6->Click += gcnew System::EventHandler(this, &game::pictureBox6_Click);
			// 
			// timerDino
			// 
			this->timerDino->Interval = 75;
			this->timerDino->Tick += gcnew System::EventHandler(this, &game::timerDino_Tick);
			// 
			// timerChangeDown
			// 
			this->timerChangeDown->Interval = 1;
			this->timerChangeDown->Tick += gcnew System::EventHandler(this, &game::timerChangeDown_Tick);
			// 
			// timerChangeUp
			// 
			this->timerChangeUp->Interval = 1;
			this->timerChangeUp->Tick += gcnew System::EventHandler(this, &game::timerChangeUp_Tick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe Marker", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(978, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(94, 40);
			this->label1->TabIndex = 7;
			this->label1->Text = L"label1";
			// 
			// timerScore
			// 
			this->timerScore->Tick += gcnew System::EventHandler(this, &game::timerScore_Tick);
			// 
			// timerCrouch
			// 
			this->timerCrouch->Interval = 1;
			this->timerCrouch->Tick += gcnew System::EventHandler(this, &game::timerCrouch_Tick);
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(326, 320);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(53, 67);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox9->TabIndex = 9;
			this->pictureBox9->TabStop = false;
			// 
			// pictureBox10
			// 
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(508, 320);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(45, 67);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox10->TabIndex = 10;
			this->pictureBox10->TabStop = false;
			// 
			// pictureBox11
			// 
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(559, 320);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(55, 67);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox11->TabIndex = 11;
			this->pictureBox11->TabStop = false;
			// 
			// pictureBox12
			// 
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(589, 337);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(49, 50);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox12->TabIndex = 12;
			this->pictureBox12->TabStop = false;
			// 
			// pictureBox13
			// 
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(271, 337);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(49, 50);
			this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox13->TabIndex = 13;
			this->pictureBox13->TabStop = false;
			// 
			// pictureBox14
			// 
			this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.Image")));
			this->pictureBox14->Location = System::Drawing::Point(437, 320);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(55, 67);
			this->pictureBox14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox14->TabIndex = 14;
			this->pictureBox14->TabStop = false;
			// 
			// pictureBox15
			// 
			this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.Image")));
			this->pictureBox15->Location = System::Drawing::Point(401, 337);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(45, 50);
			this->pictureBox15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox15->TabIndex = 15;
			this->pictureBox15->TabStop = false;
			// 
			// pictureBox16
			// 
			this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox16.Image")));
			this->pictureBox16->Location = System::Drawing::Point(662, 320);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(51, 67);
			this->pictureBox16->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox16->TabIndex = 16;
			this->pictureBox16->TabStop = false;
			// 
			// pictureBox17
			// 
			this->pictureBox17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox17.Image")));
			this->pictureBox17->Location = System::Drawing::Point(788, 320);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(51, 67);
			this->pictureBox17->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox17->TabIndex = 17;
			this->pictureBox17->TabStop = false;
			// 
			// pictureBox18
			// 
			this->pictureBox18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox18.Image")));
			this->pictureBox18->Location = System::Drawing::Point(719, 320);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(51, 67);
			this->pictureBox18->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox18->TabIndex = 18;
			this->pictureBox18->TabStop = false;
			// 
			// pictureBox19
			// 
			this->pictureBox19->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox19.Image")));
			this->pictureBox19->Location = System::Drawing::Point(459, 337);
			this->pictureBox19->Name = L"pictureBox19";
			this->pictureBox19->Size = System::Drawing::Size(45, 50);
			this->pictureBox19->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox19->TabIndex = 19;
			this->pictureBox19->TabStop = false;
			// 
			// pictureBox20
			// 
			this->pictureBox20->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox20.Image")));
			this->pictureBox20->Location = System::Drawing::Point(517, 337);
			this->pictureBox20->Name = L"pictureBox20";
			this->pictureBox20->Size = System::Drawing::Size(45, 50);
			this->pictureBox20->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox20->TabIndex = 20;
			this->pictureBox20->TabStop = false;
			// 
			// pictureBox21
			// 
			this->pictureBox21->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox21.Image")));
			this->pictureBox21->Location = System::Drawing::Point(385, 320);
			this->pictureBox21->Name = L"pictureBox21";
			this->pictureBox21->Size = System::Drawing::Size(45, 67);
			this->pictureBox21->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox21->TabIndex = 21;
			this->pictureBox21->TabStop = false;
			// 
			// pictureBox22
			// 
			this->pictureBox22->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox22.Image")));
			this->pictureBox22->Location = System::Drawing::Point(260, 94);
			this->pictureBox22->Name = L"pictureBox22";
			this->pictureBox22->Size = System::Drawing::Size(61, 93);
			this->pictureBox22->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox22->TabIndex = 22;
			this->pictureBox22->TabStop = false;
			// 
			// pictureBox23
			// 
			this->pictureBox23->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox23.Image")));
			this->pictureBox23->Location = System::Drawing::Point(230, 107);
			this->pictureBox23->Name = L"pictureBox23";
			this->pictureBox23->Size = System::Drawing::Size(61, 76);
			this->pictureBox23->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox23->TabIndex = 23;
			this->pictureBox23->TabStop = false;
			// 
			// pictureBox24
			// 
			this->pictureBox24->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox24.Image")));
			this->pictureBox24->Location = System::Drawing::Point(306, 178);
			this->pictureBox24->Name = L"pictureBox24";
			this->pictureBox24->Size = System::Drawing::Size(61, 93);
			this->pictureBox24->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox24->TabIndex = 24;
			this->pictureBox24->TabStop = false;
			// 
			// pictureBox25
			// 
			this->pictureBox25->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox25.Image")));
			this->pictureBox25->Location = System::Drawing::Point(282, 148);
			this->pictureBox25->Name = L"pictureBox25";
			this->pictureBox25->Size = System::Drawing::Size(61, 93);
			this->pictureBox25->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox25->TabIndex = 25;
			this->pictureBox25->TabStop = false;
			// 
			// pictureBox26
			// 
			this->pictureBox26->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox26.Image")));
			this->pictureBox26->Location = System::Drawing::Point(96, 107);
			this->pictureBox26->Name = L"pictureBox26";
			this->pictureBox26->Size = System::Drawing::Size(61, 76);
			this->pictureBox26->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox26->TabIndex = 26;
			this->pictureBox26->TabStop = false;
			// 
			// pictureBox27
			// 
			this->pictureBox27->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox27.Image")));
			this->pictureBox27->Location = System::Drawing::Point(163, 107);
			this->pictureBox27->Name = L"pictureBox27";
			this->pictureBox27->Size = System::Drawing::Size(61, 76);
			this->pictureBox27->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox27->TabIndex = 27;
			this->pictureBox27->TabStop = false;
			// 
			// pictureBox28
			// 
			this->pictureBox28->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox28.Image")));
			this->pictureBox28->Location = System::Drawing::Point(309, 135);
			this->pictureBox28->Name = L"pictureBox28";
			this->pictureBox28->Size = System::Drawing::Size(61, 93);
			this->pictureBox28->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox28->TabIndex = 28;
			this->pictureBox28->TabStop = false;
			// 
			// pictureBox29
			// 
			this->pictureBox29->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox29.Image")));
			this->pictureBox29->Location = System::Drawing::Point(385, 122);
			this->pictureBox29->Name = L"pictureBox29";
			this->pictureBox29->Size = System::Drawing::Size(61, 93);
			this->pictureBox29->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox29->TabIndex = 29;
			this->pictureBox29->TabStop = false;
			// 
			// pictureBox30
			// 
			this->pictureBox30->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox30.Image")));
			this->pictureBox30->Location = System::Drawing::Point(352, 58);
			this->pictureBox30->Name = L"pictureBox30";
			this->pictureBox30->Size = System::Drawing::Size(61, 93);
			this->pictureBox30->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox30->TabIndex = 30;
			this->pictureBox30->TabStop = false;
			// 
			// pictureBox31
			// 
			this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox31.Image")));
			this->pictureBox31->Location = System::Drawing::Point(443, 148);
			this->pictureBox31->Name = L"pictureBox31";
			this->pictureBox31->Size = System::Drawing::Size(61, 93);
			this->pictureBox31->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox31->TabIndex = 31;
			this->pictureBox31->TabStop = false;
			// 
			// pictureBox32
			// 
			this->pictureBox32->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox32.Image")));
			this->pictureBox32->Location = System::Drawing::Point(215, 148);
			this->pictureBox32->Name = L"pictureBox32";
			this->pictureBox32->Size = System::Drawing::Size(61, 93);
			this->pictureBox32->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox32->TabIndex = 32;
			this->pictureBox32->TabStop = false;
			// 
			// pictureBox33
			// 
			this->pictureBox33->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox33.Image")));
			this->pictureBox33->Location = System::Drawing::Point(589, 58);
			this->pictureBox33->Name = L"pictureBox33";
			this->pictureBox33->Size = System::Drawing::Size(67, 78);
			this->pictureBox33->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox33->TabIndex = 33;
			this->pictureBox33->TabStop = false;
			// 
			// pictureBox34
			// 
			this->pictureBox34->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox34.Image")));
			this->pictureBox34->Location = System::Drawing::Point(468, 38);
			this->pictureBox34->Name = L"pictureBox34";
			this->pictureBox34->Size = System::Drawing::Size(67, 78);
			this->pictureBox34->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox34->TabIndex = 34;
			this->pictureBox34->TabStop = false;
			// 
			// pictureBox35
			// 
			this->pictureBox35->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox35.Image")));
			this->pictureBox35->Location = System::Drawing::Point(452, 38);
			this->pictureBox35->Name = L"pictureBox35";
			this->pictureBox35->Size = System::Drawing::Size(67, 78);
			this->pictureBox35->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox35->TabIndex = 35;
			this->pictureBox35->TabStop = false;
			// 
			// pictureBox36
			// 
			this->pictureBox36->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox36.Image")));
			this->pictureBox36->Location = System::Drawing::Point(437, 38);
			this->pictureBox36->Name = L"pictureBox36";
			this->pictureBox36->Size = System::Drawing::Size(67, 78);
			this->pictureBox36->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox36->TabIndex = 36;
			this->pictureBox36->TabStop = false;
			// 
			// pictureBox37
			// 
			this->pictureBox37->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox37.Image")));
			this->pictureBox37->Location = System::Drawing::Point(419, 38);
			this->pictureBox37->Name = L"pictureBox37";
			this->pictureBox37->Size = System::Drawing::Size(67, 78);
			this->pictureBox37->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox37->TabIndex = 37;
			this->pictureBox37->TabStop = false;
			// 
			// pictureBox38
			// 
			this->pictureBox38->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox38.Image")));
			this->pictureBox38->Location = System::Drawing::Point(409, 38);
			this->pictureBox38->Name = L"pictureBox38";
			this->pictureBox38->Size = System::Drawing::Size(67, 78);
			this->pictureBox38->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox38->TabIndex = 38;
			this->pictureBox38->TabStop = false;
			// 
			// pictureBox39
			// 
			this->pictureBox39->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox39.Image")));
			this->pictureBox39->Location = System::Drawing::Point(395, 38);
			this->pictureBox39->Name = L"pictureBox39";
			this->pictureBox39->Size = System::Drawing::Size(67, 78);
			this->pictureBox39->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox39->TabIndex = 39;
			this->pictureBox39->TabStop = false;
			// 
			// pictureBox40
			// 
			this->pictureBox40->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox40.Image")));
			this->pictureBox40->Location = System::Drawing::Point(385, 38);
			this->pictureBox40->Name = L"pictureBox40";
			this->pictureBox40->Size = System::Drawing::Size(67, 78);
			this->pictureBox40->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox40->TabIndex = 40;
			this->pictureBox40->TabStop = false;
			// 
			// pictureBox41
			// 
			this->pictureBox41->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox41.Image")));
			this->pictureBox41->Location = System::Drawing::Point(379, 38);
			this->pictureBox41->Name = L"pictureBox41";
			this->pictureBox41->Size = System::Drawing::Size(67, 78);
			this->pictureBox41->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox41->TabIndex = 41;
			this->pictureBox41->TabStop = false;
			// 
			// pictureBox42
			// 
			this->pictureBox42->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox42.Image")));
			this->pictureBox42->Location = System::Drawing::Point(367, 38);
			this->pictureBox42->Name = L"pictureBox42";
			this->pictureBox42->Size = System::Drawing::Size(67, 78);
			this->pictureBox42->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox42->TabIndex = 42;
			this->pictureBox42->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(96, 276);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(109, 111);
			this->pictureBox7->TabIndex = 0;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(80, 320);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(144, 67);
			this->pictureBox8->TabIndex = 0;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Visible = false;
			// 
			// timerPump
			// 
			this->timerPump->Interval = 1;
			this->timerPump->Tick += gcnew System::EventHandler(this, &game::timerPump_Tick);
			// 
			// pictureBox43
			// 
			this->pictureBox43->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox43.Image")));
			this->pictureBox43->Location = System::Drawing::Point(124, 216);
			this->pictureBox43->Name = L"pictureBox43";
			this->pictureBox43->Size = System::Drawing::Size(100, 50);
			this->pictureBox43->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox43->TabIndex = 43;
			this->pictureBox43->TabStop = false;
			// 
			// pictureBox44
			// 
			this->pictureBox44->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox44.Image")));
			this->pictureBox44->Location = System::Drawing::Point(492, 255);
			this->pictureBox44->Name = L"pictureBox44";
			this->pictureBox44->Size = System::Drawing::Size(100, 50);
			this->pictureBox44->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox44->TabIndex = 44;
			this->pictureBox44->TabStop = false;
			// 
			// pictureBox45
			// 
			this->pictureBox45->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox45.Image")));
			this->pictureBox45->Location = System::Drawing::Point(500, 263);
			this->pictureBox45->Name = L"pictureBox45";
			this->pictureBox45->Size = System::Drawing::Size(100, 50);
			this->pictureBox45->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox45->TabIndex = 45;
			this->pictureBox45->TabStop = false;
			// 
			// pictureBox46
			// 
			this->pictureBox46->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox46.Image")));
			this->pictureBox46->Location = System::Drawing::Point(508, 271);
			this->pictureBox46->Name = L"pictureBox46";
			this->pictureBox46->Size = System::Drawing::Size(100, 50);
			this->pictureBox46->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox46->TabIndex = 46;
			this->pictureBox46->TabStop = false;
			// 
			// pictureBox47
			// 
			this->pictureBox47->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox47.Image")));
			this->pictureBox47->Location = System::Drawing::Point(516, 279);
			this->pictureBox47->Name = L"pictureBox47";
			this->pictureBox47->Size = System::Drawing::Size(100, 50);
			this->pictureBox47->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox47->TabIndex = 47;
			this->pictureBox47->TabStop = false;
			// 
			// pictureBox48
			// 
			this->pictureBox48->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox48.Image")));
			this->pictureBox48->Location = System::Drawing::Point(524, 287);
			this->pictureBox48->Name = L"pictureBox48";
			this->pictureBox48->Size = System::Drawing::Size(100, 50);
			this->pictureBox48->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox48->TabIndex = 48;
			this->pictureBox48->TabStop = false;
			// 
			// pictureBox49
			// 
			this->pictureBox49->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox49.Image")));
			this->pictureBox49->Location = System::Drawing::Point(532, 295);
			this->pictureBox49->Name = L"pictureBox49";
			this->pictureBox49->Size = System::Drawing::Size(100, 50);
			this->pictureBox49->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox49->TabIndex = 49;
			this->pictureBox49->TabStop = false;
			// 
			// pictureBox50
			// 
			this->pictureBox50->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox50.Image")));
			this->pictureBox50->Location = System::Drawing::Point(540, 303);
			this->pictureBox50->Name = L"pictureBox50";
			this->pictureBox50->Size = System::Drawing::Size(100, 50);
			this->pictureBox50->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox50->TabIndex = 50;
			this->pictureBox50->TabStop = false;
			// 
			// pictureBox51
			// 
			this->pictureBox51->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox51.Image")));
			this->pictureBox51->Location = System::Drawing::Point(548, 311);
			this->pictureBox51->Name = L"pictureBox51";
			this->pictureBox51->Size = System::Drawing::Size(100, 50);
			this->pictureBox51->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox51->TabIndex = 51;
			this->pictureBox51->TabStop = false;
			// 
			// pictureBox52
			// 
			this->pictureBox52->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox52.Image")));
			this->pictureBox52->Location = System::Drawing::Point(556, 319);
			this->pictureBox52->Name = L"pictureBox52";
			this->pictureBox52->Size = System::Drawing::Size(100, 50);
			this->pictureBox52->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox52->TabIndex = 52;
			this->pictureBox52->TabStop = false;
			// 
			// timerAcceleDown
			// 
			this->timerAcceleDown->Interval = 1;
			this->timerAcceleDown->Tick += gcnew System::EventHandler(this, &game::timerAcceleDown_Tick);
			// 
			// game
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1084, 561);
			this->Controls->Add(this->pictureBox52);
			this->Controls->Add(this->pictureBox51);
			this->Controls->Add(this->pictureBox50);
			this->Controls->Add(this->pictureBox49);
			this->Controls->Add(this->pictureBox48);
			this->Controls->Add(this->pictureBox47);
			this->Controls->Add(this->pictureBox46);
			this->Controls->Add(this->pictureBox45);
			this->Controls->Add(this->pictureBox44);
			this->Controls->Add(this->pictureBox43);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox42);
			this->Controls->Add(this->pictureBox41);
			this->Controls->Add(this->pictureBox40);
			this->Controls->Add(this->pictureBox39);
			this->Controls->Add(this->pictureBox38);
			this->Controls->Add(this->pictureBox37);
			this->Controls->Add(this->pictureBox36);
			this->Controls->Add(this->pictureBox35);
			this->Controls->Add(this->pictureBox34);
			this->Controls->Add(this->pictureBox33);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->pictureBox32);
			this->Controls->Add(this->pictureBox31);
			this->Controls->Add(this->pictureBox30);
			this->Controls->Add(this->pictureBox29);
			this->Controls->Add(this->pictureBox28);
			this->Controls->Add(this->pictureBox27);
			this->Controls->Add(this->pictureBox26);
			this->Controls->Add(this->pictureBox25);
			this->Controls->Add(this->pictureBox24);
			this->Controls->Add(this->pictureBox23);
			this->Controls->Add(this->pictureBox22);
			this->Controls->Add(this->pictureBox21);
			this->Controls->Add(this->pictureBox20);
			this->Controls->Add(this->pictureBox19);
			this->Controls->Add(this->pictureBox18);
			this->Controls->Add(this->pictureBox17);
			this->Controls->Add(this->pictureBox16);
			this->Controls->Add(this->pictureBox15);
			this->Controls->Add(this->pictureBox14);
			this->Controls->Add(this->pictureBox13);
			this->Controls->Add(this->pictureBox12);
			this->Controls->Add(this->pictureBox11);
			this->Controls->Add(this->pictureBox10);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"game";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"game";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &game::game_FormClosing);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &game::KeyDown_click);
			this->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &game::KeyUp_click);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox35))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox36))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox37))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox38))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox39))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox40))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox41))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox42))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox43))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox44))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox45))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox46))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox47))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox48))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox49))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox50))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox51))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox52))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		MainCounter++;
		if (MainCounter == 370){
			pictureBox1->Visible = false;
			pictureBox2->Visible = true;
			pictureBox7->BackColor = Color::Transparent;
			pictureBox7->Parent = pictureBox2;
			backGround7X = 100;
			backGround7Y = 276;
			backGround8X = 80;
			backGround8Y = 322;
		}
		if (MainCounter == 660){
			pictureBox2->Visible = false;
			pictureBox3->Visible = true;
			pictureBox7->BackColor = Color::Transparent;
			pictureBox7->Parent = pictureBox3;
			backGround7X = 100;
			backGround7Y = 276;
			backGround8X = 80;
			backGround8Y = 322;
		}
		if (MainCounter == 950){
			pictureBox3->Visible = false;
			pictureBox5->Visible = true;
			pictureBox7->BackColor = Color::Transparent;
			pictureBox7->Parent = pictureBox5;
			backGround7X = 100;
			backGround7Y = 276;
			backGround8X = 80;
			backGround8Y = 322;
		}
	/*	if (count == 1500){
			pictureBox4->Visible = false;
			pictureBox5->Visible = true;
			pictureBox7->BackColor = Color::Transparent;
			pictureBox7->Parent = pictureBox5;
			backGround7X = 100;
			backGround7Y = 276;
			backGround8X = 80;
			backGround8Y = 322;
		}*/
		if (MainCounter == 1180){
			pictureBox5->Visible = false;
			pictureBox6->Visible = true;
			pictureBox7->BackColor = Color::Transparent;
			pictureBox7->Parent = pictureBox6;
			backGround7X = 100;
			backGround7Y = 276;
			backGround8X = 80;
			backGround8Y = 322;
		}

		
		if (MainCounter  < 370){
			pictureBox1->Location = Point(backGround1X -= 1, 0);
			pictureBox9->Location = Point(cactus1X -= 15, cactus1Y);
			pictureBox10->Location = Point(cactus2X -= 15, cactus2Y);
			pictureBox11->Location = Point(cactus3X -= 15, cactus3Y);
			pictureBox12->Location = Point(cactus4X -= 15, cactus4Y);
			pictureBox13->Location = Point(cactus5X -= 15, cactus5Y);
			pictureBox14->Location = Point(cactus6X -= 15, cactus6Y);
			pictureBox15->Location = Point(cactus7X -= 15, cactus7Y);
			pictureBox16->Location = Point(cactus8X -= 15, cactus8Y);
			pictureBox17->Location = Point(cactus9X -= 15, cactus9Y);
			pictureBox18->Location = Point(cactus10X -= 15, cactus10Y);
			pictureBox19->Location = Point(cactus11X -= 15, cactus11Y);     
			pictureBox20->Location = Point(cactus12X -= 15, cactus12Y);
			pictureBox21->Location = Point(cactus13X -= 15, cactus13Y);
			
			pictureBox7->Location = Point(backGround7X += 1, backGround7Y);
			pictureBox8->Location = Point(backGround8X += 1, backGround8Y);
		}
		else if (MainCounter >= 370 && MainCounter  <660){
			pictureBox2->Location = Point(backGround2X -= 1, 0);
			pictureBox22->Location = Point(fuckhorse1X -= 18, fuckhorse1Y);
			pictureBox23->Location = Point(fuckhorse2X -= 18, fuckhorse2Y);
			pictureBox24->Location = Point(fuckhorse3X -= 18, fuckhorse3Y);
			pictureBox25->Location = Point(fuckhorse4X -= 18, fuckhorse4Y);
			pictureBox26->Location = Point(fuckhorse5X -= 18, fuckhorse5Y);
			pictureBox27->Location = Point(fuckhorse6X -= 18, fuckhorse6Y);
			pictureBox28->Location = Point(fuckhorse7X -= 18, fuckhorse7Y);
			pictureBox29->Location = Point(fuckhorse8X -= 18, fuckhorse8Y);
			pictureBox30->Location = Point(fuckhorse9X -= 18, fuckhorse9Y);
			pictureBox31->Location = Point(fuckhorse10X -= 18, fuckhorse10Y);
			pictureBox32->Location = Point(fuckhorse11X -= 18, fuckhorse11Y);

			pictureBox7->Location = Point(backGround7X += 1, backGround7Y);
			pictureBox8->Location = Point(backGround8X += 1, backGround8Y);

		}
		else if (MainCounter >= 660 && MainCounter < 950){
			pictureBox3->Location = Point(backGround3X -= 2, 0);
			pictureBox33->Location = Point(penguin1X -= 20, penguin1Y);
			pictureBox34->Location = Point(penguin2X -= 20, penguin2Y);
			pictureBox35->Location = Point(penguin3X -= 20, penguin3Y);
			pictureBox36->Location = Point(penguin4X -= 20, penguin4Y);
			pictureBox37->Location = Point(penguin5X -= 20, penguin5Y);
			pictureBox38->Location = Point(penguin6X -= 20, penguin6Y);
			pictureBox39->Location = Point(penguin7X -= 20, penguin7Y);
			pictureBox40->Location = Point(penguin8X -= 20, penguin8Y);
			pictureBox41->Location = Point(penguin9X -= 20, penguin9Y);
			pictureBox42->Location = Point(penguin10X -= 20, penguin10Y);

			pictureBox7->Location = Point(backGround7X += 2, backGround7Y);
			pictureBox8->Location = Point(backGround8X += 2, backGround8Y);


		}
		/*else if (count >= 1200 && count<1500){
			pictureBox4->Location = Point(backGround4X -= 2, 0);
			pictureBox7->Location = Point(backGround7X += 2, backGround7Y);
			pictureBox8->Location = Point(backGround8X += 2, backGround8Y);

		}*/
		
		else if (MainCounter >= 950 && MainCounter  <1180){
			pictureBox5->Location = Point(backGround5X -= 3, 0);
			pictureBox43->Location = Point(bird1X -= 25, bird1Y);
			pictureBox44->Location = Point(bird2X -= 25, bird2Y);
			pictureBox45->Location = Point(bird3X -= 25, bird3Y);
			pictureBox46->Location = Point(bird4X -= 25, bird4Y);
			pictureBox47->Location = Point(bird5X -= 25, bird5Y);
			pictureBox48->Location = Point(bird6X -= 25, bird6Y);
			pictureBox49->Location = Point(bird7X -= 25, bird7Y);
			pictureBox50->Location = Point(bird8X -= 25, bird8Y);
			pictureBox51->Location = Point(bird9X -= 25, bird9Y);
			pictureBox52->Location = Point(bird10X -= 25, bird10Y);


			pictureBox7->Location = Point(backGround7X += 4, backGround7Y);
			pictureBox8->Location = Point(backGround8X += 4, backGround8Y);
			
		}
		else if (MainCounter >= 1180 && MainCounter <2853){
			if (backGround6X < -430){
				pictureBox7->Location = Point(backGround7X += 1, backGround7Y);
				pictureBox8->Location = Point(backGround8X += 1, backGround8Y);

			}
			else{
				pictureBox6->Location = Point(backGround6X -= 1, 0);
				pictureBox7->Location = Point(backGround7X += 1, backGround7Y);
				pictureBox8->Location = Point(backGround8X += 1, backGround8Y);
			}

		}
		else if(MainCounter ==2853){
			timer1->Stop();
			timerChangeDown->Stop();
			timerChangeUp->Stop();
			timerCrouch->Stop();
			timerPump->Stop();
			timerDino->Stop();
			timerScore->Stop();
			Pass = true;
			this->Close();
		}

	}
	private: System::Void timerDino_Tick(System::Object^  sender, System::EventArgs^  e) {
		change++;
		change = change % 2;

		if (backGround7Y < 276){
			pictureBox7->Image = Image::FromFile("dino0.png");
		}
		else if(backGround7Y >  276) {
			pictureBox7->Location = Point(backGround7X ,  276);
			if (change==0){
				pictureBox7->Image = Image::FromFile("dino2.png");
			}
			else{
				pictureBox7->Image = Image::FromFile("dino1.png");
			}

		}
		else{
			WalkSound();
			if (change == 0){
				pictureBox7->Image = Image::FromFile("dino2.png");
			}
			else{
				pictureBox7->Image = Image::FromFile("dino1.png");
			}
		}
	}
			 // Variable Declaration
			 // GROUNG_Y: 地面的水平座標
			 // TOP_Y: Dinasour跳躍的最高點的水平座標
			 // ACCELEATION: 加速度 
			 // velocity: 初速度 
			 // jump_counter: 計算jump一次的執行次數
	public:	static int score = 0;
	public: static bool Pass = false;

	private: static bool Immortal_mode = false;
	private: static int	 SoundEffect_mode = true;

	private: int MainCounter = 0;
	private: int jump_counter = 0;
	private: int change = 0;

	private: const static int GROUND_Y = 276;
	private: const static int TOP_Y = 27;
	private: const static double ACCELERATION = 13.88;
	private: const static double ACC_ACCELERATION = 20;
	private: const static double START_VELOCITY = 83.33;
	private: bool accele_active = false;


	
	public: static void SetSoundEffect(bool soundeffectChecked) {
		SoundEffect_mode = soundeffectChecked;
	}
	private: void JumpSound() {
		if (SoundEffect_mode)
			mciSendString(TEXT("play res/yee.wav"), 0, 0, 0);
	}
	private: void WalkSound() {
		if (SoundEffect_mode)
			mciSendString(TEXT("play res/walk.wav"), 0, 0, 0);
	}
	private: void DeadSound() {
		if (SoundEffect_mode)
			mciSendString(TEXT("play res/dead.wav"), 0, 0, 0);
	}
	private: void PointSound() {
		if (SoundEffect_mode)
			mciSendString(TEXT("play res/point.wav"), 0, 0, 0);
	}
	private: System::Void KeyDown_click(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {

		if (e->KeyCode == Keys::Up || e->KeyCode == Keys::Space) {
			if (backGround7Y == GROUND_Y) {
				timerChangeUp->Start();
				JumpSound();
			}
		}
		if (e->KeyCode == Keys::Down) {
			if (backGround7Y == GROUND_Y){
				pictureBox7->Visible = false;
				pictureBox8->Parent = pictureBox7->Parent;
				pictureBox8->BackColor = Color::Transparent;
				pictureBox8->Visible = true;
				timerCrouch->Start();
			}
			else {
				timerAcceleDown->Start();
			}
		}
	}
	private: System::Void KeyUp_click(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		if (e->KeyCode == Keys::Down){
			if (backGround7Y == GROUND_Y) {
				timerCrouch->Stop();
				pictureBox8->Visible = false;
				pictureBox7->Visible = true;
			}
		}
	}
private: System::Void timerChangeUp_Tick(System::Object^  sender, System::EventArgs^  e) {
	jump_counter++;
	double displacement = START_VELOCITY * jump_counter - 0.5 * ACCELERATION * jump_counter * jump_counter;
	backGround7Y = GROUND_Y - (int)displacement;
	if (backGround7Y <= TOP_Y) {	// 預設8秒後升到最高處
		// resest jump counter
		//jump_counter = 0;
		// setting top y coordinate
		backGround7Y = TOP_Y;
		// STOP THE CHANGING UP
		timerChangeUp->Stop();
		// BEGIN TO CHANGING DOWN
		timerChangeDown->Start();
	}
	
	pictureBox7->Location = Point(backGround7X, backGround7Y);

}
private: System::Void timerChangeDown_Tick(System::Object^  sender, System::EventArgs^  e) {
	jump_counter++;
	double displacemnt = 0.5 * ACCELERATION * (2 * (jump_counter - 6) + 1);
	backGround7Y += (int)displacemnt;
	if (backGround7Y >= GROUND_Y) {	// 表示已經落地
		// reset jump counter
		jump_counter = 0;
		// setting ground y coordinate
		backGround7Y = GROUND_Y;
		// STOP THE CHANGING DOWN
		timerChangeDown->Stop();
	}
	pictureBox7->Location = Point(backGround7X, backGround7Y);
}
private: System::Void timerAcceleDown_Tick(System::Object^ sender, System::EventArgs^ e) {
	if (!accele_active) {
		accele_active = true;		
		timerChangeUp->Stop();
		timerChangeDown->Stop();
		if (jump_counter <= 6) { jump_counter = 0; }
		else
			jump_counter -= 6;
	}
	jump_counter++;
	double displacemnt = 0.5 * ACC_ACCELERATION * (2 * jump_counter + 1);
	backGround7Y += (int)displacemnt;
	if (backGround7Y >= GROUND_Y) {
		accele_active = false;
		jump_counter = 0;
		backGround7Y = GROUND_Y;
		timerAcceleDown->Stop();
		
	}
	pictureBox7->Location = Point(backGround7X, backGround7Y);
}
private: System::Void timerScore_Tick(System::Object^  sender, System::EventArgs^  e) {
	score++;
	label1->Text = System::Convert::ToString(score);
	if (score % 100 == 0) {
		PointSound();
	}
	if (score == 1000){
		timerScore->Stop();
	}
}
private: System::Void timerCrouch_Tick(System::Object^  sender, System::EventArgs^  e) {
	change++;
	change = change % 2;

	if (change == 0){
		pictureBox8->Image = Image::FromFile("dino3.png");
	}
	else{
		pictureBox8->Image = Image::FromFile("dino5.png");
	}

}
public: static void SetImmortal(bool decision) {
	Immortal_mode = decision;
}
private: void GameOver() {
	if (!Immortal_mode) {
		DeadSound();
		timer1->Stop();
		timerChangeDown->Stop();
		timerChangeUp->Stop();
		timerCrouch->Stop();
		timerPump->Stop();
		timerDino->Stop();
		timerScore->Stop();
		pictureBox7->Image = Image::FromFile("died.png");
		restartForm^ restart = gcnew restartForm();
		restart->ShowDialog();
		this->Close();
	}
	
}
private: System::Void pictureBox5_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void pictureBox6_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void timerPump_Tick(System::Object^  sender, System::EventArgs^  e) {
	bool standUp = pictureBox7->Visible;
	bool sitDown = pictureBox8->Visible;
	Control^ upParent = pictureBox7->Parent;
	Control^ downParent = pictureBox8->Parent;
	int stateUp;
	int stateDown;
	if (standUp==true){
		if (upParent == pictureBox1){
			stateUp = 1;
		}
		else if (upParent == pictureBox2){
			stateUp = 2;
		}
		else if (upParent == pictureBox3){
			stateUp = 3;
		}
		else if (upParent == pictureBox5){
			stateUp = 4;
		}
		switch (stateUp)
		{
		case 1:
			if (cactus1X < backGround7X + 102 && backGround7X<cactus1X + 32){
				if (backGround7Y + 110 > cactus1Y) {
					GameOver();
				}
			}
			if (cactus2X < backGround7X + 102 && backGround7X<cactus2X + 29){
				if (backGround7Y + 110 > cactus2Y){
					GameOver();
				}
			}
			if (cactus3X < backGround7X + 102 && backGround7X<cactus3X + 32){
				if (backGround7Y + 110>cactus3Y){
					GameOver();
				}
			}
			if (cactus4X < backGround7X + 102 && backGround7X<cactus4X + 28){
				if (backGround7Y + 110>cactus4Y){
					GameOver();
				}
			}
			if (cactus5X < backGround7X + 102 && backGround7X<cactus5X + 28){
				if (backGround7Y + 110>cactus5Y){
					GameOver();
				}
			}
			if (cactus6X < backGround7X + 102 && backGround7X<cactus6X + 32){
				if (backGround7Y + 110>cactus6Y){
					GameOver();
				}
			}
			if (cactus7X < backGround7X + 102 && backGround7X<cactus7X + 29){
				if (backGround7Y + 110>cactus7Y){
					GameOver();
				}
			}
			if (cactus8X < backGround7X + 102 && backGround7X<cactus8X + 30){
				if (backGround7Y + 110>cactus8Y){
					GameOver();
				}
			}
			if (cactus9X < backGround7X + 102 && backGround7X<cactus9X + 30){
				if (backGround7Y + 110>cactus9Y){
					GameOver();
				}
			}
			if (cactus10X < backGround7X + 102 && backGround7X<cactus10X + 30){
				if (backGround7Y + 110>cactus10Y){
					GameOver();
				}
			}
			if (cactus11X < backGround7X + 102 && backGround7X<cactus11X + 29){
				if (backGround7Y + 110>cactus11Y){
					GameOver();
				}
			}
			if (cactus12X < backGround7X + 102 && backGround7X<cactus12X + 29){
				if (backGround7Y + 110>cactus12Y){
					GameOver();
				}
			}
			if (cactus13X < backGround7X + 102 && backGround7X<cactus13X + 29){
				if (backGround7Y + 110>cactus13Y){
					GameOver();
				}
			}
			break;
			case 2:
				if (fuckhorse1X < backGround7X + 102 && backGround7X< fuckhorse1X + 45){
					if (backGround7Y + 110>fuckhorse1Y){
						GameOver();
					}
				}
				if (fuckhorse2X < backGround7X + 102 && backGround7X< fuckhorse2X + 45){
					if (backGround7Y + 110>fuckhorse2Y){
						GameOver();
					}
				}
				if (fuckhorse3X < backGround7X + 102 && backGround7X< fuckhorse3X + 45){
					if (backGround7Y + 110>fuckhorse3Y){
						GameOver();
					}
				}
				if (fuckhorse4X < backGround7X + 102 && backGround7X< fuckhorse4X + 45){
					if (backGround7Y + 110>fuckhorse4Y){
						GameOver();
					}
				}
				if (fuckhorse5X < backGround7X + 102 && backGround7X< fuckhorse5X + 45){
					if (backGround7Y + 110>fuckhorse5Y){
						GameOver();
					}
				}
				if (fuckhorse6X < backGround7X + 102 && backGround7X< fuckhorse6X + 45){
					if (backGround7Y + 110>fuckhorse6Y){
						GameOver();
					}
				}
				if (fuckhorse7X < backGround7X + 102 && backGround7X< fuckhorse7X + 45){
					if (backGround7Y + 110>fuckhorse7Y){
						GameOver();
					}
				}
				if (fuckhorse8X < backGround7X + 102 && backGround7X< fuckhorse8X + 45){
					if (backGround7Y + 110>fuckhorse8Y){
						GameOver();
					}
				}
				if (fuckhorse9X < backGround7X + 102 && backGround7X< fuckhorse9X + 45){
					if (backGround7Y + 110>fuckhorse9Y){
						GameOver();
					}
				}
				if (fuckhorse10X < backGround7X + 102 && backGround7X< fuckhorse10X + 45){
					if (backGround7Y + 110>fuckhorse10Y){
						GameOver();
					}
				}
				if (fuckhorse11X < backGround7X + 102 && backGround7X< fuckhorse11X + 45){
					if (backGround7Y + 110>fuckhorse11Y){
						GameOver();
					}
				}

				break;
			case 3:
				if (penguin1X < backGround7X + 102 && backGround7X< penguin1X + 45){
					if (backGround7Y + 110>penguin1Y){
						GameOver();
					}
				}
				if (penguin2X < backGround7X + 102 && backGround7X< penguin2X + 45){
					if (backGround7Y + 110>penguin2Y){
						GameOver();
					}
				}
				if (penguin3X < backGround7X + 102 && backGround7X< penguin3X + 45){
					if (backGround7Y + 110>penguin3Y){
						GameOver();
					}
				}
				if (penguin4X < backGround7X + 102 && backGround7X< penguin4X + 45){
					if (backGround7Y + 110>penguin4Y){
						GameOver();
					}
				}
				if (penguin5X < backGround7X + 102 && backGround7X< penguin5X + 45){
					if (backGround7Y + 110>penguin5Y){
						GameOver();
					}
				}
				if (penguin6X < backGround7X + 102 && backGround7X< penguin6X + 45){
					if (backGround7Y + 110>penguin6Y){
						GameOver();
					}
				}
				if (penguin7X < backGround7X + 102 && backGround7X< penguin7X + 45){
					if (backGround7Y + 110>penguin7Y){
						GameOver();
					}
				}
				if (penguin8X < backGround7X + 102 && backGround7X< penguin8X + 45){
					if (backGround7Y + 110>penguin8Y){
						GameOver();
					}
				}
				if (penguin9X < backGround7X + 102 && backGround7X< penguin9X + 45){
					if (backGround7Y + 110>penguin9Y){
						GameOver();
					}
				}
				if (penguin10X < backGround7X + 102 && backGround7X< penguin10X + 45){
					if (backGround7Y + 110>penguin10Y){
						GameOver();
					}
				}

				break;
			case 4:
				if (bird1X < backGround7X + 102 && backGround7X< bird1X + 75){
					if (backGround7Y + 110>bird1Y && bird1Y+48 > backGround7Y){
						GameOver();
					}
				}
				if (bird2X < backGround7X + 102 && backGround7X< bird2X + 75){
					if (backGround7Y + 110>bird2Y && bird2Y + 48 > backGround7Y){
						GameOver();
					}
				}
				if (bird3X < backGround7X + 102 && backGround7X< bird3X + 75){
					if (backGround7Y + 110>bird3Y && bird3Y + 48 > backGround7Y){
						GameOver();
					}
				}
				if (bird4X < backGround7X + 102 && backGround7X< bird4X + 75){
					if (backGround7Y + 110>bird4Y && bird4Y + 48 > backGround7Y){
						GameOver();
					}
				}
				if (bird5X < backGround7X + 102 && backGround7X< bird5X + 75){
					if (backGround7Y + 110>bird5Y && bird5Y + 48 > backGround7Y){
						GameOver();
					}
				}
				if (bird6X < backGround7X + 102 && backGround7X< bird6X + 75){
					if (backGround7Y + 110>bird6Y && bird6Y + 48 > backGround7Y){
						GameOver();
					}
				}
				if (bird7X < backGround7X + 102 && backGround7X< bird7X + 75){
					if (backGround7Y + 110>bird7Y && bird7Y + 48 > backGround7Y){
						GameOver();
					}
				}
				if (bird8X < backGround7X + 102 && backGround7X< bird8X + 75){
					if (backGround7Y + 110>bird8Y && bird8Y + 48 > backGround7Y){
						GameOver();
					}
				}
				if (bird9X < backGround7X + 102 && backGround7X< bird9X + 75){
					if (backGround7Y + 110>bird9Y && bird9Y + 48 > backGround7Y){
						GameOver();
					}
				}
				if (bird10X < backGround7X + 102 && backGround7X< bird10X + 75){
					if (backGround7Y + 110>bird10Y && bird10Y + 48 > backGround7Y){
						GameOver();
					}
				}

				break;
		default:
			break;
		}
				
	}
	else if (sitDown==true){
		if (downParent == pictureBox1){
			stateDown = 1;
		}
		else if (downParent == pictureBox2){
			stateDown = 2;
		}
		else if (downParent == pictureBox3){
			stateDown = 3;
		}
		else if (downParent == pictureBox5){
			stateDown = 4;
		}
		switch (stateDown)
		{
		case 1:
			if (cactus1X < backGround8X + 142 && backGround8X < cactus1X + 32){
				if (backGround8Y + 65>cactus1Y){
					GameOver();
				}
			}
			if (cactus2X < backGround8X + 142 && backGround8X < cactus2X + 29){
				if (backGround8Y + 65>cactus2Y){
					GameOver();
				}
			}
			if (cactus3X < backGround8X + 142 && backGround8X < cactus3X + 32){
				if (backGround8Y + 65>cactus3Y){
					GameOver();
				}
			}
			if (cactus4X < backGround8X + 142 && backGround8X < cactus4X + 28){
				if (backGround8Y + 65>cactus4Y){
					GameOver();
				}
			}
			if (cactus5X < backGround8X + 142 && backGround8X < cactus5X + 28){
				if (backGround8Y + 65>cactus5Y){
					GameOver();
				}
			}
			if (cactus6X < backGround8X + 142 && backGround8X < cactus6X + 32){
				if (backGround8Y + 65>cactus6Y){
					GameOver();
				}
			}
			if (cactus7X < backGround8X + 142 && backGround8X < cactus7X + 29){
				if (backGround8Y + 65>cactus7Y){
					GameOver();
				}
			}
			if (cactus8X < backGround8X + 142 && backGround8X < cactus8X + 30){
				if (backGround8Y + 65>cactus8Y){
					GameOver();
				}
			}
			if (cactus9X < backGround8X + 142 && backGround8X < cactus9X + 30){
				if (backGround8Y + 65>cactus9Y){
					GameOver();
				}
			}
			if (cactus10X < backGround8X + 142 && backGround8X < cactus10X + 30){
				if (backGround8Y + 65>cactus10Y){
					GameOver();
				}
			}
			if (cactus11X < backGround8X + 142 && backGround8X < cactus11X + 29){
				if (backGround8Y + 65>cactus11Y){
					GameOver();
				}
			}
			if (cactus12X < backGround8X + 142 && backGround8X < cactus12X + 29){
				if (backGround8Y + 65>cactus12Y){
					GameOver();
				}
			}
			if (cactus13X < backGround8X + 142 && backGround8X < cactus13X + 29){
				if (backGround8Y + 65>cactus13Y){
					GameOver();
				}
			}
			break;
		case 2:
			if (fuckhorse1X < backGround8X + 142 && backGround8X< fuckhorse1X + 45){
				if (backGround8Y + 65>fuckhorse1Y){
					GameOver();
				}
			}
			if (fuckhorse2X < backGround8X + 142 && backGround8X< fuckhorse2X + 45){
				if (backGround8Y + 65>fuckhorse2Y){
					GameOver();
				}
			}
			if (fuckhorse3X < backGround8X + 142 && backGround8X< fuckhorse3X + 45){
				if (backGround8Y + 65>fuckhorse3Y){
					GameOver();
				}
			}
			if (fuckhorse4X < backGround8X + 142 && backGround8X< fuckhorse4X + 45){
				if (backGround8Y + 65>fuckhorse4Y){
					GameOver();
				}
			}
			if (fuckhorse5X < backGround8X + 142 && backGround8X< fuckhorse5X + 45){
				if (backGround8Y + 65>fuckhorse5Y){
					GameOver();
				}
			}
			if (fuckhorse6X < backGround8X + 142 && backGround8X< fuckhorse6X + 45){
				if (backGround8Y + 65>fuckhorse6Y){
					GameOver();
				}
			}
			if (fuckhorse7X < backGround8X + 142 && backGround8X< fuckhorse7X + 45){
				if (backGround8Y + 65>fuckhorse7Y){
					GameOver();
				}
			}
			if (fuckhorse8X < backGround8X + 142 && backGround8X< fuckhorse8X + 45){
				if (backGround8Y + 65>fuckhorse8Y){
					GameOver();
				}
			}
			if (fuckhorse9X < backGround8X + 142 && backGround8X< fuckhorse8X + 45){
				if (backGround8Y + 65>fuckhorse9Y){
					GameOver();
				}
			}
			if (fuckhorse10X < backGround8X + 142 && backGround8X< fuckhorse10X + 45){
				if (backGround8Y + 65>fuckhorse10Y){
					GameOver();
				}
			}
			if (fuckhorse11X < backGround8X + 142 && backGround8X< fuckhorse11X + 45){
				if (backGround8Y + 65>fuckhorse11Y){
					GameOver();
				}
			}

			break;
		case 3:
			if (penguin1X < backGround8X + 142 && backGround8X< penguin1X + 45){
				if (backGround8Y + 65>penguin1Y){
					GameOver();
				}
			}
			if (penguin2X < backGround8X + 142 && backGround8X< penguin2X + 45){
				if (backGround8Y + 65>penguin2Y){
					GameOver();
				}
			}
			if (penguin3X < backGround8X + 142 && backGround8X< penguin3X + 45){
				if (backGround8Y + 65>penguin3Y){
					GameOver();
				}
			}
			if (penguin4X < backGround8X + 142 && backGround8X< penguin4X + 45){
				if (backGround8Y + 65>penguin4Y){
					GameOver();
				}
			}
			if (penguin5X < backGround8X + 142 && backGround8X< penguin5X + 45){
				if (backGround8Y + 65>penguin5Y){
					GameOver();
				}
			}
			if (penguin6X < backGround8X + 142 && backGround8X< penguin6X + 45){
				if (backGround8Y + 65>penguin6Y){
					GameOver();
				}
			}
			if (penguin7X < backGround8X + 142 && backGround8X< penguin7X + 45){
				if (backGround8Y + 65>penguin7Y){
					GameOver();
				}
			}
			if (penguin8X < backGround8X + 142 && backGround8X< penguin8X + 45){
				if (backGround8Y + 65>penguin8Y){
					GameOver();
				}
			}
			if (penguin9X < backGround8X + 142 && backGround8X< penguin9X + 45){
				if (backGround8Y + 65>penguin9Y){
					GameOver();
				}
			}
			if (penguin10X < backGround8X + 142 && backGround8X< penguin10X + 45){
				if (backGround8Y + 65>penguin10Y){
					GameOver();
				}
			}
		
			break;
		case 4:
			if (bird1X < backGround8X + 142 && backGround8X< bird1X + 75){
				if (backGround8Y + 65>bird1Y&&bird1Y+48>backGround8Y){
					GameOver();
				}
			}
			if (bird2X < backGround8X + 142 && backGround8X< bird2X + 75){
				if (backGround8Y + 65>bird2Y&&bird2Y + 48>backGround8Y){
					GameOver();
				}
			}
			if (bird3X < backGround8X + 142 && backGround8X< bird3X + 75){
				if (backGround8Y + 65>bird3Y&&bird3Y + 48>backGround8Y){
					GameOver();
				}
			}
			if (bird4X < backGround8X + 142 && backGround8X< bird4X + 75){
				if (backGround8Y + 65>bird4Y&&bird4Y + 48>backGround8Y){
					GameOver();
				}
			}
			if (bird5X < backGround8X + 142 && backGround8X< bird5X + 75){
				if (backGround8Y + 65>bird5Y&&bird5Y + 48>backGround8Y){
					GameOver();
				}
			}
			if (bird6X < backGround8X + 142 && backGround8X< bird6X + 75){
				if (backGround8Y + 65>bird6Y&&bird6Y + 48>backGround8Y){
					GameOver();
				}
			}
			if (bird7X < backGround8X + 142 && backGround8X< bird7X + 75){
				if (backGround8Y + 65>bird7Y&&bird7Y + 48>backGround8Y){
					GameOver();
				}
			}
			if (bird8X < backGround8X + 142 && backGround8X< bird8X + 75){
				if (backGround8Y + 65>bird8Y&&bird8Y + 48>backGround8Y){
					GameOver();
				}
			}
			if (bird9X < backGround8X + 142 && backGround8X< bird9X + 75){
				if (backGround8Y + 65>bird9Y&&bird9Y + 48>backGround8Y){
					GameOver();
				}
			}
			if (bird10X < backGround8X + 142 && backGround8X< bird10X + 75){
				if (backGround8Y + 65>bird10Y&&bird10Y + 48>backGround8Y){
					GameOver();
				}
			}

			break;
		default:
			break;
		}
	

	}
}

private: System::Void game_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
	timer1->Stop();
	timerChangeDown->Stop();
	timerChangeUp->Stop();
	timerCrouch->Stop();
	timerPump->Stop();
	timerDino->Stop();
	timerScore->Stop();
}
};
}
