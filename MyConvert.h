#pragma once
using namespace System;
using namespace System::Windows::Forms;
using namespace cli;

class MyConvert {
public:
	MyConvert(void);
	~MyConvert(void);
	static void ToArray(wchar_t* m, int size, String^ s);
	static void ToArrayASCII(char* m, int size, String^ s);
	static char* ToStringASCII(String^ S);
};
