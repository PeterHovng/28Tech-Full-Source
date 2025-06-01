#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
int dp[1001][1001];
int main()
{
    int n , m ; cin >> n >> m;
    int a[n][m];
    for(int i = 0 ; i < n ;i++)
    {
        for(int j = 0 ; j < m ;j++)
        {
            cin >> a[i][j];
        }
    }
    int res = 0;
    for(int i = 0 ; i < n ;i++)
    {
        for(int j = 0 ; j < m ; j++)
        {
            if(i == 0 || j == 0)
            {
                dp[i][j] = a[i][j];
            }
            else
            {
                if(a[i][j])
                {
                    dp[i][j] = min(dp[i - 1][j] , min(dp[i - 1][j - 1] , dp[i][j - 1])) + 1;
                }
                else dp[i][j] = 0;
            }
            res = max(res , dp[i][j]);
        }
    }
    cout << res;
}
