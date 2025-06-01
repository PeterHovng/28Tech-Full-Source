#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Hàm chuyển đổi số nguyên 'n' sang dạng nhị phân và trả về dưới dạng vector<int>
vector<int> convert_number(long long n) {
    vector<int> v;
    
    // Chuyển số 'n' sang dạng nhị phân và thêm các chữ số (bit) vào vector 'v'
    while (n != 0) {
        int digit = n % 2; // Lấy phần dư khi chia cho 2, giá trị sẽ là 0 hoặc 1
        v.push_back(digit); // Thêm bit vào cuối vector
        n = n / 2; // Giảm n đi bằng cách chia cho 2
    }

    // Đảm bảo vector chứa đủ 64 bit bằng cách thêm các bit 0 nếu cần thiết
    while (v.size() < 64) {
        v.push_back(0);
    }

    // Đảo ngược vector để các bit ở đúng thứ tự (từ trái sang phải)
    reverse(v.begin(), v.end());

    return v; // Trả về vector chứa các bit của 'n'
}

int main() {
    int t; 
    cin >> t; // Đọc vào số lượng test case
    while (t--) {
        long long n;
        cin >> n; // Đọc vào giá trị của 'n' cho mỗi test case
        vector<int> bin = convert_number(n); // Chuyển đổi 'n' sang dạng nhị phân
        for (int x : bin) {
            cout << x;
        }
        cout << endl; 
    }
    return 0;
}
