#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
typedef long long ll;
int main()
{
    int n ; cin >> n;
    int a[n]; for(int &x : a) cin >> x;
    map<int,int>mp;
    ll sum = 0;
    mp[0] = 1;
    bool ok = false;
    for(int i = 0 ; i < n ;i++)
    {
    	sum += a[i];
    	if(mp[sum] == 1)
    	{
    		ok = true; break;
		}
		mp[sum] = 1;
	}
	if(ok) cout << 1;
	else cout << -1;
}