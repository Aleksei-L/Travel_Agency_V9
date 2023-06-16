#pragma once
#include <iostream>
#include <string.h>

class MyString {
private:
	char* s; // Указатель на строку
	char* cur; // Указатель на первый свободный элемент
	int len; // Длина строки
	int realSize() const;
public:
	MyString();
	MyString(const MyString& t);
	MyString(const char* t);
	~MyString();
	int length();
	int length() const;
	MyString* copy();
	int cmp(const MyString& t) const;
	int input(std::istream& cin);
	void output(std::ostream& cout) const;
	// Перегрузка операторов
	MyString& operator = (const MyString&);
	operator char* ();
	char& operator [] (int i);
	MyString& operator += (const MyString&);
	friend int operator == (const MyString&, const MyString&);
	friend int operator != (const MyString&, const MyString&);
	friend int operator <(const MyString&, const MyString&);
	friend int operator <= (const MyString&, const MyString&);
	friend int operator > (const MyString&, const MyString&);
	friend int operator >= (const MyString&, const MyString&);
	friend MyString operator + (const MyString&, const MyString&);
	friend std::ostream& operator << (std::ostream&, const MyString&);
	friend std::istream& operator >> (std::istream&, MyString&);
};
