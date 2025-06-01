#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m ; cin >> n >> m;
    int dp[n + 1][m + 1];
    memset(dp , 0 , sizeof(dp));
    for(int i = 1 ; i <= n ;i++)
    {
        for(int j = 1 ; j <= m ; j++)
        {
            int x ; cin >> x;
            dp[i][j] = dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1] + x;
        }
    }
    int q ; cin >> q;
    while(q--)
    {
        int h1 , h2 , c1 , c2 ; cin >> h1 >> h2 >> c1 >> c2;
        cout << dp[h2][c2] - dp[h2][c1 - 1] - dp[h1 - 1][c2] + dp[h1 - 1][c1 - 1] << endl;
    }
}