#include<iostream>
#include<string>
using namespace std;

class GiaoVien {
private:
	string hoTen;
	float mucLuong;
	int soNgayNghi;
public:
	GiaoVien();
	GiaoVien(string ht);
	GiaoVien(float ml);
	GiaoVien(float ml, int snn);
	GiaoVien(string ht, float ml, int snn);
	GiaoVien(const GiaoVien& gv);
	~GiaoVien();
	void Xuat();
};

GiaoVien::GiaoVien() {
	cout << "GiaoVien: Default constructor" << endl;
}
GiaoVien::GiaoVien(string ht) {
	cout << "GiaoVien: 1-parameter string" << endl;
}
GiaoVien::GiaoVien(float ml) {
	cout << "GiaoVine: 1-parameter float" << endl;
}
GiaoVien::GiaoVien(float ml, int snn) {
	cout << "GiaoVien: 2-parameter float, int" << endl;
}
GiaoVien::GiaoVien(string ht, float ml, int snn) {
	cout << "GiaVien: 3-parameter" << endl;
}
GiaoVien::GiaoVien(const GiaoVien& gv) {
	cout << "GiaoVien: copy constructor" << endl;
}

GiaoVien::~GiaoVien() {
	cout << "GiaoVien: Destructor" << endl;
}

void GiaoVien::Xuat() {
	cout << "Giao vien: Xuat" << endl;
}

class GVCN :public GiaoVien {
private:
	string lopCN;
public:
	GVCN();
	GVCN(string ht);
	GVCN(float ml);
	GVCN(float ml, int snn);
	GVCN(string ht, float ml, int snn);
	GVCN(string ht, float ml, int snn, string lopCN);
	GVCN(const GVCN& GV);
	~GVCN();
	void Xuat();
};

GVCN::GVCN() {
	cout << "GVCN: Default constructor" << endl;
}
GVCN::GVCN(string ht) {
	cout << "GVCN: 1-parameter string" << endl;
}
GVCN::GVCN(float ml) {
	cout << "GVCN: 1-parameter float" << endl;
}
GVCN::GVCN(float ml, int snn) {
	cout << "GVCN: 2-parameter float, int" << endl;
}
GVCN::GVCN(string ht, float ml, int snn) {
	cout << "GVCN: 3-parameter" << endl;
}
GVCN::GVCN(string ht, float ml, int snn, string lopCN) {
	cout << "GVCN: 4-parameter" << endl;
}
GVCN::GVCN(const GVCN& gv) {
	cout << "GVCN: copy constructor" << endl;
}

GVCN::~GVCN() {
	cout << "GVCN: Destructor" << endl;
}

void GVCN::Xuat() {
	cout << "GVCN: Xuat" << endl;
}

int main() {
	GVCN gv("tRUONG tIEN aNH", 1000, 2);

}