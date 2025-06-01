#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

ll powMod(ll a , ll b , ll mod)
{
    a %= mod; ll res = 1;
    while(b)
    {
        if(b % 2 ==1 )
        {
            res *= a;
            res %= mod;
        }
        a *= a;
        a %= mod;
        b /= 2;
    }
    return res;
}
int main()
{
    ll a ; cin >> a;
    cout << powMod(a , MOD - 2 , MOD);
}