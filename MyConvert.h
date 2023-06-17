#pragma once
using namespace System;
using namespace System::Windows::Forms;
using namespace cli;

class MyConvert {
public:
	MyConvert();
	~MyConvert();
	static void copyto(ListViewItem^, array<TextBox^>^, int);
	static void copyto(array<TextBox^>^, ListViewItem^, int);
	static void copyto(array<TextBox^>^, array<String^ >^, int);
	static void copyto(array<TextBox^>^, String^, int);
	static void copyto(array<String^ >^, array<TextBox^>^, int);
};
