#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
typedef long long ll;

int main()
{
    int n , m ; cin >> n >> m;
    int a[n] , b[m];
    unordered_map<int,int>mp;
    for(int i = 0 ; i < n; i++) cin >> a[i] , mp[a[i]]++;
    ll ans = 0;
    for(int i = 0 ; i < m ; i++) cin >> b[i] , ans += mp[b[i]];
    cout << ans;
	return 0;
}