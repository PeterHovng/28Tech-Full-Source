#include<iostream>
#include<string>
using namespace std;
//void f() {
//	try {
//		throw 'x';
//	}
//	catch (int i) {
//		cout << "Throw int" << endl;
//	}
//	catch (double x) {
//		cout << "Throw double" << endl;
//	}
//	catch (...) {
//		cout << "Throw c" << endl;
//	}
//}
//
//void f1() {
//	throw 'x';
//}

//-----------------------------------

class MyException {
private:
	string message;
public:
	MyException() {};
	MyException(string _message) :message(_message) {};
	string getMessage() {
		return message;
	}
};

class Base {
private:
	string message;
public:
	Base() {};
	Base(string _message) :message(_message) {};
	string getMessage() {
		return message;
	}
};

class Drived :public Base {
public:
	Drived() : Base() {};
	Drived(string _message) : Base(_message) {};
};

//-----------------------------------

void f2(int test) throw(int, char, double, string)
{
	if (test == 1) {
		throw test;
	}
	if (test == 2) {
		throw 'x';
	}
	if (test == 3) {
		throw 3.14;
	}
	if (test == 4) {
		throw "abc";
	}
	if (test == 5) {
		throw string("Tien Anh");
	}
}

//-----------------------------------
void t() {
	throw 3.14;
}

void g() {
	try {
		t();
	}
	catch (double x) {
		cout << "Catch double o ham g()" << endl;
		throw;
	}
}

//-----------------------------------
//Van de ro ri boi nho
void test1(int t, int a, int b) {
	int* p;
	p = new int[t];
	if (a == b) {
		delete[]p;
		throw "error";
	}
	delete[]p;
}
//-----------------------------------

int main() {
	int x;
	int y;

	//----- Throw ham -----
	//try {
	//	cout << "Nha x va y: ";
	//	cin >> x >> y;
	//	if (y == 0) {
	//		throw 3;
	//	}
	//	cout << "x/y: " << x << "/" << y << endl;
	//}
	//catch (int i) {
	//	cout << "So chia = 0" << endl;
	//}
	/*f();

	try {
		f1();
	}
	catch (char c) {
		cout << "Throw char" << endl;
	}*/

	//-----------------------------------
	//----- Throw class -----
	//try {
	//	cout << "Nhap x va y: ";
	//	cin >> x >> y;
	//	if (y == 0) {
	//		throw MyException("Devided by zero");
	//	}
	//	cout << "x/y: " << x << "/" << y << endl;
	//}
	//catch (MyException& ex) {
	//	cout << ex.getMessage() << endl;
	//}
	//try {
	//	Drived d;
	//	throw d;
	//}
	//catch (Base& b) {// Dat thang nay sau Throw Drived moi chinh xac
	//	cout << "Throw Base" << endl;
	//}
	//catch (Drived& d) {
	//	cout << "Throw Drived" << endl;
	//}

	//-----------------------------------

	try {
		f2(5);
	}
	catch (int i) {
		cout << "Throw int" << endl;
	}
	catch (double x) {
		cout << "Throw double" << endl;
	}
	catch (const char* s) {//NOTE -> HIHI
		cout << "Throw char *: " << s << endl;
	}
	catch (char x) {
		cout << "Throw char" << endl;
	}
	catch (string s) {
		cout << "Throw string: " << s << endl;
	}

	//-----------------------------------
	try
	{
		g();
	}
	catch (double)
	{
		cout << "Catch double o ham main()" << endl;
	}
}
