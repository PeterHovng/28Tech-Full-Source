#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e6 + 1;
const int MOD = 1e9 + 7;
int main()
{
    int t ; cin >> t;
    ll ans = 1;
    while(t--)
    {
        int a , b; cin >> a >> b;
        ans *= (b + 1);
        ans %= MOD;
    }
    cout << ans;
}