#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
typedef long long ll;
int main()
{
    int n , q ; cin >> n >> q;
    int a[n]; for(int i = 0 ; i < n;i++) cin >> a[i];
    int arr[n + 1] = {}; memset(arr, sizeof(arr) , 0);
    while(q--)
    {
        int x , y ; cin >> x >> y;
        arr[x - 1] += 1;
        arr[y] -= 1;
    }
    for(int i = 1 ; i <= n - 1 ; i++)
    {
        arr[i] += arr[i - 1];
    }
    sort(arr , arr + n);
    sort(a , a + n);
    ll ans = 0;
    for(int i = 0 ;i < n ; i++)
    {
        ans += 1ll*arr[i] * a[i];
    }
    cout << ans;
    return 0;
}