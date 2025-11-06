#pragma once
#include<iostream>
#include<string>
#include<vector>
#include<map>
using namespace std;

class Game
{
public:
	virtual int getCondition() = 0;
	virtual void input() = 0;
};

class BusinessGate : public Game {
private:
	int _price;
	int _quantity;
public:
	BusinessGate();
	BusinessGate(int price, int quantity);
	int getCondition() override;
	void input() override;

	void setPrice(int price);
	void setQuantity(int quantity);
	int getPrice();
	int getQuantity();
};

class AcademicGate : public Game {
private:
	int _intelligence;
public:
	AcademicGate();
	AcademicGate(int intelligence);
	int getCondition() override;
	void input() override;

	void setIntelligence(int intelligence);
	int getIntelligence();
};

class PowerGate : public Game {
private:
	int _power;
public:
	PowerGate();
	PowerGate(int power);
	int getCondition() override;
	void input() override;

	void setPower(int power);
	int getPower();
};

class Prince {
private:
	int _money;
	int _intelligence;
	int _power;
public:
	Prince();
	Prince(int money, int intellingence, int power);

	void input();

	void setMoney(int money);
	void setIntelligence(int intelligence);
	void setPower(int power);

	int getMoney();
	int getIntelligence();
	int getPower();
};

class FactoryParser {
public:
	Game* create(int typeGate);
};

