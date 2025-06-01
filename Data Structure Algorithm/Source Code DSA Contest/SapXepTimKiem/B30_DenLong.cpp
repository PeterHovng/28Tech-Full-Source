#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

typedef long long ll;
typedef long double ld;
const int MOD = 1e9;

int main()
{
    ll n , l ; cin >> n >> l;
    ll a[n] ; for(ll &x : a) cin >> x;
    sort(a , a + n);
    ld res = max(a[0] , l - a[n - 1]);
    for(int i = 1 ; i < n ; i ++)
    {
        res = max(res , (ld)(a[i] - a[i - 1]) / 2);
    }
    cout << fixed << setprecision(10) << res;    
    return 0;
}
