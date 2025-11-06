#include<iostream>
#include<math.h>
#include<string>
using namespace std;

class MyString {
private:
	char* pString;
	int count;
public:
	MyString() {};
	MyString(char* _pString, int _count) : pString(_pString), count(_count)  {};

	void input();
	bool operator == (MyString& other);
	MyString& operator +=(MyString& other);
	MyString& operator = (MyString& other);
	//MyString& operator + (const MyString& a);
	friend ostream& operator << (ostream &out, MyString& other);
	friend istream& operator >> (istream& in, MyString& other);
	friend bool operator < (MyString& a, MyString& b);

};

//MyString& MyString::operator + (const MyString& a) {
//	MyString kq;
//	for (int i = 0; i < strlen(a.pString); i++) {
//		kq.pString[i] = a.pString[i];
//	}
//	return kq;
//}

bool operator < (MyString& a, MyString& b) {
	return strcmp(a.pString, b.pString) < 0;
}

bool MyString::operator == (MyString& other) {
	return strcmp(pString , other.pString) == 0;
}

//MyString& MyString::operator +=(MyString& other) {
//	int lengh1 = strlen(this->pString);
//	int lengh2 = strlen(other.pString);
//
//	char* result = new char[lengh1 + lengh2 + 1];
//
//	for (int i = 0; i < lengh1; i++) {
//		result[i] = this->pString[i];
//	}
//
//	for (int i = 0; i < lengh2; i++) {
//		result[i + lengh1] = other.pString[i];
//	}
//	result[lengh1 + lengh2] = '\0';
//
//	delete []pString;
//
//	pString = result;
//
//	return *this;
//}
MyString& MyString::operator = (MyString& other) {
	if (this != &other) {
		if (pString != NULL) {
			delete[]pString;
		}
		int lengh = strlen(other.pString);
		for (int i = 0; i < lengh; i++) {
			pString[i] = other.pString[i];
		}
		pString[lengh] = '\0';
	}
	return *this;
}

ostream& operator << (ostream &out, MyString& other) {
	int lengh = strlen(other.pString);
	for (int i = 0; i < lengh; i++) {
		cout << other.pString[i];
	}
	return out;
}

istream& operator >> (istream& in, MyString& other) {
	char* buffer = new char[1000];
	cin.getline(buffer, 1000);

	other.pString = new char[strlen(buffer) + 1];
	strcpy_s(other.pString, strlen(buffer) + 1, buffer);
	return in;
}

void MyString::input() {
	char* buffer = new char[1000];
	cin.getline(buffer, 1000);

	delete[]pString;
	pString = new char[strlen(buffer) + 1];
	strcpy_s(pString, strlen(buffer) + 1, buffer);
}

int main() {
	MyString a, b, c;
	cout << "Nhap A: "; cin >> a;
	cout << "Nhap B: "; cin >> b;

	cout << "A: " << a << endl;
	cout << "B: " << b << endl;

	a += b;
	cout << "A+B: " << a << endl;

	if (a == b) {
		cout << "A=B" << endl;
	}
	else {
		cout << "A!=B" << endl;
	}

	a = b;
	cout << "A: " << a << endl;
	cout << "B: " << b << endl;

	if (a < b) {
		cout << "A<B" << endl;
	}
	else
	{
		cout << "A>B" << endl;
	}
	return 0;
}