#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;

bool check(string s)
{
    ll sum = 0;
    for(int i = 0 ; i < s.length() ; i++)
    {
        sum = sum * 10 + (s[i] - '0');
        sum %= 25;
    }
    if(sum == 0) return true;
    else return false;
}
int main()
{
    string s ; cin >> s;
    if(check(s)) cout << "YES";
    else cout << "NO";
    return 0;
}
