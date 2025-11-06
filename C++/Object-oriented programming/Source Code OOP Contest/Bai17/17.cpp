#include<iostream>
#include<string>
#include<vector>
using namespace std;

//----- Static Singleton -----
class Singleton {
private:
	int x;
	static int objCount;
	static Singleton* instance;
	Singleton() {
		objCount++;
		x = 0;
	}
	Singleton(int u) {
		objCount++;
		x = u;
	}
	Singleton(int u, int v) {
		objCount++;
		x = (u + v) / 2;
	}
public:
	static Singleton* getInstance() {
		if (instance == nullptr) {
			instance = new Singleton();
		}
		return instance;
	}

	void print() {
		cout << "Singleton: " << x << endl;
	}
	static int getObjCount() {
		return objCount;
	}

};

//Khoi tao Singleton ban dau bang nullptr
int Singleton::objCount = 0;
Singleton* Singleton::instance = nullptr;

int main() {
	Singleton* s1 = Singleton::getInstance();
	Singleton* s2 = Singleton::getInstance();
	Singleton* s3 = Singleton::getInstance();
	Singleton* s4 = Singleton::getInstance();
	s1->print();
	s2->print();
	s3->print();
	s4->print();

	cout << "Obj count: " << Singleton::getObjCount() << endl;
	return 0;
}