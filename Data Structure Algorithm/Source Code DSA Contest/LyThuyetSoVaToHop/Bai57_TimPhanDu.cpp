#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e6 + 1;
const int MOD = 1e9 + 7;
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
    ll a , b , c , m; cin >> a >> b >> c >> m;
    ll r = powMod(a , b , m);
     c = powMod(c, m- 2 , m);
    cout << r * c % m;
}