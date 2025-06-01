#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n ; cin >> n;
    map<ll,ll>mp;
    for(int i = 0 ; i < n; i++)
    {
        ll x ; cin >> x;
        for(int j = 2 ; j <= sqrt(x) ;j++)
        {
            while(x % j == 0)
            {
                mp[j]++;
                x /= j;
            }
        }
        if(x != 1) mp[x]++;
    }
    ll ans = 1;
    for(auto x : mp)
    {
        ans *= (x.second + 1);
        ans %= (ll)(1e9 + 7);
    }
    cout << ans;
}