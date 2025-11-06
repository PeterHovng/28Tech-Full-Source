#include<iostream>
#include<string>
#include<vector>
using namespace std;

// Interface for fly behavior
class IFlyBehaviour {
public:
	virtual void fly() = 0;
	virtual  ~IFlyBehaviour() {}
};

// Concrete fly behaviors
class FlyHighBehaviour : public IFlyBehaviour {
public:
	void fly() override {
		cout << "Fly at 10 km from ground" << endl;
	}
};

class FlyLowBehaviour : public IFlyBehaviour {
public:
	void fly() override {
		cout << "Fly at 2 km from ground" << endl;
	}
};

//---------------------------

// Interface for eat behavior
class IEatBehaviour {
public:
	virtual void eat() = 0;
	virtual ~IEatBehaviour() {}
};

// Concrete eat behaviors
class EatLeafBehaviour : public IEatBehaviour {
public:
	void eat()override {
		cout << "Eat green leaf...." << endl;
	}
};

class EatFishBehaviour : public IEatBehaviour {
public:
	void eat()override {
		cout << "Eat fish..." << endl;
	}
};

// Class for bird
class WildBird {
private:
	IFlyBehaviour* flyBehaviour;
	IEatBehaviour* eatBehaviour;
public:
	WildBird(IFlyBehaviour* flyBehavior, IEatBehaviour* eatBehaviour) : 
		flyBehaviour(flyBehavior), eatBehaviour(eatBehaviour){}

	void eat() {
		eatBehaviour->eat();
	}
	void fly() {
		flyBehaviour->fly();
	}
	//Code....
};

// Class for Penguin
class Penguin {
private:
	IEatBehaviour* eatBehaviour;
public:
	Penguin(IEatBehaviour* eatBehavior)
		:eatBehaviour(eatBehavior) {}

	void eat() {
		eatBehaviour->eat();
	}
	//Code...
};


//protocol IFlyBehaviour{
//	func fly()
//}
//
//class FlyHighBehaviour : IFlyBehaviour {
//	func fly() {
//		print("Fly at 10 km from ground")
//	}
//};
//
//class FlyLowBehaviour :IFlyBehaviour {
//	func fly() {
//		print("Fly at 2 km from ground")
//	}
//};
//
//
//protocol IEatBehaviour{
//	func eat()
//}
//
//class EatLeafBehaviour : IEatBehaviour {
//	func eat() {
//		print("Eat leaf")
//	}
//};
//
//class EatFishBehaviour : public IEatBehaviour {
//	func eat() {
//		print("Eat fish")
//	}
//};
//
//class WildBird {
//	let eatBehaviour: IEatBehaviour
//	let flyBehaviour: IFlyBehaviour
//
//	init(eatBehaviour : IEatBehaviour, flyBehaviour : IFlyBehaviour) {
//		self.eatBehaviour = eatBehaviour
//		self.flyBehaviour = flyBehaviour
//	}
//
//	func eat() {
//		eatBehaviour.eat()
//	}
//	func fly() {
//		flyBehaviour.fly()
//	}
//};
//
//let wildBird = WildBird(eatBehaviour : EatLeafBehaviour(), flyBehaviour : FlyHighBehaviour())
//let wildBird = WildBird(eatBehaviour : EatLeafBehaviour(), flyBehaviour : FlyLowBehaviour())
//
//class Penguin {
//	let eatBehaviour: IEatBehaviour
//
//	init(eatBehaviour : IEatBehaviour) {
//		self.eatBehaviour = eatBehaviour
//	}
//
//	func eat() {
//		eatBehaviour.eat()
//	}
//};
//
//let penguin = Penguin(eatBehaviour: EatFishBehaviour())

#include <iostream>

// Abstract class (interface equivalent)
class Setshape {
public:
	virtual void setH(double h) = 0;
	virtual void setW(double w) = 0;
	virtual double Area() const = 0;

	virtual ~Setshape() {}
};

class Rectangle : public Setshape {
private:
	double width;
	double height;
public:
	void setH(double h) override {
		height = h;
	}

	void setW(double w) override {
		width = w;
	}

	double Area() const override {
		return width * height;
	}
};

class Square : public Setshape {
private:
	double side;
public:
	void setH(double h) override {
		side = h;
	}
	void setW(double w) override {
		side = w;
	}
	double Area() const override {
		return side * side;
	}
};

int main() {
	Rectangle rect;
	rect.setH(5.0);
	rect.setW(4.0);
	std::cout << "Area of the rectangle: " << rect.Area() << std::endl;

	Square sq;
	sq.setH(5.0);
	std::cout << "Area of the square: " << sq.Area() << std::endl;

	return 0;
}
