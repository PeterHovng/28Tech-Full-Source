#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e6 + 1 , MOD = 1e9 + 7;
ll gt[maxn];
void giaithua()
{
    gt[0] = 1;
    for(int i = 1 ; i <= 1e6 ; i++)
    {
        gt[i] = gt[i - 1] * i;
        gt[i] %= MOD;
    }
}
ll powMod(ll a , ll b , ll m)
{
    a %= m;
    ll res = 1;
    while(b)
    {
        if(b % 2 == 1)
        {
            res *= a;
            res %= m;
        }
        a *= a;
        b /= 2;
        a %= m;
    }
    return res;
}
int main()
{
    int n , k ; cin >> n >> k;
    giaithua();
    ll res = gt[k] * gt[n - k] % MOD;
    ll r = powMod(res , MOD - 2 , MOD);

    cout << gt[n] * r % MOD;
}