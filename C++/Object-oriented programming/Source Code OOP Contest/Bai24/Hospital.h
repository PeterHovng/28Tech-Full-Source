#pragma once
#include<iostream>
#include<math.h>
#include<map>
#include<unordered_map>
#include<string>
using namespace std;


//class Person {
//protected:
//    std::string _name;
//    std::string _id;
//    std::string _idOther;
//
//public:
//    Person() : _name(""), _id(""), _idOther("") {}
//    Person(const std::string& name, const std::string& id, const std::string& idOther)
//        : _name(name), _id(id), _idOther(idOther) {}
//    std::string getName() const {
//        return _name;
//    }
//    void setName(const std::string& name) {
//        _name = name;
//    }
//    std::string getId() const {
//        return _id;
//    }
//    void setId(const std::string& id) {
//        _id = id;
//    }
//    std::string getIdOther() const {
//        return _idOther;
//    }
//    void setIdOther(const std::string& idOther) {
//        _idOther = idOther;
//    }
//};
//
//class BenhNhan: public Person {
//private:
//    string _date;
//
//public:
//};
//
//class BacSi: public Person{
//private:
//    string _address;
//public:
//
//};
//
//class Group {
//private:
//    string _groupID;
//    string _advisorID;
//    
//public:
//
//};

//----------------
class Room
{
private:
    string id;
public:
    Room(string id);
    void setID(string id);
    string getID();
    void display();
};

class Person
{
private:
    string name;
public:
    Person(string name);
    void setName(string name);
    string getName();
    virtual void display() = 0;
};

class Doctor : public Person
{
private:
    string address;
public:
    Doctor(string name, string address);
    void setAddress(string address);
    string getAddress();
    void display() override;
};

class Group
{
private:
    string id;
    unordered_map<string, Doctor*> doctors;
    Doctor* advisor;
public:
    Group(string id, Doctor* advisor);
    void setID(string id);
    string getID();
    void addDoctor(Doctor* doctor);
    void display();
    Doctor* getAdvisor();
    unordered_map<string, Doctor*> getDoctors();
};

class Patient : public Person
{
private:
    string dateOfBirth;
    Room* room;
    Group* group;
public:
    Patient(string name, string dateOfBirth, Room* room, Group* group);
    void setDateOfBirth(string dateOfBirth);
    string getDateOfBirth();
    void display() override;
};

class Department
{
private:
    string name;
    unordered_map<string, Patient*> patients;
public:
    Department(string name);
    void setName(string name);
    string getName();
    void addPatient(Patient* patient);
    void display();
    void displayPatients();
};

class Hospital
{
private:
    string name;
    unordered_map<string, Department*> departments;
    unordered_map<string, Group*> groups;
public:
    Hospital(string name);
    void setName(string name);
    string getName();
    void addDepartment(Department* department);
    void addGroup(Group* group);
    void display();
    void displayPatients();
};

// Room methods
void Room::setID(string id)
{
    this->id = id;
}
string Room::getID()
{
    return this->id;
}
Room::Room(string id)
{
    this->setID(id);
}
void Room::display()
{
    cout << "Room ID: " << id << endl;
}

// Person methods
void Person::setName(string name)
{
    this->name = name;
}
string Person::getName()
{
    return this->name;
}
Person::Person(string name)
{
    this->setName(name);
}

// Doctor methods
void Doctor::setAddress(string address)
{
    this->address = address;
}
string Doctor::getAddress()
{
    return this->address;
}
Doctor::Doctor(string name, string address) : Person(name)
{
    this->setAddress(address);
}
void Doctor::display()
{
    cout << "Doctor Name: " << getName() << ", Address: " << address << endl;
}

// Group methods
void Group::setID(string id)
{
    this->id = id;
}
string Group::getID()
{
    return this->id;
}
Group::Group(string id, Doctor* advisor)
{
    this->setID(id); this->advisor = advisor;
}
void Group::addDoctor(Doctor* doctor)
{
    doctors[doctor->getName()] = doctor;
}
void Group::display()
{
    cout << "Group ID: " << id << endl;
    cout << "Advisor: ";
    advisor->display();
    cout << "Doctors in the group:" << endl;
    for (auto& pair : doctors)
    {
        pair.second->display();
    }
}
Doctor* Group::getAdvisor()
{
    return advisor;
}
unordered_map<string, Doctor*> Group::getDoctors()
{
    return doctors;
}

// Patient methods
void Patient::setDateOfBirth(string dateOfBirth)
{
    this->dateOfBirth = dateOfBirth;
}
string Patient::getDateOfBirth()
{
    return this->dateOfBirth;
}
Patient::Patient(string name, string dateOfBirth, Room* room, Group* group) : Person(name)
{
    this->setDateOfBirth(dateOfBirth);
    this->room = room;
    this->group = group;
}
void Patient::display()
{
    cout << "Patient Name: " << getName() << ", Date of Birth: " << dateOfBirth << endl;
    if (room)
    {
        room->display();
    }
    if (group)
    {
        cout << "Group: " << group->getID() << endl;
        cout << "Advisor: ";
        group->getAdvisor()->display();
        cout << "Doctors in the group:" << endl;
        for (auto& pair : group->getDoctors())
        {
            pair.second->display();
        }
    }
    cout << endl;
}

// Department methods
void Department::setName(string name)
{
    this->name = name;
}
string Department::getName()
{
    return this->name;
}
Department::Department(string name)
{
    this->setName(name);
}
void Department::addPatient(Patient* patient)
{
    patients[patient->getName()] = patient;
}
void Department::display()
{
    cout << "Department Name: " << name << endl;
}
void Department::displayPatients()
{
    for (auto& pair : patients)
    {
        pair.second->display();
    }
}

// Hospital methods
void Hospital::setName(string name)
{
    this->name = name;
}
string Hospital::getName()
{
    return this->name;
}
Hospital::Hospital(string name)
{
    this->setName(name);
}
void Hospital::addDepartment(Department* department)
{
    departments[department->getName()] = department;
}
void Hospital::addGroup(Group* group)
{
    groups[group->getID()] = group;
}
void Hospital::display()
{
    cout << "Hospital Name: " << name << endl;
    cout << "Departments:" << endl;
    for (auto& pair : departments)
    {
        pair.second->display();
    }
    cout << "Groups:" << endl;
    for (auto& pair : groups)
    {
        pair.second->display();
    }
}
void Hospital::displayPatients()
{
    for (auto& pair : departments)
    {
        pair.second->displayPatients();
    }
}

int main()
{
    // Creating rooms
    Room room1("101");
    Room room2("102");

    // Creating doctors
    Doctor doc1("Viet Duc", "D508");
    Doctor doc2("Nghia Le", "B601");
    Doctor doc3("Mai Dang", "Vinhome");
    Doctor doc4("Quoc An", "G609");

    // Creating groups with doctors
    Group group1("G1", &doc1);
    group1.addDoctor(&doc1);
    group1.addDoctor(&doc2);

    Group group2("G2", &doc3);
    group2.addDoctor(&doc3);
    group2.addDoctor(&doc4);

    // Creating patients and assigning them to groups
    Patient patient1("Minh Dat", "03/08/2004", &room1, &group1);
    Patient patient2("Quynh Anh", "02/02/2004", &room2, &group2);
    Patient patient3("Ba Dong", "04/06/2004", &room1, &group1);
    Patient patient4("Duc Hoa", "09/12/2004", &room2, &group2);

    // Creating departments and adding patients to them
    Department dept1("Khoa San");
    Department dept2("Khoa Tim");
    dept1.addPatient(&patient1);
    dept1.addPatient(&patient3);
    dept2.addPatient(&patient2);
    dept2.addPatient(&patient4);

    // Creating a hospital and adding departments and groups to it
    Hospital hospital("Benh Vien Da Khoa Thu Duc");
    hospital.addDepartment(&dept1);
    hospital.addDepartment(&dept2);
    hospital.addGroup(&group1);
    hospital.addGroup(&group2);

    // Displaying patient information from hospital
    hospital.displayPatients();

    return 0;
}