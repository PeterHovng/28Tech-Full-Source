#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check(ll a[] , ll n , ll mid , ll t)
{
    ll cnt = 0;
    for(int i = 0 ; i < n ; i++)
    {
        cnt += mid / a[i];
    }
    if(cnt >= t) return true;
    else return false;
}
int main()
{
    ll n , t ; cin >> n >> t;
    ll a[n];
    for(int i = 0 ;i  < n ; i++) cin >> a[i];
    ll l = 0 , r = *min_element(a , a + n) * t;
    ll res = 0;
    while(l <= r)
    {
        ll mid = (l + r) / 2;
        if(check(a , n , mid , t))
        {
            res = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << res;
}
