#include "Function.h"

//------- Actual ---------
DataFree::DataFree(int callDuration, int dataUsage ) : callDuration(callDuration), dataUsage(dataUsage) {}

int DataFree::getCallDuration()  {
	return callDuration;
}
void DataFree::setCallDuration(int duration) {
	callDuration = duration;
}
int DataFree::getDataUsage()  {
	return dataUsage;
}
void DataFree::setDataUsage(int usage) {
	dataUsage = usage;
}

string DataFree::toString()  {
	return "Data Free";
}
int DataFree::phoneCharge()  {
	return callDuration * 1000;
}
int DataFree::internetCharge()  {
	return dataUsage * 200;
}
double DataFree::totalCharge()  {
	int total = phoneCharge() + internetCharge();
	return total + total * 0.1;
}
void DataFree::inputInfor()  {
	cout << "Enter call duration: "; cin >> callDuration;
	cout << "Enter data usage: "; cin >> dataUsage;
}


DataFix::DataFix(int callDuration , int dataUsage ) : callDuration(callDuration), dataUsage(dataUsage) {}

int DataFix::getCallDuration()  {
	return callDuration;
}
void DataFix::setCallDuration(int duration) {
	callDuration = duration;
}
int DataFix::getDataUsage()  {
	return dataUsage;
}
void DataFix::setDataUsage(int usage) {
	dataUsage = usage;
}

string DataFix::toString()  {
	return "Data Fix";
}
int DataFix::phoneCharge()  {
	return callDuration * 1000;
}
int DataFix::internetCharge()  {
	return dataUsage * 200;
}
double DataFix::totalCharge()  {
	int total = phoneCharge() + internetCharge();
	return total + total * 0.1;
}
void DataFix::inputInfor()  {
	cout << "Enter call duration: "; cin >> callDuration;
	cout << "Enter data usage: "; cin >> dataUsage;
}

//---------- Customer --------------

Customer::Customer(const string& name , const string& id , const string& address , const int& typeParket )
	: _name(name), _id(id), _address(address), _typeParket(typeParket) {}
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
int Customer::getTypeParket() const {
	return _typeParket;
}
void Customer::setTypeParket(const int& typeParket) {
	_typeParket = typeParket;
}
void Customer::inputData() {
	cout << "Enter name: ";
	getline(cin, _name);
	cout << "Enter id: ";
	getline(cin, _id);
	cout << "Enter address: ";
	getline(cin, _address);
}

void Customer::inputParket() {
	cout << "------------- Parket -------------" << endl;
	cout << "1. Data free" << endl;
	cout << "2. Data fix" << endl;
	cout << "3. Exist!" << endl;
	cout << "----------------------------------" << endl;
	cout << "Enter type of parket: ";
	cin >> _typeParket;
}

bool Customer::operator<(const Customer& other) const {
	return this->_id < other._id;
}

//--------- Company ------------
Company::Company() :_subscriptionFee(0), _freeUsageThreshold(0) {};

Company::Company(int subscriptionFee, int freeUsageThreshold) {
	_subscriptionFee = subscriptionFee;
	_freeUsageThreshold = freeUsageThreshold;
}

void Company::resgisterContract() {
	Customer customer;
	ParserFactory factory;
	input(); cin.ignore();
	customer.inputData();
	while (true)
	{
		customer.inputParket();
		system("cls");
		if (customer.getTypeParket() == 3) {
			break;
		}
		IBasicParket* parket = factory.create(customer.getTypeParket());
		parket->inputInfor();

		if (parket == nullptr) {
			cout << "Invalid parket type. Exiting..." << endl;
			break;
		}
		auto it = _contract.find(customer);
		if (it != _contract.end()) {
			it->second.push_back(parket);
		}
		else {
			_contract[customer] = vector<IBasicParket*>{ parket };
		}
	}
}

double Company::charge(IBasicParket *parket) {
	if (parket->toString() == "Data Free") {
		if (parket->getDataUsage() <= _freeUsageThreshold) {
			return _subscriptionFee + parket->phoneCharge();
		}
		else
		{
			return _subscriptionFee + parket->internetCharge() + parket->phoneCharge();
		}
	}
	else if (parket->toString() == "Data Fix") {
		return parket->phoneCharge() + 1000000;
	}
}

void Company::billing() {
	for (auto& contract : _contract) {
		cout << "---------- Customer -----------" << endl;
		cout << "ID: " << contract.first.getId() << endl;
		cout << "Name: " << contract.first.getName() << endl;
		cout << "Address: " << contract.first.getAddress() << endl;
		cout << "Billing: " << endl;
		for (int i = 0; i < contract.second.size(); i++) {
			cout << "+" << contract.second[i]->toString() << ": ";
			cout << charge(contract.second[i]) << endl;
		}
		cout << "-------------------------------" << endl << endl;
	}
}

string Company::toString(){
	return "Company";
}

void Company::input() {
	cout << "********** Company ***********" << endl;
	cout << "Subscription fees: "; cin >> _subscriptionFee;
	cout << "Free usage thresholds: "; cin >> _freeUsageThreshold;
	cout << "******************************" << endl;
}
