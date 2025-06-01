#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
typedef long long ll;
int main()
{
    string s ; cin >> s;
    if(s[2] != '/') s.insert(0, "0");
    if(s[5] != '/') s.insert(3 , "0");
    cout << s;
    return 0;
}