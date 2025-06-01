#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;

bool check(ll n)
{
    for(ll i = 2 ; i <= sqrt(n) ; i++)
    {
        if(n % i == 0) return false;
    }
    return n > 1;
}
int main()
{
    ll x; map<ll,ll>mp;
    vector<ll>v;
    while(cin >> x)
    {
        if(check(x))
        {
            mp[x]++;
            v.push_back(x);
        }
    }
    for(auto x : v)
    {
        if(mp[x] != 0)
        {
            cout << x << " " << mp[x] << endl;
            mp[x] = 0;
        }
    }
    return 0;
}
