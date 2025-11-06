#include<iostream>
#include<math.h>
#include<string>
#include<iomanip>
#include<sstream>
#include<algorithm>
using namespace std;

class SinhVien
{
private:
	string _id;
	string _name;
	string _class;
	string _date;
	float _gpa;
public:
	SinhVien()
	{
		_id = "";
		_name = "";
		_class = "";
		_date = "";
		_gpa = 0;
	}
	friend istream& operator >> (istream& in, SinhVien& sv);
	friend ostream& operator << (ostream& out, SinhVien& sv);
};

void chuanhoa(string& Date) {
	if (Date.size() == 10)
		return;

	string day, month, year;
	stringstream ss(Date);
	getline(ss, day, '/');
	getline(ss, month, '/');
	getline(ss, year);

	if (day.size() == 1)
		day = "0" + day;
	if (month.size() == 1)
		month = "0" + month;
	if (year.size() != 4)
		year = "0" + year;

	Date = day + "/" + month + "/" + year;
}
istream& operator >> (istream& in, SinhVien& sv)
{
	cout << "ID: ";
	getline(cin, sv._id);

	cout << "Name: ";
	getline(cin, sv._name);

	cout << "Class: ";
	getline(cin, sv._class);

	cout << "Date: ";
	getline(cin, sv._date);
	chuanhoa(sv._date);

	do
	{
		cout << "GPA: ";
		cin >> sv._gpa;
		if (sv._gpa < 0 || sv._gpa>4)
		{
			cout << "Diem khong hop le. Hay nhap lai" << endl;
		}
	} while (sv._gpa < 0 || sv._gpa > 4);
	return in;
}

ostream& operator << (ostream& out, SinhVien& sv)
{
	out << "*********** SINH VIEN ***********" << endl;
	out << "ID: " << sv._id << endl;
	out << "Name: " << sv._name << endl;
	out << "Class: " << sv._class << endl;
	out << "Date: " << sv._date << endl;
	out << "GPA: " << sv._gpa << endl;
	out << "*********************************" << endl;
	return out;
}

int main()
{
	SinhVien sv;
	cin >> sv;
	cout << sv;

	return 0;
}