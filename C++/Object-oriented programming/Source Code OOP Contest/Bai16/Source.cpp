#include<iostream>
#include<string>
#include<vector>
using namespace std;

/*
1. Bien tinh
- Một biến dùng chung cho mọi đối tượng thuộc lớp.
- Nó được khởi tạo vùng nhớ 1 lần duy nhất ngay khi chương trình
  được nạp vào bộ nhớ để thực thi và huỷ khi kết thúc chương trình.
*/


class Cat {
private:
	int _height;
	int _weight;
	static int count;
public:
	Cat() {};
	Cat(int height, int weight) {
		_height = height;
		_weight = weight;
		count++;
	}
	static int getCount() {
		return count;
	}
	static void getAttibute() {
		cout << "Ham tinh" << endl;
	}
};
int Cat::count = 0;

int main() {
	Cat cat;
	cout << "So luong meo: " << cat.getCount() << endl;
	Cat BlackCat(12, 14);
	cout << "So luong meo: " << cat.getCount() << endl;
	Cat WhiteCat(11, 14);
	cout << "So luong meo: " << cat.getCount() << endl;
	Cat BlueCat(12, 14);
	cout << "So luong meo: " << cat.getCount() << endl;
	cat.getAttibute();
}