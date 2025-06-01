#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n , s; cin >> n >> s;
    int a[n]; for(int i = 0 ; i < n ; i++) cin >> a[i];
    ll ans = 0 , sum = 0 , l = 0;
    for(int i = 0 ; i < n ; i++)
    {
        sum += a[i];
        while(sum > s)
        {
            sum -= a[l];
            ++l;
        }
        ans += i - l + 1;
    }
    cout << ans;
    return 0;
}