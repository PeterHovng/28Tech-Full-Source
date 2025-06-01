#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

int main()
{
    int n , k ; cin >> n >> k;
    int dp[n + 1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 1 ; j <= min(i , k) ; j++)
        {
            dp[i] += dp[i - j];
            dp[i] %= MOD;
        }
    }
    cout << dp[n];
}
