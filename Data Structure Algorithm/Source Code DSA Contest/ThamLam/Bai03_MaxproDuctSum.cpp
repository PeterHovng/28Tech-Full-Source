#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

int main()
{
    int n ; cin >> n;
    int a[n];
    for(int i = 0 ; i < n ;i++)
    {
        cin >> a[i];
    }
    sort(a , a + n);
    ll ans = 0;
    for(int i = 0 ; i < n ;i++)
    {
        ans += 1ll*a[i] * i ;
        ans %= MOD;
    }
    cout << ans;
}
