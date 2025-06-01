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
            res *= a;
            res %= MOD;
        }
        a *= a;
        a %= MOD;
        b /= 2;
    }
    return res;
}
int main()
{
    
    int n , k ; cin >> n >> k;
    int res = 0;
    ll ans = 0;
    while(k)
    {
        int r = k % 2;
        if(r == 1)
        {
            ans += powMod(n , res);
            ans %= MOD;
        }
        ++res;
        k /= 2;
    }
    cout << ans;
}