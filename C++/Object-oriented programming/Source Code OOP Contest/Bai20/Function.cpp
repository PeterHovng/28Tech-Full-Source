#include "Function.h"

//Component (Thanh phan)
Order::Order() {
	_name = "";
	_price = 0;
	_quantity = 0;
}
Order::Order(string name, int price, int quantity) {
	_name = name;
	_price = price;
	_quantity = quantity;
}

//Leaf
SingleOrder::SingleOrder() :Order() {};
SingleOrder::SingleOrder(string name, int price, int quantity) :
	Order(name, price, quantity) {};
int SingleOrder::totalCost() {
	return _price * _quantity;
}

//Composite
CompositeOrder::CompositeOrder() :Order() {};
CompositeOrder::CompositeOrder(string name, int price, int quantity) :
	Order(name, price, quantity) {};

void CompositeOrder::addOrder(Order* order) {
	components.push_back(order);
}
void CompositeOrder::removeOrder(Order* order) {
	auto reOrder = find(components.begin(), components.end(), order);
	if (reOrder != components.end()) {
		components.erase(reOrder);
	}
}
int CompositeOrder::totalCost() {
	int total = 0;
	for (auto order : components) {
		total += order->totalCost();
	}
	return total;
}

