// final project.cpp: 主要專案檔。

#include "stdafx.h"
#include "MyForm.h"


using namespace System;
using namespace finalproject;

int main(array<System::String ^> ^args)
{
	MyForm^ myform = gcnew MyForm;
	myform->ShowDialog();			//顯示 window form
    return 0;
}
