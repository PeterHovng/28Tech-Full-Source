#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
//-------------------------------------------------------------
//I. Cac khai niem co ban trong OOP

/*Cac khai niem co ban
 1. class: lop

 2. thuoc tinh: attribute

 3. Phuong thuc: method, behavior

 4. object: doi tuong

 5. Tinh chat cua OOP
	a. Tinh dong goi (Encapsulation)
	b. Access modifier:
	  + private
	  + public
	  + protected

 6. Constructor: Ham khoi tao
  + Ham se duoc khoi tao moi khi ta khai bao mot SinhVien moi,
	ham nay cung ten voi ten class va khong co kieu tra ve
  + Neu ta khong xay dung ham constructor SinhVien() trong class SinhVien,
	thi mac dinh no van co, vi moi khi ta tao 1 "SinhVien sv" trong ham main(),
	thi no mac dinh do la 1 constructor. vay nen ta khong xay dung cung duoc hoac co the tu xay dung cho minh

 7. Destructor: Ham huy di 1 doi tuong
  + Ten ham trung ten voi class va khong co kieu tra ve
  + Khac voi Constructor thi Destructor se co them 1 dau "~" dang truoc ten ham
  + Ham duoc goi trong nhung truong hop:
	- Chay het chuong trinh
	- Co 1 ham nao do minh xay dung doi tuong sinh vien va ham do ket thuc
	- 1 doi tuong trong 1 pham vi {} ket thuc
	- ...vv

	NOTE: Ham Constructor(), Destructor() se duoc goi mac dinh hoac minh co the tu tao
	cac ham nay theo y muon (VD nhu ham co doi so truyen vao...)

 8. this pointer
  + Trong C++ viec dung con tro this khong can thiet cung duoc, nhung trong
	mot so truong hop dung this de code de hieu va de doc hon

 9. setter & getter
  + Hoi truoc ta co hoc ve comparator (VD: bool cmp(string a, string b) return a>b)
	nhung doi voi OOP thi viec truy cap truoc tiep nhu vay la khong duoc
	(VD: bool cmp(SinhVien a, SinhVien b) return a.gpa > b.gpa => deo duoc nha con)
	=> do do minh can phai tuy cap vao thuoc tinh private thong qua nhung ham truy cap
	do la ly do getter va setter ra doi

*/

class SinhVien
{
private:
	// Neu khong khai bao public ma chi khai bao moi may cai thuoc
	//tinh nay thi no mac dinh se la private
	string id, name, date;
	double gpa;
public:
	//Ham xu ly thuoc tinh
	void TinhGPA();
	void chieuCao();
	void input();
	void output();

	//Getter & setter
	double getGPA();
	string getID();

	double setGPA(double s);
	string setName(string s);

	//Constructor
	SinhVien();
	SinhVien(string, string, string, double);//constructor co the nhan 4 thuoc tinh cua class SinhVien()

	//Destructor: Ham huy
	~SinhVien();
};

//Cac phuong thuc truy cap
void SinhVien::TinhGPA()// Truyen toan tu pham vi "::" -> ta dang xay dung ham TinhGPA cua lop SinhVien
{
	cout << "GPA" << endl;
}

void SinhVien::chieuCao()
{
	cout << "Chieu cao" << endl;
}

//Constructor
SinhVien::SinhVien()
{
	cout << "Ham khoi tao duoc goi" << endl;
}

SinhVien::SinhVien(string maSv, string tenSv, string ngaySinh, double diemTB)
{
	cout << "Ham khoi tao co tham so duoc goi" << endl;
	id = maSv;
	name = tenSv;
	date = ngaySinh;
	gpa = diemTB;
	cout << "ID: " << id << endl;
	cout << "Name: " << name << endl;
	cout << "Date: " << date << endl;
	cout << "GPA: " << gpa << endl;
}

//Destructor 
SinhVien::~SinhVien()
{
	cout << "Doi tuong duoc huy tai day" << endl;
}

void hihi()
{
	SinhVien x;
	cout << "Tao da o day" << endl;
}

//Nhap xuat trong OOP
void SinhVien::input()
{
	cout << "Nhap ID: "; cin >> id;
	cin.ignore();
	cout << "Nhap ten: "; cin >> name;
	cout << "Nhap nam sinh: "; cin >> date;
	cout << "Nhap diem: "; cin >> gpa;
}

void SinhVien::output()
{
	cout << "ID: " << id << endl;
	cout << "Name: " << name << endl;
	cout << "Date: " << date << endl;
	cout << "GPA: " << gpa << endl;
}


//Ham setter & getter
//getter
double SinhVien::getGPA()
{
	return this->gpa;
}
string SinhVien::getID()
{
	return this->id;
}
//setter
double SinhVien::setGPA(double s)
{
	this->gpa = s;
}
string SinhVien::setName(string s)
{
	this->name = s;
}

bool cmp(SinhVien a, SinhVien b)//Thuc hien so sanh thong thuong
{
	return a.getGPA() > b.getGPA();
}

//-------------------------------------------------------------

int main()
{
	////1. SinhVien sv;-> no se goi ham sinh vien khong co tham so
	//SinhVien sv;

	////2. constructor
	//SinhVien({ "22120017", "Truong Tien Anh", "21/06/2004", 3.9 });

	////3. destructor
	//cout << "Xin chao" << endl;
	//if (1)
	//{
	//	SinhVien x;
	//	//Ket thuc pham vi dieu kien nay thi ham huy se duoc goi
	//}
	//hihi();//Ket thuc ham hihi() -> ham huy se duoc goi
	//cout << "Hello" << endl;


	////4. Ham truy cap
	//sv.TinhGPA();
	//sv.chieuCao();

	////5. Ham tao 1 danh sach sinh vien
	//SinhVien a[200];
	//for (int i = 0; i < 10; i++)
	//{
	//	a[i].input();
	//}
	//for (int i = 0; i < 10; i++)
	//{
	//	a[i].output();
	//}

	//6. Ham setter & getter
	SinhVien a[200];
	for (int i = 0; i < 10; i++)
	{
		a[i].input();
	}
	sort(a, a + 10, cmp);


	return 0;
}