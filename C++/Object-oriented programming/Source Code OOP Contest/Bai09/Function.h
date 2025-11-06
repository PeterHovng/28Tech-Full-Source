#pragma once
#include<iostream>
#include<string>
#include<cstring>
#include<sstream>
#include <regex>
#include<vector>
#include<map>
using namespace std;

class Object {
public:
	virtual string toString() = 0;
};

class Employee : public Object {
public:
	virtual int salary() = 0;
};

class Manager : public Employee {
private:
	int _employeeCount;
	int _paymentPerEmployee;
	int _baseSalary;
public:
	Manager() {
		_employeeCount = 0;
		_paymentPerEmployee = 0;
		_baseSalary = 0;
	}
	Manager(int employeeCount, int paymentPerEmployee, int baseSalary) {
		_employeeCount = employeeCount;
		_paymentPerEmployee = paymentPerEmployee;
		_baseSalary = baseSalary;
	}
	int getEmployeeCount() const {
		return _employeeCount;
	}

	int getPaymentPerEmployee() const {
		return _paymentPerEmployee;
	}

	int getBaseSalary() const {
		return _baseSalary;
	}

	void setEmployeeCount(int employeeCount) {
		_employeeCount = employeeCount;
	}

	void setPaymentPerEmployee(int paymentPerEmployee) {
		_paymentPerEmployee = paymentPerEmployee;
	}

	void setBaseSalary(int baseSalary) {
		_baseSalary = baseSalary;
	}

	int salary() override {
		return _baseSalary + _employeeCount * _paymentPerEmployee;
	}

	string toString() override {
		return "Manager";
	}
};

class DailyEmployee : public Employee {
private:
	int _dayCount;
	int _paymentPerDay;
public:
	DailyEmployee() {
		_dayCount = 0;
		_paymentPerDay = 0;
	}
	DailyEmployee(int dayCount, int paymentPerDay) {
		_dayCount = dayCount;
		_paymentPerDay = paymentPerDay;
	}
	int getDayCount() const {
		return _dayCount;
	}

	int getPaymentPerDay() const {
		return _paymentPerDay;
	}

	void setDayCount(int dayCount) {
		_dayCount = dayCount;
	}

	void setPaymentPerDay(int paymentPerDay) {
		_paymentPerDay = paymentPerDay;
	}

	int salary() override {
		return _dayCount * _paymentPerDay;
	}

	string toString() override {
		return "Daily employee";
	}
};

class ProductEmployee : public Employee {
private:
	int _productCount;
	int _paymentPerProduct;
public:
	ProductEmployee() {
		_productCount = 0;
		_paymentPerProduct = 0;
	}
	ProductEmployee(int productCount, int paymentPerProduct) {
		_productCount = productCount;
		_paymentPerProduct = paymentPerProduct;
	}

	int getProductCount() const {
		return _productCount;
	}

	int getPaymentPerProduct() const {
		return _paymentPerProduct;
	}

	void setProductCount(int productCount) {
		_productCount = productCount;
	}

	void setPaymentPerProduct(int paymentPerProduct) {
		_paymentPerProduct = paymentPerProduct;
	}

	int salary() override {
		return _productCount * _paymentPerProduct;
	}

	string toString() override {
		return "Product employee";
	}
};
//----------------

//-------------------
class IParsable : public Object{
public:
	virtual	Object* parse(string input) = 0;
	virtual string parsedObjectName() = 0;
};

class DailyEmployeeParser : public IParsable{
public:
	string toString() override {
		return "DailyEmployee";
	}
	Object* parse(string input) override {
		Object* reOject = nullptr;
		stringstream ss(input);
		string obj1, obj2;
		int dayCount = 0, paymentPerPay = 0;
		getline(ss, obj1, ',');
		getline(ss, obj2);

		int splitPosition;
		splitPosition = obj1.find_first_of('=');
		dayCount = stoi(obj1.substr(splitPosition + 1));

		splitPosition = obj2.find_first_of('=');
		paymentPerPay = stoi(obj2.substr(splitPosition + 1));

		reOject = new DailyEmployee(dayCount, paymentPerPay);

		return reOject;
	}
	string parsedObjectName() override {
		return "DailyEmployee";
	}
};

class ProductEmployeeParser : public IParsable {
public:
	string toString() override {
		return "ProductEmployee";
	}
	Object* parse(string input) override {
		Object* reOject = nullptr;
		stringstream ss(input);
		string obj1, obj2;
		int productCount = 0, paymentPerProduct = 0;
		getline(ss, obj1, ',');
		getline(ss, obj2);

		int splitPosition;
		splitPosition = obj1.find_first_of('=');
		productCount = stoi(obj1.substr(splitPosition + 1));

		splitPosition = obj2.find_first_of('=');
		paymentPerProduct = stoi(obj2.substr(splitPosition + 1));

		reOject= new ProductEmployee(productCount, paymentPerProduct);

		return new ProductEmployee(productCount, paymentPerProduct);;
	}
	string parsedObjectName() override {
		return "ProductEmployee";
	}
};
class ManagerParser : public IParsable {
public:
	string toString() override {
		return "Manager";
	}
	string parsedObjectName() override {
		return "Manager";
	}
	Object* parse(string input) override {
		Object* reOject = nullptr;
		stringstream ss(input);
		string obj1, obj2, obj3;
		int employeeCount = 0, paymentPerEmployee = 0, baseSalary = 0;
		getline(ss, obj1, ',');
		getline(ss, obj2, ',');
		getline(ss, obj3);

		int splitPosition;
		splitPosition = obj1.find_first_of('=');
		employeeCount = stoi(obj1.substr(splitPosition + 1));

		splitPosition = obj2.find_first_of('=');
		paymentPerEmployee = stoi(obj2.substr(splitPosition + 1));

		splitPosition = obj3.find_first_of('=');
		baseSalary = stoi(obj3.substr(splitPosition + 1));

		reOject = new Manager(employeeCount, paymentPerEmployee, baseSalary);

		return reOject;
	}
};

//---------------------
class ParserFactory : public Object {
private:
	map<string, IParsable*> _container;

public:
	void registerWith(IParsable* parser) {
		_container.insert({ parser->parsedObjectName(), parser });
	}
	IParsable* create(string type) {
		return _container[type];
	}
	string toString() {
		return toString();
	}
};

//---------------------
class NumberFormatInfo : public Object {
private:
	string _currencyDecimalSeparator = ".";
	string _currencySymbol = "d";

	int _currencyPositive = 3;				// 0		1		2		3
	string _currencyPositiveFormat = "n $"; // "$n"		"n$"	"$ n"	"n $"
public:
	string currencyDecimalSeparator() {
		return _currencyDecimalSeparator;
	}
	string currencySymbol() {
		return _currencySymbol;
	}
	int currencyPositive() {
		return _currencyPositive;
	}
	string currencyPositiveFormat() {
		return _currencyPositiveFormat;
	}
public:
	string toString() {
		return "NumberFormatInfo";
	}
};

//----------------------
class IValueConverter :public Object {
public:
	virtual string convert(Object* obj) = 0;
};

//---------------------
class Integer : public Object {
private:
	int _value;
public:
	Integer() {
		_value = 0;
	}
	Integer(int value) {
		_value = value;
	}
	int value() {
		return _value;
	}
	void setValue(int value) {
		_value = value;
	}
	string toString() {
		return "Integer";
	}
};

class IntegerToCurrencyConverter {
public:
	string	convert(Object* object);
};

