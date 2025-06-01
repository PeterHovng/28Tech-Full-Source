#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

ll dp[501][501];
int main()
{
    int n , m ; cin >> n >> m;
    for(int i = 1 ; i <= n ;i++)
    {
        for(int j = 1 ; j <= m ;j++)
        {
            dp[i][j] = MOD;
        }
    }
    for(int i = 1 ; i <= 500 ; i++)
    {
        dp[i][i] = 0;
    }
    for(int i = 1 ; i <= n ;i++)
    {
        for(int j = 1 ;j <= m ; j++)
        {
            for(int k = 1 ; k < i ; k++)
            {
                dp[i][j] = min(dp[i][j] , dp[k][j] + dp[i - k][j] + 1);
            }
            for(int k = 1 ; k < j ; k++)
            {
                dp[i][j] = min(dp[i][j] , dp[i][k] + dp[i][j - k] + 1);
            }
        }
    }
    cout << dp[n][m];
    return 0;
}
