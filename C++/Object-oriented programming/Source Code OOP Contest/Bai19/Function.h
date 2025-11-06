#pragma once
#include<iostream>
#include<math.h>
#include<vector>
#include<math.h>
#include<map>
#include<string>
using namespace std;

class Object
{
public:
	virtual string toString() = 0;
};

//-------- Actual --------------
class IBasicParket :public Object {
public:
	virtual int phoneCharge() = 0;
	virtual int internetCharge() = 0;
	virtual double totalCharge() = 0;
	virtual int getCallDuration() = 0;
	virtual int getDataUsage() = 0;
	virtual void inputInfor() = 0;
};

class DataFree : public IBasicParket {
private:
	int callDuration;
	int dataUsage;
public:

	DataFree(int callDuration = 0, int dataUsage = 0);

	int getCallDuration()override;
	void setCallDuration(int duration);
	int getDataUsage() override;
	void setDataUsage(int usage);
	string toString() override;
	int phoneCharge() override;
	int internetCharge() override;
	double totalCharge() override;
	void inputInfor() override;
};

class DataFix :public IBasicParket {
private:
	int callDuration;
	int dataUsage;
public:

	DataFix(int callDuration = 0, int dataUsage = 0);

	int getCallDuration() override;
	void setCallDuration(int duration);
	int getDataUsage() override;
	void setDataUsage(int usage);

	string toString() override;
	int phoneCharge() override;
	int internetCharge() override;
	double totalCharge() override;
	void inputInfor() override;
};


//-------- ParserFactory -------------
class ParserFactory :public Object {
public:
	string toString() override {
		return "Parser Factory";
	}
	IBasicParket* create(int typeParket) {
		map<int, IBasicParket*> _container = {
			{1, new DataFree()},
			{2, new DataFix()}
		};
		IBasicParket* parse = _container[typeParket];
		return parse;
	}
};

//---------- Company --------------

class Customer {
private:
	string _name;
	string _id;
	string _address;
	int _typeParket;

public:
	Customer(const string& name = "", const string& id = "", const string& address = "", const int& typeParket = 0);
	bool operator<(const Customer& other) const;
	string getName() const;
	void setName(const string& name);
	string getId() const;
	void setId(const string& id);
	string getAddress() const;
	void setAddress(const string& address);
	int getTypeParket() const;
	void setTypeParket(const int& typeParket);
	void inputData();
	void inputParket();
};

class Company :public Object {
private:
	int _subscriptionFee;
	int _freeUsageThreshold;
	map<Customer, vector<IBasicParket*>>_contract;
public:
	Company();
	Company(int subscriptionFee, int freeUsageThreshold);
	int getSubscriptionFee() {
		return _subscriptionFee;
	}
	int getFreeUsageThreshold() {
		return _freeUsageThreshold;
	}
	void resgisterContract();
	double charge(IBasicParket *parket);
	void billing();
	string toString () override;
	void input();
};

