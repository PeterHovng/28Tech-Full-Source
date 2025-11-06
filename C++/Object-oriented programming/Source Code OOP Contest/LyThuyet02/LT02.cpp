#include<iostream>
#include<math.h>
#include<string>
#include<sstream>
#include<algorithm>
using namespace std;

//-------------------------------------------------------------
//I. Cac khai niem co ban trong OOP
/*
 1. Bien static trong class
  - Doi khi ta muon 1 thuoc tinh nao do duoc dung chung cho all doi tuong (chi duoc
	cap phat 1 vung nho duy nhat). Tu do khai niem Static ra doi.

  - Dac diem cua static:
	+ Duoc khoi tao 1 lan duy nhat ngay khi bien dich truong trinh.
	+ Co the dung chung cho moi doi tuong.
	+ Duoc goi thong qua ten lop
	+ Duoc huy khi ket thuc chuong trinh.
  - 4 loai Static:
	+ Bien tinh (Static variable)
	+ Phuong thuc tinh (Static method)
	+ Lop tinh (Static class)
	+ Phuong thuc khoi tao tinh (Static constructor)

 2. Friend function, friend class
	- Gia su co 2 class la MyClass1, MyClass2:
	+ Friend function: Giai quyet van de truy cap thanh phan Private hoac Protected cua 2 class tren trong 1 ham khac khong
	  phai thanh phan cua 2 class do (VD: minh muon viet 1 cai ham de chuan hoa thong tin trong class thi sd phuong thuc nay rat tien)
	+ Friend class: Truy cap thanh phan private hoac protected cua MyClass1 tu thanh phan cua class myClass2
*/

class GiaoVien;
class SinhVien;

class SinhVien
{
private:
	string id, name, date;
	double gpa;
	static int dem;//Minh khong the gam dem=0 duoc
public:
	void tangDem();
	int getDem();
	void input();
	void output();

	//2. Friend function
	friend void displayInfor(SinhVien);
	friend void chuanHoaThongTin(SinhVien&);

	//2.1 Friend class
	friend class GiaVien;//=> cac ham cua class GiaVien co the truy cap vao class SinhVien
};

class GiaoVien
{
private:
	string khoa;
public:
	void update(SinhVien&);
};

//1. Static
//Ta phai khai bao dem nhu nay
int SinhVien::dem = 0;

void SinhVien::tangDem()
{
	++dem;
}

int SinhVien::getDem()
{
	return dem;
}

//Su dung bien static de nhap ID tu dong cho sinh vien
void SinhVien::input()
{
	++dem;
	id = string(3 - to_string(dem).length(), '0') + to_string(dem);// MSSV gom 3 so nen ta se chem them nhung so 0 vao dau cho du
	cout << "Nhap ten: "; getline(cin, name);
	cout << "Nhap nam sinh: "; cin >> date;
	cout << "Nhap diem: "; cin >> gpa;
	cin.ignore();
}

void SinhVien::output()
{
	cout << "ID: " << id << endl;
	cout << "Name: " << name << endl;
	cout << "Date: " << date << endl;
	cout << "GPA: " << gpa << endl;
}

//2. Friend Function (No khong phai member cua cai class hien tai nhung lai co the truy cap vao thuoc tinh cua class chi dinh) 
void displayInfor(SinhVien a)
{
	cout << a.id << " " << a.name << endl;
	//=> Sau khi khi bao ham displayInfor la ham ban cua lop SinhVien thi
	//gio no co the truy cap vao thuoc tinh private cua class SinhVien
}
void chuanHoaThongTin(SinhVien& a)
{
	string res = "";
	stringstream ss(a.name);
	string token;
	while (ss >> token)
	{
		res += toupper(token[0]);
		for (int i = 1; i < token.length(); i++)
		{
			res += tolower(token[i]);
		}
		res += " ";
	}
	res.erase(res.length() - 1);//Xoa ky tu trang " " cuoi cung
	a.name = res;
	//=>Ham chuan hoa nay co chuc nang truy cap truc tiep name cua class SinhVien
	// de thay doi thuoc tinh do theo yeu cau bai toan
}

//2.1 Friend class
//void GiaoVien::update(SinhVien& a)
//{
//	a.gpa = 3.2;//=> Toi day dang can lam nha
//}

int main()
{
	////1. Static dung cho nhieu doi tuong
	//SinhVien x;
	//x.tangDem();//dem=1
	//x.tangDem();//dem=2
	//SinhVien y;// bien dem se duoc dung chung cho moi doi tuong cho ca x, y, z...vv
	//cout << y.getDem() << endl;//output: 2
	//SinhVien z;
	//z.tangDem();
	//cout << z.getDem() << endl;

	////1.1. Dung Static de nhap ID cho sinh vien
	//SinhVien a;
	//a.input();
	//a.output();

	//SinhVien b;
	//b.input();
	//b.output();
	////=> ID cua sinhv ien se duoc tu dong nhap theo bien dem

	//2.2 su dung Friend class de truy cap vao class
	SinhVien c;
	c.input();
	chuanHoaThongTin(c);
	c.output();
}