#pragma once
#include "Client.h"

class Vector {
private:
	T* v; // ������ ��� �������� �������� ������� (��� ������)
	int size; // ������ �������
public:
	Vector();
	Vector(int sz);
	Vector(const Vector&);
	~Vector();
	T* begin() const;
	T* end() const;
	int getSize();
	T& item(int);
	void resize(int);
	// ���������� ����������
	T& operator [] (int);
};
