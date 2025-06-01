#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<iterator>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> v(n);
    
    // Nhập các phần tử vào vector
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int L, R;
    cin >> L >> R;

    // Đảo ngược toàn bộ vector
    reverse(v.begin(), v.end());
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // Đảo ngược đoạn từ L đến R (bao gồm cả vị trí R)
    // Sử dụng R + 1 vì hàm reverse() làm việc trên đoạn [first, last), không bao gồm last.
    reverse(v.begin() + L, v.begin() + R + 1); 
    
    // In lại kết quả sau khi đảo ngược đoạn L đến R
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    return 0 ; 
}
