#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
const int maxn = 1e6 + 1;
int cnt[maxn];
ll powMOD(ll a , ll b , ll m)
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
    int t ; cin >> t;
    while(t--)
    {
        int a , b , c ; cin >> a >> b >> c;
        ll r = powMOD(b , c , MOD - 1);
        cout << powMOD(a , r , MOD) <<endl;
    }
}