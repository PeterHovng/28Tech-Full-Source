#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
typedef long long ll;
const int maxn = 2e6 + 1;
ll gt[maxn];
void giaithua()
{
    gt[0] = gt[1] = 1;
    for(int i = 2 ; i <= maxn ; i++)
    {
        gt[i] = gt[i - 1] * i;
        gt[i] %= MOD;
    }
}
ll powMod(ll a , ll b)
{
    ll res = 1;
    while(b)
    {
        if(b & 1)
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
ll modulo(ll a , ll b)
{
    return ((a % MOD) * (b % MOD)) % MOD;
}
int main()
{
    int n ; cin >> n;
    if(n % 2 == 1)
    {
        cout << 0;
        return 0;
    }
    giaithua();
    n /= 2;
    ll m = modulo(gt[n] , gt[n + 1]);
    ll reverse = powMod(m , MOD - 2);
    cout << modulo(gt[2*n] , reverse);
    return 0;
}