#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
#include<iterator>
#include<numeric> // thư viện bao gồm  accumulate để tính tổng phần tử vector

//*max_element(v.begin(), v.end());
//*min_element(v.begin(), v.end());
//accumulate(v.begin(), v.end(), 0);
using namespace std;
int main(){
	int n ; cin >> n ; 
	vector<int> v(n);
	for(int i = 0 ; i < n ; i++){
		cin >> v[i];
	}
	// tìm giá trị nhỏ nhất trong vector
	cout << *min_element(v.begin(), v.end());
	cout << endl;
	// tìm giá trị lớn nhất trong vector
	cout << *max_element(v.begin(), v.end());
	cout << endl;
	// tính tổng giá trị 
	cout << accumulate(v.begin(), v.end(), 0);
	return 0; 
}