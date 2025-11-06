#include<iostream>
#include<string>
using namespace std;

//------------------------------------------------
// Câu 1:

//class Bike {
//private:
//	char* brand;
//public:
//	//---- Bo sung ----
//	//Set Bike
//	Bike(const char* _brand="") { 
//		cout << "Bike 1-para" << endl;
//		brand = _strdup(_brand); 
//	};
//
//	virtual ~Bike() {
//		cout << "Bike Des" << endl;
//		delete[] brand;
//	}
//	//-----------------
//	virtual void move(int t1) {
//		cout << "Bike move" << endl;
//		cout << brand << ": " << t1 * 12 << " " << endl;
//	}
//};
//
//class EBike : public Bike {
//public:
//	//---- Bo sung ----
//	EBike() :Bike() {
//		cout << "EBike - Default cons" << endl;
//	};
//	//-----------------
//	void move(int t2) override {
//		cout << "EBike move" << endl;
//		Bike::move(t2 * 2);
//	}
//};
//
//void display(Bike& a, EBike& b) {
//	a.move(2);
//	b.move(2);
//}
//
//int main() {
//	EBike b1, b2;
//	display(b1, b2);
//	return 0;
//}

/*
* 
b)
Xuat ra man hinh la:
: 48 : 48
- Trong ham main ta tao 2 doi tuong EBike la b1, b2. Khi truyen tham so b1, b2 vao display
  Khi goi a.move(2) do tinh da hinh nen no se goi toi move cua EBike, còn b.move(2) se goi
  toi move cua EBike va chung hien thi ra ket qua nhu nhau

c) lớp đối tượng (class) và đối tượng cụ thể (object, instance).
 <*> Dinh nghia cua (Class) va (Object)
  + Class: La mot ban thiet ke hoac mot tap hop cac huong dan de xay dung cac dac tinh cua mot doi
	doi tuong cu the sau nay.
  + Object: Chua cac thanh phan nhu cac phuong thuc (method) va thuoc tinh (attibute) de tao ra 
    cac kieu du lieu huu ich. Doi tuong xac dinh hanh vi cua lop.

  "Một bản thiết kế chi tiết cho ngôi nhà giống như là mô tả một class. 
   Tất cả những ngôi nhà được xây dựng dựa trên bản thiết kế đó 
   là những object của class. Một ngôi nhà cụ thể là một instance."

 <*> Su khac biet giua doi tuong (class) va doi tuong cu the (Object, instance):
  - Class: 
	+ La mot ban thiet ke hoac khuon mau ma tu do cac doi tuong duoc tao ra
	+ La tap hop nhung doi tuong co thuoc tinh giong nhau
	+ Mot lop chi duoc khai bao mot lan
	+ Lop duoc khai bao voi tu khoa "class"
	+ Lop khong duoc cap phat bo nho khi duoc tao
	+ Lop la mot thuc the logic
	+ Lop doi tuong: class Bike, class EBike
  - Object:
    + La mot the hien cua lop
	+ La mot thuc the trong the gioi thuc : But, may tinh, giuong..vv
	+ Mot doi tuong duoc khai bao nhieu lan theo yeu cau
	+ Doi tuong duoc khai bao voi tu khoa "new" hoac ten lop
	+ Doi tuong duoc phan bo nho moi khi khoi tao
	+ Doi tuong la mot thuc the vat ly
	+ Doi tuong cu the: b1, b2
- 
*/

//------------------------------------------------
// Câu 2:

class IFace {
public:
	virtual void show() = 0;
	virtual IFace* clone() = 0;
	virtual ~IFace() {
	}
};

class Face : public IFace {
private:
	string shape;
protected:
	string getShape() {
		return shape;
	}
public:
	Face() {
		shape = "No shape";
	}
	Face(string sh) : shape(sh) {
	}
	virtual void show() {
		cout << "Shape: " << shape << endl;
	}

	IFace* clone() {
		IFace* f = new Face(shape);
		return f;
	}

	~Face() {};
};

class EyedFace : public Face {
private:
	int eyes;
	static int countObj;
public:
	//EyedFace(string _shape, int _eyes) :Face(_shape) {
	//	countObj++;
	//};

	//void show() override {
	//	Face::show();
	//	cout << "Eyes: " << eyes << endl;
	//}
	//IFace* clone() {
	//	EyedFace* ef = new EyedFace(getShape(), eyes);
	//	return ef;
	//}

	static int getCountObj() {
		return countObj;
	}

	~EyedFace() {
		countObj--;
	}
};

void testFace(IFace* fc) {
	IFace* a[3] = { fc, fc->clone(), fc->clone() };
	for (int i = 0; i < 3; i++) {
		a[i]->show();
	}
	cout << "The same 3 lines ? ";

	for (int i = 1; i < 3; i++) {
		delete a[i];
	}
}

int EyedFace::countObj = 0;
int main() {
	Face fc;
	Face fc1("Rectangle");
	testFace(&fc1);
	cout << endl;

	EyedFace *ef;
	cout << "Count object: " << ef->getCountObj() << endl;
	return 0;
}

