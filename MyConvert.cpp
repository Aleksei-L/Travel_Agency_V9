#include "MyConvert.h"

MyConvert::MyConvert() {
}

MyConvert::~MyConvert() {
}

void MyConvert::copyto(ListViewItem^ l, array<TextBox^>^ t, int count) {
	for (int i = 0; i < count; i++)
		l->SubItems[i]->Text = t[i]->Text;
}

void MyConvert::copyto(array<TextBox^>^ t, ListViewItem^ l, int count) {
	for (int i = 0; i < count; i++)
		t[i]->Text = l->SubItems[i]->Text;
}

void MyConvert::copyto(array<TextBox^>^ t, array<String^ >^ s, int count) {
	for (int i = 0; i < count; i++)
		t[i]->Text = s[i];
}

void MyConvert::copyto(array<TextBox^>^ t, String^ s, int count) {
	for (int i = 0; i < count; i++)
		t[i]->Text = s;
}

void MyConvert::copyto(array<String^ >^ s, array<TextBox^>^ t, int count) {
	for (int i = 0; i < count; i++)
		s[i] = t[i]->Text;
}
