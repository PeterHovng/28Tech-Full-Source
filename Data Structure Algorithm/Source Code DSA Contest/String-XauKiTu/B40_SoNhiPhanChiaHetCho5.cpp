#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

bool check(string s)
{
    ll lt = 1;
    ll sum = (s[s.length() - 1] - '0' ) % 5;
    for(int i = s.length() - 2 ; i >= 0 ;i--)
    {
        lt *= 2;
        lt %= 5;
        sum += (s[i] - '0') * lt;
        sum %= 5;
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
