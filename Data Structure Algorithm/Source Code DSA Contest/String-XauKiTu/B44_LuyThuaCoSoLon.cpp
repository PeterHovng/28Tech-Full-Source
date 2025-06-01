#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;

ll powMod(ll a , ll b)
{
    a %= MOD;
    ll res = 1;
    while(b)
    {
        if(b % 2 == 1)
        {
            res *= a ; 
            res %= MOD;
        }
        a *= a ; 
        a %= MOD ; 
        b /= 2;
    }
    return res;
}
int main()
{
    string s; cin >>s;
    ll x ; cin >> x;
    ll sum = 0;
    for(int i = 0 ;i < s.length() ; i++)
    {
        sum = sum * 10 + s[i] - '0';
        sum %= MOD;
    }
    cout << powMod(sum , x);
}
