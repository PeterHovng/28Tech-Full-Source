#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main()
{
    ll n , x ; cin >> n >> x;
    map<ll,int>mp;
    ll ans = 0;
    mp[0] = 1;
    ll sum = 0;
    for(int i = 0 ; i < n ; i++)
    {
        int a ; cin >> a;
        sum += a;
        ans += mp[sum - x];
        mp[sum]++;
    }
    cout << ans;
}