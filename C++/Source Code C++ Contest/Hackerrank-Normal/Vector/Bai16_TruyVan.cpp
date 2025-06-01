#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;

    vector<vector<int>> table(N);

    // Nhập dữ liệu cho bảng số
    for (int i = 0; i < N; ++i) {
        int M;
        cin >> M;
        table[i].resize(M);
        for (int j = 0; j < M; ++j) {
            cin >> table[i][j];
        }
    }

    // Xử lý các truy vấn
    for (int i = 0; i < Q; ++i) {
        int x, y;
        cin >> x >> y;
        cout << table[x - 1][y - 1] << endl; // Chú ý chỉ số bắt đầu từ 0 nên cần -1
    }

    return 0;
}
