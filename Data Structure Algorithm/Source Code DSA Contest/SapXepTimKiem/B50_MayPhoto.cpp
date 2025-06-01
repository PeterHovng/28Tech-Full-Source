#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n , a , b ; cin >> n >> a >> b;
    ll res = min(a , b);
    ll l = 0 , r = res * n;
    ll ans = 0;
    while(l <= r)
    {
        ll mid = (l + r) / 2;
        if(mid / a + mid / b >= n - 1)
        {
            ans = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    }
    cout << ans + res;
}
