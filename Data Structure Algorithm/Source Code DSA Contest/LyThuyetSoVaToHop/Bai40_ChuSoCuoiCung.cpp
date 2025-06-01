#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e7 + 1;
const int MOD = 1e9 + 7;
ll powMod(ll a , ll b)
{
    a %= 10;
    ll res = 1;
    while(b)
    {
        if(b % 2 == 1)
        {
            res *= a;
            res %= 10;
        }
        a *= a;
        a %= 10;
        b /= 2;
    }
    return res;
}
int main()
{
    ll n ; cin >> n;
    cout << powMod(1378 , n);
}
