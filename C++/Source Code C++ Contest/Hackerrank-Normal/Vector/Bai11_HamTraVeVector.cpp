#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// Hàm kiểm tra số nguyên tố
bool is_prime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// Hàm trả về vector chứa các số nguyên tố
vector<int> prime_list(vector<int> v) {
    vector<int> primes;
    for (int x : v) {
        if (is_prime(x)) {
            primes.push_back(x);
        }
    }
    return primes;
}

// Hàm nhập vector
void nhap(vector<int>& v, int n) {
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
}

// Hàm in vector
// nếu muốn thay đổi giá trị vector phải có tham chiếu vì nó không như mảng cái này coi như là kiểu dữ liệu bình thường 
void in(const vector<int>& v) {
    for (int x : v) {
        cout << x << " ";
    }
    cout << endl;
}

int main() {
    int N;
    cin >> N; // Nhập số lượng phần tử
    vector<int> v;
    nhap(v, N); // Nhập các phần tử vào vector
    vector<int> res = prime_list(v); // Lấy các số nguyên tố từ vector
    in(res); // In kết quả
}
