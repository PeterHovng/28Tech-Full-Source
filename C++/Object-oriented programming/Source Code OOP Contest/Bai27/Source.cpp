#include<iostream>
#include<vector>
#include<sstream>
#include <string>
using namespace std;

//---------------------------------------------------------
// KHACH HANG
class Customer {
private:
    string _name;
    string _id;
    string _address;
public:
    Customer(); 
    Customer(const string& name, const string& id, const string& address);  // Parameterized constructor

    string getName() const;
    string getId() const;
    string getAddress() const;

    void setName(const string& name);
    void setId(const string& id);
    void setAddress(const string& address);

    void input();
    void output() const;
};

Customer::Customer() : _name(""), _id(""), _address("") {}

Customer::Customer(const string& name, const string& id, const string& address)
    : _name(name), _id(id), _address(address) {}
string Customer::getName() const {
    return _name;
}
void Customer::setName(const string& name) {
    _name = name;
}
string Customer::getId() const {
    return _id;
}
void Customer::setId(const string& id) {
    _id = id;
}
string Customer::getAddress() const {
    return _address;
}
void Customer::setAddress(const string& address) {
    _address = address;
}


void Customer::input() {
    cout << "Enter name: ";
    cin >> ws;
    getline(cin, _name);

    cout << "Enter ID: ";
    cin >> ws;
    getline(cin, _id);

    cout << "Enter address: ";
    cin >> ws;
    getline(cin, _address);
}

void Customer::output() const {
    cout << "Name: " << _name << endl;
    cout << "ID: " << _id << endl;
    cout << "Address: " << _address << endl;
}
//---------------------------------------------------------
// GOI CUOC
class BasicParket {
protected:
    float dataCall;
    float dataUsage;

public:
    BasicParket();
    BasicParket(float dataCall, float dataUsage);

    float getDataCall() const;
    float getDataUsage() const;

    void setDataCall(float dataCall);
    void setDataUsage(float dataUsage);

    virtual void input();
    virtual void output() const;
    virtual float totalCost() const;
};

class DataFree : public BasicParket {
private:
    float dataFree;

public:
    DataFree();
    DataFree(float dataCall, float dataUsage, float dataFree);

    float getDataFree() const;

    void setDataFree(float dataFree);

    void input() override;
    void output() const override;
    float totalCost() const override;
};

class DataFix : public BasicParket {
public:
    DataFix();
    DataFix(float dataCall, float dataUsage);

    float totalCost() const override;
};

BasicParket::BasicParket() : dataCall(0), dataUsage(0) {}

BasicParket::BasicParket(float dataCall, float dataUsage) : dataCall(dataCall), dataUsage(dataUsage) {}

float BasicParket::getDataCall() const {
    return dataCall;
}

void BasicParket::setDataCall(float dataCall) {
    this->dataCall = dataCall;
}

float BasicParket::getDataUsage() const {
    return dataUsage;
}

void BasicParket::setDataUsage(float dataUsage) {
    this->dataUsage = dataUsage;
}

void BasicParket::input() {
    cout << "Enter call data (minutes): ";
    cin >> dataCall;
    cout << "Enter internet data (MB): ";
    cin >> dataUsage;
}

void BasicParket::output() const {
    cout << "Call data (minutes): " << dataCall << endl;
    cout << "Internet data (MB): " << dataUsage << endl;
}

float BasicParket::totalCost() const {
    float callCost = dataCall * 1000;
    float internetCost = dataUsage * 200;
    float totalCost = callCost + internetCost;
    totalCost += totalCost * 0.1;  // Add 10% VAT
    return totalCost;
}

DataFree::DataFree() : BasicParket(), dataFree(0) {}

DataFree::DataFree(float dataCall, float dataUsage, float dataFree)
    : BasicParket(dataCall, dataUsage), dataFree(dataFree) {}

float DataFree::getDataFree() const {
    return dataFree;
}

void DataFree::setDataFree(float dataFree) {
    this->dataFree = dataFree;
}

void DataFree::input() {
    BasicParket::input();
    cout << "Enter free data (MB): ";
    cin >> dataFree;
}

void DataFree::output() const {
    BasicParket::output();
    cout << "Free data (MB): " << dataFree << endl;
}

float DataFree::totalCost() const {
    float callCost = dataCall * 1000;
    float internetCost = (dataUsage > dataFree) ? (dataUsage - dataFree) * 200 : 0;
    float totalCost = callCost + internetCost;
    totalCost += totalCost * 0.1;  // Add 10% VAT
    return totalCost;
}

DataFix::DataFix() : BasicParket() {}

DataFix::DataFix(float dataCall, float dataUsage) : BasicParket(dataCall, dataUsage) {}

float DataFix::totalCost() const {
    return BasicParket::totalCost() + 0.1 * BasicParket::totalCost() + 1000000.0;
}

//---------------------------------------------------------
// HOPDONG
class Contract {
private:
    Customer* customer;
    BasicParket* parket;
public:
    float caculaCost();
    void anounceCost();
};

float Contract::caculaCost() {
    parket->totalCost();
}

void Contract::anounceCost() {
    cout << "Anoucement parket: " << caculaCost();
}

//---------------------------------------------------------
// CONGTY
class Company {
private:
    vector<Contract*> listContract;
public:
    float totalCost();
};

float Company::totalCost() {
    float sum = 0;
    for (int i = 0; i < listContract.size(); i++) {
        listContract[i]->anounceCost();
        sum += listContract[i]->caculaCost();
    }
}