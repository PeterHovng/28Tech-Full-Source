#include <iostream>
#include <vector>
using namespace std;

vector<char> nhap() {
    vector<char> v;
    char kytu;
    while (cin >> kytu) {
        v.push_back(kytu);
    }
    return v;
}

vector<char> thaydoi(vector<char> v) {
    for (int i = 0; i < v.size(); i++) {
        if (v[i] >= 'A' && v[i] <= 'Z') {
            v[i] = v[i] + 32; // Chuyển từ in hoa thành in thường
        } else if (v[i] >= 'a' && v[i] <= 'z') {
            v[i] = v[i] - 32; // Chuyển từ in thường thành in hoa
        }
    }
    return v;
}

void xuat(const vector<char> &v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<char> v = nhap();
    vector<char> res = thaydoi(v);
    xuat(res);
    return 0;
}
