#include<iostream>
using namespace std;

class A {
public:
	void xuat() {
		cout << "Xin chao" << endl;
	}
};

class B :public A {
public:
	void xuat() {
		cout << "Toi la con cac" << endl;
	}
};

int main() {
	A *a = new B();
	a->xuat();

	B b;
	b.xuat();
}