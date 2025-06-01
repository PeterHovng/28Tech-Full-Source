#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e6 + 1 , MOD = 1e9 + 7;
int t[maxn];
void sang()
{
    for(int i = 1 ; i <= 1e6 ;i++)
    {
        t[i] = i;
    }
    for(int i = 2 ; i <= 1e3 ; i++)
    {
        if(t[i] == i)
        {
            for(int j = i * i ; j <= 1e6 ; j += i)
            {
                if(t[j] == j)
                {
                    t[j] = i;
                }
            }
        }
    }
}
int main()
{
    ll n ; cin >> n;
    map<ll,ll>mp;
    sang();
    for(int i = 0 ; i < n; i++)
    {
        ll x ; cin >> x;
        while(x != 1)
        {
            int tmp = t[x];
            while(x % tmp == 0)
            {
                mp[tmp]++;
                x /=tmp;
            }
        }
    }
    ll ans = 1;
    for(auto x : mp)
    {
        ans *= (x.second + 1);
        ans %= (ll)(1e9 + 7);
    }
    cout << ans;
}