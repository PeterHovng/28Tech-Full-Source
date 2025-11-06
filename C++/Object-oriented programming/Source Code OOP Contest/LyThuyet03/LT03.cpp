#include<iostream>
#include<math.h>
#include<string>
#include<iomanip>
#include<sstream>
#include<algorithm>
using namespace std;

//-------------------------------------------------------------
//I. Cac khai niem co ban trong OOP
/*
 1. Operator overloading
    << >>
    cout: ostream
    cin: istream
    +, -
    +=, -=, *=, /=
*/


//-------------------- SINH VIEN --------------------

//Nap chong toan tu nhap xuat
class SinhVien
{
private:
    string id, name, ns;
    double gpa;
public:
    SinhVien() : id(""), name(""), ns(""), gpa(0.0) {}
    //2 cai operator nhap xuat bat buoc dung friend
    friend istream& operator >> (istream& in, SinhVien& a);
    friend ostream& operator << (ostream& out, SinhVien a);

    //1. Xay dung operator <
    //C1: Khai bao toan tu < la 1 member cua SinhVien
    //bool operator < (SinhVien a);
    //C2: Khai bao duoi dang friend
    friend bool operator < (SinhVien a, SinhVien b);

};

////C1
//bool SinhVien::operator < (SinhVien a)
//{
//    return this->gpa < a.gpa;
//}

//C2
bool operator < (SinhVien a, SinhVien b)
{
    return a.gpa < b.gpa;
}

istream& operator >> (istream& in, SinhVien& a)
{
    cout << "Nhap ID: ";
    in >> a.id;
    cout << "Nhap ten: ";
    in.ignore();
    getline(in, a.name);
    cout << "Nhap nam sinh: ";
    in >> a.ns;
    cout << "Nhap diem GPA: ";
    in >> a.gpa;
    return in;
}
ostream& operator << (ostream& out, SinhVien a)
{
    out << "ID: " << a.id << endl;
    out << "Ten: " << a.name << endl;
    out << "Nam sinh: " << a.ns << endl;
    out << "Diem GPA: " << fixed << setprecision(1) << a.gpa << endl;
    return out;
}

//int main()
//{
    ////phan sinh vien
    //SinhVien x, y;
    //cout << "Nhap thong tin sinh vien: " << endl;
    //cin >> x >> y;
    //cout << "Thong tin sinh vien vua nhap: " << endl;
    //cout << x << y;

    ////Sort(a,a+n)=> no se sap xep theo cai toan tu minh da nap chong la toan tu <

    //if (x < y)
    //{
    //    cout << "GPA x < GPA y" << endl;
    //}
    //else
    //{
    //    cout << "GPA x > GPA y" << endl;
    //}
//}



//------------------ SO PHUC ------------------
class SoPhuc
{
private:
    int thuc, ao;
public:
    SoPhuc()
    {
        thuc = 0;
        ao = 0;
    }
    SoPhuc(int real,int imag)
    {
        thuc = real;
        ao = imag;
    }
    //Cac ham bo tro
    void display()
    {
        cout << "KQ: " << thuc << "i + " << ao << "j" << endl;
    }
    //1. Nap chong toan tu: +,-
    
    //C1: Khai bao ham la member cua class
    //SoPhuc operator + (SoPhuc another);//return ve tong
    //C2: Khai bao ham doc lap
    friend SoPhuc operator + (SoPhuc a, SoPhuc b);

    SoPhuc operator - (SoPhuc another);//Return ve hieu

};

//C1: 
//SoPhuc SoPhuc::operator + (SoPhuc another)
//{
//    SoPhuc tong;
//    tong.thuc = this->thuc + another.thuc;
//    tong.ao = this->ao + another.ao;
//    return tong;
//}

//C2:
SoPhuc operator + (SoPhuc a, SoPhuc b)
{
    SoPhuc tong;
    tong.thuc = a.thuc + b.thuc;
    tong.ao = a.ao + b.ao;
    return tong;
}

SoPhuc SoPhuc::operator - (SoPhuc another)
{
    SoPhuc tru;
    tru.thuc = this->thuc - another.thuc;
    tru.ao = this->ao - another.ao;
    return tru;
}

//int main()
//{
//    SoPhuc a(1,2), b(3,4);
//    
//    SoPhuc sum = a + b;
//    sum.display();
//    
//}

//--------------------- SO MNGUYEN --------------------
class SoNguyen
{
private:
    int number;
    int Arr[3];
public:
    SoNguyen()
    {
        number = 0;
    }
    SoNguyen(int n, int sub1, int sub2, int sub3)
    {
        number = n;
        Arr[0] = sub1;
        Arr[1] = sub2;
        Arr[2] = sub3;
    }
    //Cac ham bo tro
    void display()
    {
        cout << "N: " << number << endl;
    }

    //1. Nap chong toan tu: +=, -=, *=, /=
    //a. +=
    void operator += (int num)
    {
        number = number + num;
    }
    //b. -=
    friend void operator -= (SoNguyen& a, SoNguyen& b);

    //c. *=, /= tuong tu cau a,b

    //2. Nap chong toan tu ++, --
    void operator ++ ()
    {
        number += 1;
    }

    friend void operator -- (SoNguyen& a);

    //3. []
    int operator[] (int index)
    {
        return Arr[index];
    }

    //4. ()
    SoNguyen operator ()(int num)
    {
        number = num;
        return *this;
    }
};

void operator -= (SoNguyen& a, SoNguyen& b)
{
    a.number -= b.number;
    //Hoac
    /*
    void operator -= (SoNguyen& a, int num)
    {
       a.number-=num;
    }
    */
}

void operator -- (SoNguyen& a)
{
    a.number -= 1;
}

int main()
{
    SoNguyen numA(5, 1, 2, 3), numB(3, 4, 5, 6);

    //1. +=, -=, ++, --
    cout << "*=, -=, ++, --" << endl;
    numA.display();
    numA += 5;
    numA.display();
    numA -= numB;
    numA.display();

    ++numA;
    numA.display();
    --numA;
    numA.display();

    //2. []
    cout << "[]" << endl;
    cout <<"Arr A: "<< numA[0] << " " << numA[1] << " " << numA[2] << endl;
    cout << "Arr B: " << numB[0] << " " << numB[1] << " " << numB[2] << endl;

    //3. ()
    cout << "()" << endl;
    numA.display();
    numA(12);
    numA.display();
}