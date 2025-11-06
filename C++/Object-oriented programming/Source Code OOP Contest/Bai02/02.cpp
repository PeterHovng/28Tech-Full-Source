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
	friend istream& operator >> (istream& in, PhanSo& p);
	friend ostream& operator << (ostream& out, PhanSo& p);
	friend PhanSo operator + (PhanSo &a, PhanSo& b);

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

PhanSo operator + (PhanSo& a, PhanSo& b)
{
	PhanSo tong;
	tong._tu = a._tu * b._mau + b._tu * a._mau;
	tong._mau = a._mau * b._mau;
	return tong;
}

int main()
{
	PhanSo p(1, 1), q(1, 1);
	cin >> p >> q;
	PhanSo tong;
	tong = p + q;
	cout << tong;

}