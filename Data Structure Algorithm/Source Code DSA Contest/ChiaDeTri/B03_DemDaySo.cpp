#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

ll powMod(ll n , ll k)
{
    if(k == 0) return 1;
    ll x = powMod(n , k / 2);
    if(k % 2 == 1)
    {
        return (((x % MOD) * (x % MOD)) % MOD *(n % MOD)) % MOD;
    }
    else
    {
        return ((x % MOD) *(x % MOD)) % MOD;
    }
}

int main()
{
   ll n ; cin >> n;
   cout << powMod(2 , n - 1);
}
