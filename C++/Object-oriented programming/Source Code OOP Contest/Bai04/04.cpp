#include<iostream>
#include<math.h>
#include<vector>
#include<string>
#include<iomanip>
#include<sstream>
#include<algorithm>
using namespace std;

class SinhVien
{
protected:
	string _id;
	string _name;
	string _class;
	string _email;
public:
	SinhVien()
	{
		_id = "";
		_name = "";
		_class = "";
		_email = "";
	}
	string getClass()
	{
		return _class;
	}
	friend istream& operator >> (istream& in, SinhVien& sv);
	friend ostream& operator << (ostream& out, SinhVien& sv);
};

class LopHoc
{
private:
	vector<SinhVien> lop;
public:
	void input();
	void display();
	void sapxepSinhVien();
};

istream& operator >> (istream& in, SinhVien& sv)
{
	cout << "ID: ";
	getline(cin, sv._id);

	cout << "Name: ";
	getline(cin, sv._name);

	cout << "Class: ";
	getline(cin, sv._class);

	cout << "Email: ";
	getline(cin, sv._email);

	return in;
}

ostream& operator << (ostream& out, SinhVien& sv)
{
	out << "ID: " << sv._id << ","
		<< "Name: " << sv._name << ","
		<< "Class: " << sv._class << ","
		<< "Email: " << sv._email << endl;
	return out;
}

void LopHoc::input() {
	SinhVien sv;
	cin >> sv;
	lop.push_back(sv);
}

void LopHoc::display()
{
	cout << "********** DANH SACH SINH VIEN **********" << endl;
	for (auto sv : lop)
	{
		cout << sv;
	}
	cout << "*****************************************" << endl;
}

bool cmp(SinhVien& a, SinhVien& b)
{
	return a.getClass() < b.getClass();
}

void LopHoc::sapxepSinhVien()
{
	sort(lop.begin(), lop.end(), cmp);
}

int main()
{
	LopHoc lp;
	cout << "So sinh vien: ";
	int n; cin >> n;
	int i = 1;
	cin.ignore();
	while (i<=n)
	{
		cout << "Sinh vien " << i << endl;
		lp.input();
		i++;
		cout << "_________________________" << endl;
	}
	lp.sapxepSinhVien();
	lp.display();
}