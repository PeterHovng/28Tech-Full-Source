#include<iostream>
#include<algorithm>
#include<iterator>
#include<vector>
#include<cmath>
using namespace std;
int main(){
	// nhập n là số lượng phần tử của vector
	int n ; cin >> n ;
	vector<int> v(n);
	// duyệt để nhập từng giá trị cho mỗi phần tử trong vector
	for(int i = 0 ; i  < n ; i ++){
		cin >> v[i];
	}
	// nhập chỉ số L và R 
	int L , R;
	cin >> L >> R ;
	// Duyệt theo iterator từ vị trí L đến vị trí R 
	for(vector<int> :: iterator it = v.begin() + L ;it <= v.begin()+ R ;it ++){
		cout << *it << " ";
	}
	cout << endl;
	// Duyệt theo iterator từ vị trí R đến vị trí L
	for(vector<int> :: iterator it = v.begin() + R ; it >= v.begin() + L ; it --){
		cout << *it << " ";
	}
}