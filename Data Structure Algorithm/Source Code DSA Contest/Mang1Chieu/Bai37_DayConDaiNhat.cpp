#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
typedef long long ll;
int main()
{
    int n , k ; cin >> n >> k;
    ll sum = 0 , a[n];
    for(ll &x : a) cin >> x;
    map<int,int>mp;
    int l = 0 , ans = 0;
    mp[0] = -1;
    for(int i = 0 ; i < n ; i++)
    {
    	sum += a[i];
    	sum = (sum % k + k) % k;
    	if(mp.find(sum) != mp.end())
    	{
    		ans = max(ans , i - mp[sum]);
		}
		else mp[sum] = i;
	}
	if(ans == 0) cout << -1;
	else cout << ans;
}