#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
typedef long long ll;
int main()
{
    int n , k; cin >> n >> k;
    ll sum = 0;
    int a[n];
    for(int i = 0 ; i < n ; i++) cin >> a[i];
    int l = 0 , ans = MOD;
    for(int i = 0 ; i < n ;i++)
    {
        sum += a[i];
        while(sum >= k)
        {
            if(sum == k)
             {
                ans = min(ans , i - l + 1);
              }
            sum -= a[l++];
        }
    }
    if(ans == MOD) cout << -1;
    else cout << ans;
}