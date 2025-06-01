#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
ll dem(ll n, ll p)
{
    ll ans = 0;
    for(ll i = p ; i <= n ; i *= p)
    {
        ans += n / i;
        ans %= MOD;
    }
    return ans;
}
int main()
{
    ll n ; cin >> n;
    cout << dem(n , 5);
}