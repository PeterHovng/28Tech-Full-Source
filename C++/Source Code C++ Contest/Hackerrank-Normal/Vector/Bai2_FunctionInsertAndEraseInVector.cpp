#include<iostream>
#include<iterator>
#include<vector>
using namespace std;
int main(){
	// nhập m  là kích thước của vector
	int m ; cin >> m;
	vector<int> v(m);
	// duyệt theo chỉ số để nhập phần tử cho vector
	for(int i = 0 ; i < m ; i++){
		cin >> v[i];
	}
	// n la so luong thao tac
	int n ; cin >> n;
	while(n--){
		// nhập tt là  thao tác 1 hoặc 2 
		int tt;
		cin >> tt;
		// kiểm tra thao tác
		if(tt == 1){
			// nhập vào vị trí cần thêm
			int vitri; cin >> vitri;
			// nhập phần tử muốn thêm
			int add; cin >> add;
			// hàm insert để thêm phần tử 
			v.insert(v.begin() + vitri , add);
			
		}
		else if(tt == 2){
			// khai báo vị trí cần xoá
			int xoa;cin >> xoa;
			// hàm erase để xoá phần tử ở vị trí bất kỳ trong vector
			v.erase(v.begin() + xoa);
			
		}
	}
	// kiểm tra nếu vector khác rỗng in ra vector
	if(!v.empty()){
		for(int x : v){
			cout << x <<  " ";
		}
	}
	// nếu vector rỗng 
	else 
		cout << "EMPTY";
		return 0;
}