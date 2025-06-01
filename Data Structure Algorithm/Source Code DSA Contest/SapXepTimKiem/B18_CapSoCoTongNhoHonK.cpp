#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;

int main()
{
    int n , k ; cin >> n >> k;
    int a[n]; for(int i = 0 ; i < n ; i++) cin >> a[i];
    sort(a , a + n);
    ll ans = 0;
    for(int i = 0 ; i < n ; i++)
    {
        auto r = lower_bound(a + i + 1 , a + n , k - a[i]);
        --r;
        ans += r - (a + i);
    }
    cout << ans;
}