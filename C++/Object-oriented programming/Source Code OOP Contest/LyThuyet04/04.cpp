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
 1. Ke thua (Inheritance)
 -> Muc dich nhung thuoc tinh giong nhau ma khai bao nhieu no gay tin bi nho
 thi ta sai Ke thua de tranh dinh nghia la
 + Base class: class cha
 + Derived class: class con

 2. Ghi de (overriding)

 3. Access mode
 Trong ke thua class Student : <Access mode> Person
 <Access mode> bao gom: public, private, protected

 NOTE: Khi xay dung Constructor trong lop con ma muon goi Constructor trong lop cha
 => Student(string name, string address, float gpa) : Person(name, address)

 4. Ke thua nhieu muc (	multi level)
 Ke thua ky hieu: -> (B->A: B ke thua tu A)
 A<-B<-C<-...vvv

*/

class Person
{
private:
	string name;
	string address;
public:
	Person() { name = ""; address = ""; };
	Person(string name, string address)
	{
		this->name = name;
		this->address = address;
	}
	void input()
	{
		getline(cin, name);
		getline(cin, address);
	}
	string getName() { return name; };
	string getAdress() { return address; };

	void setName(string newName) { name = newName; };
	void setAddress(string newAdd) { address = newAdd; };

	void output()
	{
		cout << name << " " << address << endl;
	}
};

class Student : public Person // public : chinh la Access Modes in C++
{
	//class Student ke thua class Person (Student: con, Person: cha)
	//Va class Student cung co thuoc tinh rieng cua no
private:
	float gpa;
public:
	float getGPA() { return gpa; };
	void setGPA(float newGpa) { gpa = newGpa; };

	Student()
	{
		gpa = 0;
	}

	//Tao construct tor voi tham so truyen vao la thuoc tinh Student + Person
	//C1
	//Student(string name, string address, float gpa)
	//{
	//	//Vi name va address la private nen khong the gan this->name=name
	//	setName(name);
	//	setAddress(address);
	//	this->gpa = gpa;
	//}

	//C2
	//Constructor cua lop con goi Construtor lop cha (Class person)
	// Khi Access mode cua class Student la private thi Constructor nay van hoat dong bth (O C1 khong sd duoc vi set, get o class Person dang la private)
	Student(string name, string address, float gpa) : Person(name, address)
	{
		this->gpa = gpa;
	}

	//Function overriding
	void input()
	{
		//Su dung lai code
		Person::input();
		cin >> gpa;
	}

	//Function overriding
	void output()
	{
		//In cach 1
		cout << getName() << " " << getAdress() << " " << gpa << endl;

		//In cach 2 (Cach nay hay dung de su dung lai code)
		Person::output();
		cout << gpa << endl;
	}
};

/*
 - Class tren ke thua cac thuoc tinh cua Person ma minh k can khai bao lai
   -> Giup tai su dung lai code
 Note: khong phai luc nao cung dung ke thua ta phai set den moi qua he giua chung
 (VD: Con nguoi va dong vat co chung thuoc tinh ten, gioi tinh -> khong the ke thua ..vv)

 - Student van co nhung thuoc tinh cua Person nhung no k the truy cap truc tiep vao thuoc
   tinh do vi do la private -> phai thong qua ham get, set

 - Ta thay class Person va class Student deu co chung ham output giong nhau -> Ghi de (override)
 - Tu lop con de goi 1 thuoc tinh hay ham cua lop cha -> su dung toan tu pham vi '::'

 - Trong truong hop class Student khong duoc dinh nghia input(), output() thi no se tu goi
   2 ham nay cua lop cha (class Person), con neu da dinh nghia roi thi no se goi input(), output()
   cua class Student
 - NOTE: Mac du class con ke thua tu class cha -> lop con se co day du cac phuong thuc và thuoc tinh lop cha, nhung khong phai luc
   nao cung truy cap vao thuoc tinh day duoc (Tuy thuoc va access mode, access mdifier)
*/


//-------------------------------------------------------------
// Constructor & Destructor
class A
{
public:
	A()
	{
		cout << "Constructor A" << endl;
	}
	~A() {
		cout << "Destructor A" << endl;
	}
	void xinchao() {
		cout << "Xin chao A" << endl;
	}
};

class B : public A {// Vi ke thua nen so se goi constructor A dau tien khi chay
public:
	B() {
		cout << "Constructor B" << endl;
	}
	~B() {
		cout << "Destructor B" << endl;
	}
	void xinchao() {
		cout << "Xin chao B" << endl;
	}
};

class C : public B {// Vi ke thua nen so se goi constructor B dau tien khi chay
public:
	C() {
		cout << "Constructor C" << endl;
	}
	~C() {
		cout << "Destructor C" << endl;
	}
	void xinchao() {
		cout << "Xin chao C" << endl;
	}
};

int main()
{
	//-------------------------------------------------------------
	//Student co cac thuoc tinh cua Student + Person
	//Student s;
	//s.setName("Nguyen Van A");
	//s.setAddress("Lao cai");
	//s.setGPA(8.0);

	//cout << s.getName() << endl;
	//cout << s.getAdress() << endl;
	//cout << s.getGPA() << endl;
	//cout << "Nhap thong tin sinh vien" << endl;

	//Goi ham nhap xuat cua class Student
	//s.input();
	//s.output();

	//Goi ham nhap xuat cua lop cha (class Person)
	//s.Person::input();
	//s.Person::output();

	Student s1("Truong Tien Anh", "Gia Lai", 3.5);
	s1.output();

	//-------------------------------------------------------------
	C obj; //No se goi constructor A -> constructor B Sau do Destructor B -> Destructor A
	obj.xinchao();
}