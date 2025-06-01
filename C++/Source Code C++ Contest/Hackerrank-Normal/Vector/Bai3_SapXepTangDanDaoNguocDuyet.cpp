#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
#include<cmath>
using namespace std;
int main(){
	// khai bao n là số lượng phần tử trong vector
	int n ;cin >> n ;
	vector<int> v(n);
	//nhập giá trị cho từng vị trí trong vector
	for(int i = 0 ; i < n ; i++){
		cin >> v[i];
	}
	// hàm sắp xếp tăng dần và ở đây là sắp xếp tăng dần trong vector
	sort(v.begin(), v.end());
	// duyệt vector theo iterator 
	for(vector<int> :: iterator it = v.begin();it != v.end(); it++){
		cout << *it << " ";
	}
	cout << endl;
	// đảo ngược vector
	for(vector<int> :: reverse_iterator it = v. rbegin(); it != v.rend();it++){
		cout << *it << " ";
	}
}