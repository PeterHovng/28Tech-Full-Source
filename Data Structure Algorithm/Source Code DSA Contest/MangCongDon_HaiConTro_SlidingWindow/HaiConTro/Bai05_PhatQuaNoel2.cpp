#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
typedef long long ll;

int main()
{
    int n, s ; cin >> n >> s;
    int ans = MOD ,sum = 0, l = 0 , a[n];
    for(int i = 0 ; i < n ;i++) cin >> a[i];
    for(int i = 0 ; i < n ;i++)
    {
        sum += a[i];
        while(sum >= s)
        {
            ans = min(ans , i - l + 1);
            sum -= a[l++];
        }
    }
    cout << (ans == MOD ? -1 : ans);
	return 0;
}