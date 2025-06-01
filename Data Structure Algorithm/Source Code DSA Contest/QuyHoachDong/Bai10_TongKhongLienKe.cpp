#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

int main()
{
    int n ; cin >> n;
    int a[n + 1];
    for(int i = 1 ; i <= n;i++) cin >> a[i];
    ll dp[n];
    dp[0] = 0;
    dp[1] = a[1];
    for(int i = 2 ; i <= n ; i++)
    {
        dp[i] = max(dp[i - 1] , dp[i - 2] + a[i]);
    }
    cout << dp[n];
}
