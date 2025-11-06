#include<iostream>
#include<string>
#include<vector>
#include<map>

using namespace std;

class Student {
private:
    string ID;
    string Name;
public:
    Student() : ID(""), Name("") {}
    Student(string ID, string Name)
    {
        this->ID = ID;
        this->Name = Name;
    }
    string getID() const
    {
        return ID;
    }
    string getNameStu() const
    {
        return Name;
    }
    bool operator<(const Student& other) const {
        return ID < other.ID;
    }
};

class Professor {
private:
    string ID;
    string Name;
public:
    Professor() : ID(""), Name("") {}
    Professor(string Name, string ID)
    {
        this->Name = Name;
        this->ID = ID;
    }
    string getNameProf() const
    {
        return Name;
    }
    string getIDProf() const {
        return ID;
    }
    bool operator<(const Professor& other) const {
        return ID < other.ID;
    }
};

class Class {
private:
    map<Student, vector<Professor>> Students;
    map<Professor, vector<Student>> Professors;
public:

    void registerOneProfessor(Student student, Professor professor) {
        Students[student].push_back(professor);
        Professors[professor].push_back(student);
    }

    void registerOneStudent(Professor professor, Student student) {
        Professors[professor].push_back(student);
        Students[student].push_back(professor);
    }

    void displayInfoProfessor(Professor professor) {
        auto it = Professors.find(professor);
        if (it != Professors.end()) {
            cout << "Professor: " << it->first.getNameProf() << endl;
            cout << "Giang vien giang day nhung sinh vien: " << endl;
            for (const auto& student : it->second) {
                cout << "Student ID: " << student.getID() << ", Name: " << student.getNameStu() << endl;
            }
        }
        else {
            cout << "Professor ID: " << professor.getIDProf() << ", Name: " << professor.getNameProf() << endl;
            cout << "Giang vien khong co bat ky sinh vien nao" << endl;
        }
        cout << "______________________" << endl;
    }

    void displayInfoStudent(Student student) {
        auto it = Students.find(student);
        if (it != Students.end()) {
            cout << "Student: " << it->first.getNameStu() << endl;
            cout << "Sinh vien hoc nhung gianh vien: " << endl;
            for (const auto& professor : it->second) {
                cout << "Professor ID: " << professor.getIDProf() << ", Name: " << professor.getNameProf() << endl;
            }
        }
        else {
            cout << "Student ID: " << student.getID() << ", Name: " << student.getNameStu() << endl;
            cout << "Sinh vien khong dang ky bat ky giang vien nao" << endl;
        }
        cout << "______________________" << endl;
    }
};


int main()
{
    Class Object;
    Professor prof1("Tien Anh", "001");
    Professor prof2("Viet Duc", "002");
    Student student1("1001", "Ngoc Tram");
    Student student2("1002", "Quynh Nhu");
    Student student3("1003", "Truong Bach");


    Object.registerOneProfessor(student1, prof1);
    Object.registerOneProfessor(student1, prof2);
    Object.registerOneProfessor(student2, prof1);
    Object.registerOneProfessor(student2, prof2);


    Object.registerOneProfessor(student3, prof2);


    cout << "Thong tin sinh vien:" << endl;
    Object.displayInfoStudent(student1);
    Object.displayInfoStudent(student2);
    Object.displayInfoStudent(student3);

    cout << endl;

    cout << "Thong tin giang vien:" << endl;
    Object.displayInfoProfessor(prof1);
    Object.displayInfoProfessor(prof2);

    return 0;
}
