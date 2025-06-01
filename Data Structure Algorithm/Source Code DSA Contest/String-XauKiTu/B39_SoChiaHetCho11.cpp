#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;

int main()
{
    string s ; cin >> s;
    ll sum = 0 , res = 0;
    for(int i = 0 ; i < s.length() ; i++)
    {
        if(i % 2 == 0)
        {
            sum += s[i] - '0';
        }
        else res += s[i] - '0';
    }
    if((sum -res)% 11 == 0) cout << "YES";
    else cout << "NO";
    return 0;
}
