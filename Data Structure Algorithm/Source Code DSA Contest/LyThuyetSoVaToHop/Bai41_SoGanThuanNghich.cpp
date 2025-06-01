#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
bool check(string s)
{
    int a = s[0] - '0';
    int b = s.back() - '0';
    s.erase(0 , 1);
    s.erase(s.size() - 1 , 1);
    string t = s;
    reverse(t.begin() ,t.end());
    return s == t && (a == b*2 || b == a*2);
}
int main()
{
    string s ; cin >> s;
    if(check(s)) cout << "YES";
    else cout << "NO";
}