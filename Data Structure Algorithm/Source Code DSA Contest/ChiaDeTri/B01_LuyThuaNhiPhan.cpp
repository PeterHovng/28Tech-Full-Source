#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;

ll powMod(ll n , ll k)
{
    ll res = 1;
    while(k)
    {
        if(k % 2 == 1)
        {
            res *= n;
            res %= MOD;
        }
        n *= n;
        n %= MOD;
        k /= 2;
    }
    return res;
}

int main()
{
    ll n , k ; cin >> n >> k;
    cout << powMod(n , k);
}
