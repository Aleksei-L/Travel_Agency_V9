#include "MyString.h"
#define MAX_SIZE 256

// Конструктор по умолчанию
MyString::MyString() {
	/*
	len - длина массива = фактическое кол-во символов которое туда можно поместить включая \0
	cur - указывает на \0
	*/
	len = MAX_SIZE;
	cur = s = new char[len];
	*s = '\0';
}

// Конструктор копирования
MyString::MyString(const MyString& t) {
	s = new char[MAX_SIZE + t.len];
	*s = '\0';
	strcpy_s(s, strlen(t.s) + 1, t.s);
	cur = &s[strlen(t.s)];
	len = MAX_SIZE + t.len;
}

// Конструктор от строки
MyString::MyString(const char* t) {
	s = new char[MAX_SIZE + strlen(t)];
	*s = '\0';
	strcpy_s(s, strlen(t) + 1, t);
	cur = &s[strlen(t)];
	len = MAX_SIZE + strlen(t);
}

// Деструктор
MyString::~MyString() {
	delete[] s;
}

// Возвращает длину массива выделенного под строку
int MyString::length() {
	return len;
}

// Возвращает длину массива выделенного под строку
int MyString::length() const {
	return len;
}

// Создание копии объекта в динамической памяти
MyString* MyString::copy() {
	return new MyString(*this);
}

// Сравнение двух строк
int MyString::cmp(const MyString& t) const {
	return strcmp(s, t.s);
}

// Ввод строки
int MyString::input(std::istream& cin) {
	if (cin.eof())
		return 0;

	char buf[MAX_SIZE];

	cin.getline(buf, MAX_SIZE - 2, '\n');
	if (strlen(buf) == 0)
		cin.getline(buf, MAX_SIZE - 2, '\n');

	s = new char[MAX_SIZE + strlen(buf)];

	len = MAX_SIZE + strlen(buf);
	*s = '\0';
	strcpy_s(s, strlen(buf) + 1, buf);
	cur = &s[strlen(buf)];
	return 0;
}

// Вывод строки на экран
void MyString::output(std::ostream& cout)const {
	for (char* i = s; i < cur; i++)
		cout << *i;
}

// Возвращает истинный размер строки без учёта '\0'
int MyString::realSize() const {
	int count = 0;
	for (char* i = s; i != cur; i++)
		count++;
	return count;
}

// Перегрузка операторов

// Оператор присваивания
MyString& MyString::operator = (const MyString& t) {
	if (this == &t)
		return *this;
	delete[] s;
	s = new char[(len = t.len) + 1];
	strcpy_s(s, strlen(t.s) + 1, t.s);
	cur = &s[strlen(t.s)];
	return *this;
}

// Оператор преобразования типа из MyString в char *
MyString::operator char* () {
	/*
	Не указывается возвращаемое значение
	Имя совпадает с именем типа
	Отсутствуют аргументы
	Создание копии оставляет s доступным только через интерфейс класса
	*/
	char* p = new char[len + 1];
	strcpy_s(p, strlen(s) + 1, s);
	return p;
}

// Оператор индексирования символов
char& MyString::operator [] (int i) {
	if (i >= 0 && i < realSize())
		return s[i];
	std::cout << "Index error" << std::endl;
	exit(1);
}

// Оператор добавления в конец
MyString& MyString::operator += (const MyString& t) {
	char* p = new char[len = (len + t.len) + 1];
	int size = realSize();
	strcpy_s(p, strlen(s) + 1, s);
	strcat(p, t.s);
	delete[] s;
	s = p;
	cur = &s[size + strlen(t.s)];
	return *this;
}

// Оператор проверки на равенство
int operator == (const MyString& a, const MyString& b) {
	return !a.cmp(b);
}

// Оператор проверки на неравенство
int operator != (const MyString& a, const MyString& b) {
	if (a.cmp(b) != 0)
		return 1;
	return 0;
}

// Оператор проверки на меньшесть
int operator < (const MyString& a, const MyString& b) {
	return a.cmp(b) < 0;
}

// Оператор проверки на меньшесть либо равенство
int operator <= (const MyString& a, const MyString& b) {
	return a.cmp(b) <= 0;
}

// Оператор проверки на большесть
int operator > (const MyString& a, const MyString& b) {
	return a.cmp(b) > 0;
}

// Оператор проверки на большесть либо равенство
int operator >= (const MyString& a, const MyString& b) {
	return a.cmp(b) >= 0;
}

// Оператор соединения
MyString operator + (const MyString& a, const MyString& b) {
	MyString tmp(a);
	tmp += b;
	return tmp;
}

// Оператор вывода (заменяет output())
std::ostream& operator << (std::ostream& os, const MyString& ms) {
	ms.output(os);
	return os;
}

// Оператор ввода (заменяет input())
std::istream& operator >> (std::istream& is, MyString& ms) {
	ms.input(is);
	return is;
}
