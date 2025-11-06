#include<iostream>
#include<string>
#include<vector>
using namespace std;

////Asstract class
//class NhanVien {
//protected:
//	int maNV;
//	string hoTen;
//	string phanLoai;
//public:
//	virtual void nhap();
//	virtual void xuat();
//	virtual int tinhLuong() {
//		return 0;
//	}
//	NhanVien();
//	NhanVien(int pMaNV);
//	NhanVien(int pMaNV, string pHoTen);
//	~NhanVien();
//};
//
//
//NhanVien::NhanVien() {
//	cout << "NhanVien - Default cons" << endl;
//	maNV = 101;
//	hoTen = "Ho Tuan Thanh";
//	phanLoai = "NhanVien";
//}
//
//
//NhanVien::NhanVien(int pMaNV) {
//	cout << "NhanVien - 1-arg cons" << endl;
//	maNV = pMaNV;
//	hoTen = "Ho Tuan Thanh";
//	phanLoai = "NhanVien";
//}
//
//NhanVien::NhanVien(int pMaNV, string pHoTen) {
//	cout << "NhanVien - 2-args cons" << endl;
//	maNV = pMaNV;
//	hoTen = pHoTen;
//	phanLoai = "NhanVien";
//}
//
//
//void NhanVien::nhap() {
//	do {
//		cout << "Nhap ma so: ";
//		cin >> maNV;
//		if (maNV <= 100) {
//			cout << "Nhap lai!" << endl;
//		}
//	} while (maNV <= 100);
//	cin.ignore(1);
//	cout << "Nhap ho ten: ";
//	getline(cin, hoTen);
//	phanLoai = "NhanVien";
//}
//
//void NhanVien::xuat() {
//	cout << maNV
//		<< " " << hoTen
//		<< " " << phanLoai << endl;
//}
//
//NhanVien::~NhanVien() {
//	cout << "NhanVien - Destructor" << endl;
//}
//
//
////------------------------------
//
//class NVSanXuat : public NhanVien {
//private:
//	int soSP;
//public:
//	void nhap() override;
//	void xuat() override;
//	int tinhLuong() override;
//
//	NVSanXuat();
//	NVSanXuat(int pMaNV, string pHoTen);
//	NVSanXuat(int pMaNV, string pHoTen, int pSoSP);
//	NVSanXuat(const NVSanXuat& nv);
//	~NVSanXuat();
//
//};
//
//NVSanXuat::NVSanXuat() {
//	cout << "NVSanXuat - Default cons" << endl;
//	soSP = 0;
//}
//
// //NVSanXuat::NVSanXuat(int pMaNV, string pHoTen){
// //    cout << "NVSanXuat - 2-args cons" << endl;
// //}
//
//
// // intialization list
// NVSanXuat::NVSanXuat(int pMaNV, string pHoTen): NhanVien(pMaNV, pHoTen){
//     cout << "NVSanXuat - 2-args cons" << endl;
// }
// NVSanXuat::NVSanXuat(int pMaNV, string pHoTen, int pSoSP) :
//	 NhanVien(pMaNV, pHoTen) {
//	 soSP = pSoSP;
//	 cout << "NVSanXuat- 3-args cons" << endl;
// }
//
//void NVSanXuat::nhap()
//{
//	NhanVien::nhap();
//	phanLoai = "SanXuat";
//	cout << "Nhap so san pham: ";
//	cin >> soSP;
//}
//
//void NVSanXuat::xuat() {
//	cout << "Xuat NVSanXuat" << endl;
//	NhanVien::xuat();
//	cout << " " << soSP;
//	cout << " " << tinhLuong() << endl;
//}
//
//int NVSanXuat::tinhLuong() {
//	return soSP * 1000;
//}
//
//NVSanXuat::~NVSanXuat() {
//	cout << "NVSanXuat - Destructor" << endl;
//}
//
//NVSanXuat::NVSanXuat(const NVSanXuat& nv) : NhanVien(nv) {
//	cout << "NVSanXuat - Copy cons" << endl;
//	soSP = nv.soSP;
//}
//
////------------------
//void f2(NVSanXuat sx) {
//	sx.xuat();
//}
//
//void f1(NhanVien nv) {
//	nv.xuat();
//}
//
//void f3(NhanVien* nv) {
//	nv->xuat();
//}
//
//void f4(NhanVien& nv) {
//	nv.xuat();
//}
//
//int main() {
//
//      //cout << "sx3" << endl;
//      //NVSanXuat sx3(103, "Son Tung not MTP");
//      //sx3.xuat();
//      //cout << endl;
//
//
//     //cout << "sx4" << endl;
//     //NVSanXuat sx4(104, "Son Tung", 1000);
//     //sx4.xuat();
//     //cout << endl;
//
//
//     // cout << "sx5" << endl;
//     // // nếu chưa code copy constructor
//     // // => default/auto-generated copy constructor
//     // NVSanXuat sx5(sx4);
//     // sx5.xuat();
//     // cout << endl;
//
//
//     //cout << "sx6" << endl;
//     //// NVSanXuat(const NVSanXuat &nv);
//     //NVSanXuat sx6(sx4);
//     //sx6.xuat();
//     //cout << endl;
//
//	 //Polymorphism
//	 /*NVSanXuat sx3(104, "PNSTung", 1000);
//	 f4(sx3);*/
//
//	 // có virtual
//	 // dynamic binding
//     //NVSanXuat sx2(104, "PNSTung", 1000);
//     //f3(&sx2);
//
//	 NVSanXuat sx1(102, "PNSTung", 1000);
//     f2(sx1);
//
//}

class Animal {
public:
	void takl() {
		cout << "Biet keu gi day" << endl;
	}
};

class Cat : public Animal {
public:
	void takl() {
		cout << "Meo meo!!" << endl;
	}
};

int main() {
	Animal* a;
	Cat c;

	a = &c;
	a->takl();
}

/*
* 
- Khi phương thức không được khai báo là virtual, 
  việc gọi phương thức được quyết định dựa trên kiểu của con trỏ tại thời điểm biên dịch.
- Khi phương thức được khai báo là virtual, 
  việc gọi phương thức được quyết định dựa trên kiểu của đối tượng mà con trỏ trỏ tới tại thời điểm chạy, cho phép cơ chế đa hình hoạt động đúng.
*/