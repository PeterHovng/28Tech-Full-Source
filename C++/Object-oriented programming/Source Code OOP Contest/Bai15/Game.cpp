#include "Game.h"


BusinessGate::BusinessGate() : _price(0), _quantity(0) {}
BusinessGate::BusinessGate(int price, int quantity) : _price(price), _quantity(quantity) {}

int BusinessGate::getCondition() {
	return (_price * _quantity); 
}

void BusinessGate::setPrice(int price) {
	_price = price;
}

void BusinessGate::setQuantity(int quantity) {
	_quantity = quantity;
}

int BusinessGate::getPrice() {
	return _price;
}

int BusinessGate::getQuantity() {
	return _quantity;
}

void BusinessGate::input() {
	cout << "------- BusinessGate -------" << endl;
	cout << "Enter price: "; cin >> _price;
	cout << "Enter quanttity: "; cin >> _quantity;
}
//------------------------------

AcademicGate::AcademicGate() : _intelligence(0) {}
AcademicGate::AcademicGate(int intelligence) : _intelligence(intelligence) {}

int AcademicGate::getCondition() {
	return _intelligence;
}

void AcademicGate::setIntelligence(int intelligence) {
	_intelligence = intelligence;
}

int AcademicGate::getIntelligence() {
	return _intelligence;
}

void AcademicGate::input() {
	cout << "------- AcademicGate -------" << endl;
	cout << "Enter intelligence: "; cin >> _intelligence;
}

//--------------------------------------
PowerGate::PowerGate() : _power(0) {}
PowerGate::PowerGate(int power) : _power(power) {}

int PowerGate::getCondition() {
	return _power; 
}

void PowerGate::setPower(int power) {
	_power = power;
}

int PowerGate::getPower() {
	return _power;
}

void PowerGate::input() {
	cout << "------- PowerGate -------" << endl;
	cout << "Enter power: "; cin >> _power;
}


//----- Prince --------
Prince::Prince() : _money(0), _intelligence(0), _power(0) {}

Prince::Prince(int money, int intelligence, int power) : _money(money), _intelligence(intelligence), _power(power) {}

void Prince::input() {
	cout << "------- Prince -------" << endl;
	std::cout << "Enter money: ";
	std::cin >> _money;
	std::cout << "Enter intelligence: ";
	std::cin >> _intelligence;
	std::cout << "Enter power: ";
	std::cin >> _power;
}

void Prince::setMoney(int money) {
	_money = money;
}

void Prince::setIntelligence(int intelligence) {
	_intelligence = intelligence;
}

void Prince::setPower(int power) {
	_power = power;
}

int Prince::getMoney() {
	return _money;
}

int Prince::getIntelligence() {
	return _intelligence;
}

int Prince::getPower() {
	return _power;
}

//----- Factory --------
Game* FactoryParser::create(int typeGate) {
	map<int, Game*>_container =
	{
		{1, new BusinessGate()},
		{2, new AcademicGate()},
		{3, new PowerGate()}
	};
	Game* parse = _container[typeGate];
	return parse;
}