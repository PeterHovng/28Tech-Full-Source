#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void nhap(vector<vector<int>> &v, int n, int m) {
    v.resize(n, vector<int>(m)); // Khởi tạo kích thước cho vector 2 chiều
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> v[i][j];
        }
    }
}

void xuat(const vector<vector<int>> &v, int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << v[i][j] << " "; // Thêm khoảng trắng giữa các phần tử
        }
        cout << endl; // Xuống dòng sau mỗi hàng
    }
}

void lat(vector<vector<int>> &v, int n, int m) {
    for (int i = 0; i < n; ++i) {
        reverse(v[i].begin(), v[i].end()); // Lật ngược từng hàng
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v;
    nhap(v, n, m);
    lat(v, n, m);
    xuat(v, n, m);
    return 0;
}
