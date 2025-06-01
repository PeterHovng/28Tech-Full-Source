#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n; 
    cin >> n; // Đọc số lượng phần tử cần xử lý
    vector<pair<char,int>> v; // Khai báo vector chứa các cặp (ký tự, số nguyên)
    
    while(n--){
        char c; 
        int digit;
        cin >> c >> digit; // Đọc ký tự và số nguyên
        
        // Kiểm tra xem ký tự có phải là nguyên âm (a, e, i, o, u) không
        if(c == 'o' || c == 'a' || c == 'i' || c == 'e' || c == 'u'){
            v.push_back({c, digit}); // Nếu đúng thì thêm cặp vào vector
        }
    }
    
    reverse(v.begin(), v.end()); // Đảo ngược vector
    
    // Kiểm tra nếu vector không rỗng
    if(!v.empty()){
        for(auto it : v){ // Duyệt qua tất cả các phần tử trong vector
            cout << it.first << " " << it.second << endl; // In ra ký tự và số tương ứng
        }
    }
    else {
        cout << "28tech"; // Nếu vector rỗng, in ra "28tech"
    }
    
    return 0;
}
