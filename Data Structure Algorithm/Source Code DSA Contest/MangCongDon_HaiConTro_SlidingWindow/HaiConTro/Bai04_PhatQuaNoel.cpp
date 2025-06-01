#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
typedef long long ll;

int main()
{
    int n , s ; cin >> n >> s;
    ll ans = 0 , l = 0 , a[n];
    for(int i = 0 ;i  < n;i++) cin >> a[i];
    ll sum = 0;
    for(int i = 0 ; i < n;i++)
    {
        sum += a[i];
        while(sum > s)
        {
            sum -= a[l];
            ++l;
        }
        ans = max(ans , i - l + 1);
    }
    cout << ans;
	return 0;
}