#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n; 
    cin >> n;
    vector<int> v;
    
    for (int i = 0; i < n; i++) {
        int tt;
        cin >> tt;
        
        if (tt == 1) {
            int add;
            cin >> add;
            v.push_back(add);
        }
        
        else if (tt == 2) {
            if (!v.empty()) {  // Kiểm tra vector có rỗng không trước khi pop
                v.pop_back();
            }
        }
    }
    
    if (v.empty()) {
        cout << "EMPTY";
    } else {
        for (int i : v) {
            cout << i << " ";
        }
    }

    return 0;
}
