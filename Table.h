#pragma once
#include "Vector.h"

//typedef Record* T;
//typedef T* Iterator;
//class Tabl {
//	vec v;
//	Iterator cur;
//public:
//	Tabl(void);
//	Tabl(int size);
//	Tabl(const Iterator& first, const Iterator& last);
//	~Tabl();
//	int  get_length();
//	T& get_item(int i);
//	int IsEmpty();
//	Iterator begin();
//	Iterator end();
//	Iterator insert(const T& item);
//	Iterator erase(const Iterator& first, const Iterator& last);
//	Iterator erase(const Iterator& pos);
//	void clear();
//	// более эффективная по сравнению с  соответствующими алгоритмами
//	//реализация удаления
//	int remove(const T& item);
//	int remove(const Predicate& pred);
//};


class Table {
private:
	Vector v; // Таблица клиентов
	T buf; // Буфер для промежуточного хранения клиента
	T* current; // Указатель на первый свободный в таблице
public:
	Table();
	Table(int s, T b);
	~Table();
	T* begin() const;
	T* end() const;
	int length();
	int getSize();
	T* erase(T* pos);
	void clear();
	void resize(int plusSize);
	T* insert(const T& newClient);
	int input(std::istream& cin);
	void output(std::ostream& cout) const;
	void sort();
	int search(const T& tempClient);
	int replace(const T& oldClient, const T& newClient);
	int remove(const T& badClient);
	/*void output(ListView* list, Table* t);*/
	// Перегрузка операторов
	friend std::ostream& operator << (std::ostream& os, const Table& r);
	friend std::istream& operator >> (std::istream& is, Table& r);
};
