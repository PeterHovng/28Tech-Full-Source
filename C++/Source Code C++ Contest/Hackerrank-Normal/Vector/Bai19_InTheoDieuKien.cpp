#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

// Hàm kiểm tra số nguyên tố
bool isPrime(int n){
    if(n < 2) return 0;  // Nếu số nhỏ hơn 2 thì không phải số nguyên tố
    for(int i = 2; i <= sqrt(n); i++){  // Kiểm tra từ 2 đến căn bậc hai của n
        if(n % i == 0) return false;  // Nếu n chia hết cho i thì không phải số nguyên tố
    }
    return true;  // Nếu không chia hết cho số nào thì là số nguyên tố
}

int main(){
    int n;
    vector<int> v;  // Vector chứa các số nguyên tố
    vector<int> v1;  // Vector chứa các số không phải nguyên tố

    // Đọc vào các số từ đầu vào
    while(cin >> n){
        if(isPrime(n)){
            v.push_back(n);  // Nếu số là nguyên tố, thêm vào vector v
        }
        else {
            v1.push_back(n);  // Nếu số không phải nguyên tố, thêm vào vector v1
        }
    }

    // Đảo ngược vector v chứa các số nguyên tố
    reverse(v.begin(), v.end());

    // In ra các số nguyên tố (sau khi đảo ngược)
    for(auto it : v){
        cout << it << " ";
    }
    cout << endl;

    // In ra các số không phải nguyên tố
    for(auto it : v1){
        cout << it << " ";
    }

    return 0;
}
