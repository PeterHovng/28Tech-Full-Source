#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

// Hàm chuyển đổi số từ hệ thập phân sang thập lục phân
vector<char> convert_number(long long n){
    vector<char> res;
    
    // Nếu N bằng 0, ta trả về "0"
    if (n == 0) {
        res.push_back('0');
        return res;
    }

    // Tiến hành chuyển đổi số sang hệ 16
    while (n != 0) {
        int digit = n % 16;  // Lấy phần dư khi chia cho 16
        if (digit < 10) {
            res.push_back('0' + digit);  // Các chữ số từ 0 đến 9
        } else {
            res.push_back('a' + (digit - 10));  // Các chữ số từ 'a' đến 'f'
        }
        n = n / 16;  // Tiến hành chia cho 16
    }

    // Đảo ngược kết quả để có dạng đúng
    reverse(res.begin(), res.end());
    
    return res;
}

int main(){
    int t; cin >> t;  
    while(t--){
        long long n; 
        cin >> n;  
        vector<char> res = convert_number(n);
        for(char x : res){
            cout << x; 
        }
        cout << endl;  
    }
    return 0;
}
