#pragma once
#include<iostream>
#include<string>
#include<vector>

using namespace std;

//Component (Thanh phan)
class Order {
protected:
	string _name;
	int _price;
	int _quantity;
public:
	Order();
	Order(string name, int price, int quantity);
	virtual int totalCost() = 0;
};

//Leaf
class SingleOrder :public Order {
public:
	SingleOrder();
	SingleOrder(string name, int price, int quantity);
	int totalCost() override;

};

//Composite
class CompositeOrder :public Order {
private:
	vector<Order*> components;
public:
	CompositeOrder();
	CompositeOrder(string name, int price, int quantity);
	void addOrder(Order *order);
	void removeOrder(Order *order);
	int totalCost() override;
};

