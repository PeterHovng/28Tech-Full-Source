#include <iostream>
#include <vector>

using namespace std;

vector<int> unique_vector(vector<int> v) {
    for (int i = 0; i < v.size() - 1; ) {
        if (v[i] == v[i + 1]) {
            v.erase(v.begin() + i + 1);  // Xóa phần tử thứ i + 1 nếu nó trùng với phần tử i
        } else {
            i++;  // Chỉ tăng i khi không xóa
        }
    }
    return v;
}

vector<int> nhap() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    return v;
}

void in(vector<int> v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> v = nhap();
    vector<int> res = unique_vector(v);
    in(res);
}
