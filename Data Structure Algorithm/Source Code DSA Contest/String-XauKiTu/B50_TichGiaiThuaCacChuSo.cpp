#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;
 
void solve(string s){
    string res ="";
    for(char x : s){
        if(x == '4'){
            res += "322";
        }
        else if(x == '6'){
            res += "35";
        }
        else if(x == '8'){
            res += "2227";
        }
        else if(x == '9'){
            res += "3327";
        }
        else if(x != '1' && x!= '0') res += x;
    }
    sort(res.begin(), res.end(), greater<char>());
    cout << res << endl;
}
int main()
{
    string s; cin >> s;
    solve(s);
    return 0;
}
