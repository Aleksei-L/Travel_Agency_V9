#include "Vector.h"

// ����������� �� ���������
Vector::Vector() {
	v = new T[size = 10];
}

// ����������� � ���������� �������� �������
Vector::Vector(int sz) {
	v = new T[size = sz];
}

// ����������� �����������
Vector::Vector(const Vector& l) {
	v = new T[size = l.size];
	for (int i = 0; i < size; i++)
		v[i] = l.v[i];
}

// ���������� �������
Vector::~Vector() {
	delete[] v;
}

// ���������� ��������� �� ������ �������
T* Vector::begin() const {
	return v;
}

// ���������� ��������� �� ����� �������
T* Vector::end() const {
	return v + size;
}

// ���������� ������ �������
int Vector::getSize() {
	return size;
}

// ��������� �������� �� �������
T& Vector::item(int it) {
	if (it < 0 || it > size) {
		std::cout << "Index error" << std::endl;
		exit(1);
	}
	return v[it];
}

// ��������� ������� �������
void Vector::resize(int n) {
	if (n < size) {
		std::cout << "Resize error in Vector class" << std::endl;
		return;
	}
	T* t = new T[n];
	for (int i = 0; i < size; i++)
		t[i] = v[i];
	delete[] v;
	v = t;
	size = n;
}

// ���������� ����������
T& Vector::operator [] (int i) {
	if (i >= 0 && i < size)
		return v[i];
	std::cout << "Index error" << std::endl;
	exit(1);
}
