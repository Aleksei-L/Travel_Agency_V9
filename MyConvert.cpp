#include "MyConvert.h"

MyConvert::MyConvert(void) {
}

MyConvert::~MyConvert(void) {
}

void MyConvert::ToArray(wchar_t* m, int size, String^ s) {
	wchar_t c;
	int n;
	for (n = 0; n < size - 1 && n < s->Length; n++) {
		//c = s->Chars[n];
		c = s[n];
		m[n] = c;
	}
	m[n] = '\0';
}

void MyConvert::ToArrayASCII(char* m, int size, String^ s) {
	int i, dt;
	char A = 'À', a = 'à';
	wchar_t t, t1 = L'à', t2 = L'ÿ';
	for (i = 0; i < size - 1 && i < s->Length; i++) {
		//t = s->Chars[i];
		t = s[i];
		if (t < 128)
			//m[i] = Convert::ToByte(s->Chars[i]);
			m[i] = Convert::ToByte(s[i]);
		else {
			a = 'à';
			if (Char::IsUpper(t))
				a = A;
			t = Char::ToLower(t);
			if (t >= t1 && t <= t2) {
				dt = t - t1;
				m[i] = dt + a;
			}
		}
	}
	m[i] = '\0';
}

char* MyConvert::ToStringASCII(String^ S) {
	char* str = new char[S->Length + 1];
	if (!str)
		return 0;
	ToArrayASCII(str, S->Length + 1, S);
	return str;
}
