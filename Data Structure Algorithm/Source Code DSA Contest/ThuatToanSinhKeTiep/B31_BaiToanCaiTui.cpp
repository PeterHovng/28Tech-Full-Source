#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

int main()
{
    int n , m ; cin >> n >> m;
    ll dp[n + 2][m + 2];
    int v[n + 1] , w[n + 1];
    for(int i = 1 ; i <= n ; i++)
    {
        cin >> v[i];
    }
    for(int i = 1 ; i <= n ; i++)
    {
        cin >> w[i];
    }
    memset(dp , 0 , sizeof(dp));
    for(int i = 1 ; i <= n;i++)
    {
        for(int j = 0 ; j <= m ; j++)
        {
            dp[i][j] = dp[i - 1][j];
            if(j >= v[i] && dp[i][j] < dp[i - 1][j - v[i]] + w[i])
            {
                dp[i][j] =dp[i - 1][j - v[i]] + w[i];
            }
        }
    }
    cout << dp[n][m];
    return 0;
}
