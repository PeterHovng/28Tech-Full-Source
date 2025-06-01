#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    vector<pair<int, int>> freq;

    // Duyệt qua từng phần tử trong mảng A
    for (int i = 0; i < N; ++i) {
        bool found = false;
        // Kiểm tra xem phần tử đã xuất hiện trong vector freq hay chưa
        for (int j = 0; j < freq.size(); ++j) {
            if (freq[j].first == A[i]) {
                freq[j].second++; // Tăng tần suất
                found = true;
                break;
            }
        }
        // Nếu chưa xuất hiện, thêm vào vector
        if (!found) {
            freq.push_back(make_pair(A[i], 1));
        }
    }

    // In kết quả
   for(pair<int ,int > p : freq){
    cout << p.first << " " << p.second << endl;
   }

    return 0;
}
