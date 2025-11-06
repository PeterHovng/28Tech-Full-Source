#include<iostream>
#include<string>

using namespace std;

class A {
private:
	char* m_s;
public:
	A() { m_s = _strdup("default"); }
	A(const char* s) { m_s = _strdup(s); }
	virtual void prepare() { cout << "A "; }
	virtual ~A() {
		if(m_s!=nullptr)
			delete [] m_s;
		cout << "Destructor A" << endl;
	}
	void display() {
		prepare();
		cout << m_s << endl;
	}
	friend istream& operator >> (istream& in, A& a);
};

istream& operator >> (istream& in, A& a) {
	char* buffer = new char[1000];
	if (a.m_s != nullptr)
		delete a.m_s;
	a.m_s = new char[strlen(buffer) + 1];
	strcpy_s(a.m_s, strlen(buffer) + 1, buffer);
	return in;
}

class B : public A {
public:
	B() {};
	B(const char* s) : A(s) { };
	B(const B& b){ };
	~B() {
		cout << "Destructor B" << endl;
	};
	void prepare() { cout << "B "; }
};

void foo(A* obj1, A obj2) {
	obj1->display();
	obj2.display();
}

void main() {
	B obj1("text");
	A* obj2 = new B(obj1);
	foo(&obj1, *obj2);
	delete obj2;
}

//b. Ham chua giai phong vung nho sau khi cap phat cho con doi tuon obj2