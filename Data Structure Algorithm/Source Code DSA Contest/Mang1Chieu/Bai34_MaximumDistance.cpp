#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
typedef long long ll;
int main()
{
    int n , k ; cin >> n >> k;
    map<int,int>mp;
    int ans = 0;
    for(int i = 0 ; i < n ;i++)
    {
        int x ; cin >> x;
        if(mp.find(k + x) != mp.end())
        {
            ans = max(ans , i - mp[k + x]);
        }
        if(mp.find(x - k) != mp.end())
        {
            ans = max(ans , i - mp[x - k]);
        }
        if(mp.find(x) == mp.end())
        {
            mp[x] = i;
        }
    }
    if(ans == 0) cout << -1;
    else cout << ans;
}