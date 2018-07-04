namespace finalproject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for EndingForm
	/// </summary>
	/*public ref class PictureObject {
		private: PictureBox^ mPictureBox;
		private: int mPoint_x;
		private: int mPoint_y;
		private: int mHeight;
		private: int mWidth;
		public: PictureObject();
		public: PictureObject(PictureBox^ pictureBox) {
			mPictureBox = pictureBox;
			Point^ point = mPictureBox->Location;
			mPoint_x = point->X;
			mPoint_y = point->Y;
			Size^ size = mPictureBox->Size;
			mHeight = size->Height;
			mWidth = size->Width;
		}
	};
	*/
	public ref class Dinosaur {
	private: PictureBox^ mDinoPicture;
	private: int mPoint_x;
	private: int mPoint_y;
	private: int mHeight;
	private: int mWidth;
	private: bool mStepping;
	public: Dinosaur(PictureBox^ dino_pic) {
		mDinoPicture = dino_pic;
		Point^ point = mDinoPicture->Location;
		mPoint_y = point->Y;
		Size^ size = mDinoPicture->Size;
		mHeight = size->Height;
		mWidth = size->Width;
		mPoint_x = -mWidth;
		mDinoPicture->Location = Point(mPoint_x, mPoint_y);
		mStepping = true;

	}
	public: void SetParentPic(PictureBox^ ppictureBox) {
		mDinoPicture->Parent = ppictureBox;
		mDinoPicture->BackColor = Color::Transparent;
	}
	public: void RightMoving() {
		mPoint_x+=10;
		if (mStepping) {
			mDinoPicture->Image = Image::FromFile(L"res/dino1.png");
			mStepping = false;
		}
		else {
			mDinoPicture->Image = Image::FromFile(L"res/dino2.png");
			mStepping = true;
		}
		mDinoPicture->Location = Point(mPoint_x, mPoint_y);
	}
	public: void LeftMoving() {
		mPoint_x-=10;
		if (mStepping) {
			mDinoPicture->Image = Image::FromFile(L"res/dino3.png");
			mStepping = false;
		}
		else {
			mDinoPicture->Image = Image::FromFile(L"res/dino4.png");
			mStepping = true;
		}
		mDinoPicture->Location = Point(mPoint_x, mPoint_y);
	}
	public: void Jump(int displacement) {
		mDinoPicture->Location = Point(mPoint_x, mPoint_y - displacement);
	}
	};
	public ref class Character {
	private: PictureBox^ mPictureBox;
	private: const static int Top = 0;
	private: const static int Bottom = 300;
	private: bool mDownward;
	public: int mPoint_x;
	public: int mPoint_y;
	private: int mHeight;
	private: int displacement;

	public: Character(PictureBox^ picturebox) {
		mDownward = true;
		mPictureBox = picturebox;
		mPictureBox->Visible = false;
		System::Drawing::Point^ point = picturebox->Location;
		mPoint_x = point->X;
		mPoint_y = point->Y;
		System::Drawing::Size^ size = picturebox->Size;
		mHeight = size->Height;
		displacement = Displacement_Cal();
	}
	public: void GrowingUp() {
		mPoint_y -= 1;
		mPictureBox->Location = System::Drawing::Point(mPoint_x, mPoint_y);
	}
	public: void GrowingDown() {
		mPoint_y += 1;
		mPictureBox->Location = System::Drawing::Point(mPoint_x, mPoint_y);
	}
	public: void Visiable() {
		mPictureBox->Visible = true;
	}
	private: int Displacement_Cal() {
		int value = Bottom - Top - mHeight;
		return value / 10;
	}
	public: void Moving() {
		if (mDownward) {
			GrowingDown();
			if (mPoint_y + mHeight == Bottom) {
				mDownward = false;
			}
		}
		else {
			GrowingUp();
			if (mPoint_y == Top) {
				mDownward = true;
			}
		}

	}
	};
}