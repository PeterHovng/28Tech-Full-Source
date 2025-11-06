#include<iostream>
#include<math.h>
#include<string>
#include<iomanip>
#include<sstream>
#include<algorithm>
using namespace std;

class PhanSo
{
private:
	int _tu;
	int _mau;
public:
	PhanSo() {};
	PhanSo(int tu, int mau) {
		_tu = tu;
		_mau = mau;
	}
	void rugon();
	friend istream& operator >> (istream& in, PhanSo &p);
	friend ostream& operator << (ostream& out, PhanSo& p);
};

istream& operator >> (istream& in, PhanSo& p)
{
	cout << "Tu: "; in >> p._tu;
	cout << "Mau: "; in >> p._mau;
	return in;
}

ostream& operator << (ostream& out, PhanSo& p)
{
	cout << "Phan so: ";
	out << p._tu << "/" << p._mau << endl;
	return out;
}

int gcd(int a, int b)
{
	if (b == 0)
		return a;
	return gcd(b, a % b);
}

void PhanSo::rugon()
{
	int ucln = gcd(_tu, _mau);
	_tu = _tu / ucln;
	_mau = _mau / ucln;
}


int main()
{
	PhanSo p(1, 1);
	cin >> p;
	p.rugon();
	cout << p;
}