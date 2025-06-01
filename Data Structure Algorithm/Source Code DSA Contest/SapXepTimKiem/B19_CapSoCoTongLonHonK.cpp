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
        int *l = upper_bound(a + i + 1 , a + n , k - a[i]);
        if(l != a + n)
        {
            ans += (a + n) - l;
        }
    }
    cout << ans;
}