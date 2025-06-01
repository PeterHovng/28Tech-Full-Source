#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
int dp[1001][1001];
int main()
{
    int n ; cin >> n;
    char a[n + 1][n + 1];
    for(int i = 1 ; i <= n ;i++)
    {
        for(int j = 1 ; j <= n ; j++)
        {
            cin >> a[i][j];
        }
    }
    dp[1][0] = 1;
    for(int i = 1 ; i <= n ;i++)
    {
        for(int j = 1 ; j <= n ; j++)
        {
            if(a[i][j] == '.')
            {
                if(i == 1)
                {
                    dp[i][j] += dp[i][j - 1];
                }
                else if(j == 1)
                {
                    dp[i][j] += dp[i - 1][j];
                }
                else
                {
                    dp[i][j] += dp[i - 1][j] + dp[i][j - 1];
                }
            }
            else dp[i][j] = 0;
            dp[i][j] %= MOD;
        }
    }
    cout << dp[n][n];
}
