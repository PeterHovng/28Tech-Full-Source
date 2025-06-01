#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e7 + 1;
const int MOD = 1e9 + 7;
ll powmod(ll a , ll b)
{
    ll res = 1;
    a %= MOD;
    while(b)
    {
        if(b % 2 == 1)
        {
            res *= a;
            res %= MOD;
        }
        a *= a;
        b /= 2;
        a %= MOD;
    }
    return res;
}
int main()
{
    ll a , b ; cin >> a >>b;
    cout << powmod(a , b);
}
