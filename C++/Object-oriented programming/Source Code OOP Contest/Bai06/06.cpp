#include<iostream>
#include<string>
using namespace std;

//Interface
class IFace {
public:
	virtual void show() = 0;
	virtual IFace* clone() = 0;
	virtual ~IFace() {};
};

class Face : public IFace {
private:
	string shape;
protected:
	string getShape() {
		return shape;
	}
public:
	Face() : shape("") {}

	Face(string sh) : shape(sh) {}

	virtual void show() {
		cout << "Shape: " << shape << endl;
	}

	IFace* clone() {
		IFace* f = new Face(shape);
		return f;
	}
};

class EyedFace :public Face {
private:
	int eyes;
	static int countObject;
public:
	void show() {
		Face::show();
		cout << "Eyes: " << eyes << endl;
	}

	EyedFace(string shape, int eyes) :Face(shape) {
		this->eyes = eyes;
		countObject++;
	}

	~EyedFace() {
		countObject--;
	}

	static int getObjectCount() {
		return countObject;
	}

	IFace* clone() {
		EyedFace* ef = new EyedFace(getShape(), eyes);
		return ef;
	}
};
int EyedFace::countObject = 0;

void testFace(IFace* fc) {
	IFace* a[3] = { fc, fc->clone(), fc->clone() };
	for (int i = 0; i < 3; i++) {
		a[i]->show();
	}

	for (int i =1; i < 3; i++) {
		delete a[i];
	}
}

int main() {
	Face fc; 
	Face fc1("Rectangle");
	testFace(&fc1);
	cout << "Number of EyedFace objects: " << EyedFace::getObjectCount() << endl;

	EyedFace ef1("Circle", 2);
	EyedFace ef2("Triangle", 1);
	cout << "Number of EyedFace objects: " << EyedFace::getObjectCount() << endl;
	return 0;
}

//Hãy viết thêm mã vào lớp EyedFace để đếm tổng số đối tượng (object, instance)
//của lớp đó và cập nhập mỗi khi tạo/hủy đối tượng. Sau đó hãy thêm mã vào cuối hàm main()
//để kiếm tra xem còn bao nhiêu đối tượng EyedFace trong bộ nhớ