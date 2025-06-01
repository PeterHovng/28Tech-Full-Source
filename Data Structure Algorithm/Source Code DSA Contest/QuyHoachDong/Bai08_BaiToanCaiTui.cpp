#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

struct bag
{
    int kg , gt;
};
int main()
{
    int n , m ; cin >> n >> m;
    bag a[n + 1]; 
    for(int i = 1 ; i <= n; i++) cin >> a[i].kg;
    for(int i = 1 ; i <= n ;i++) cin >> a[i].gt;
    int dp[n + 1][m + 1];
    memset(dp , 0 , sizeof(dp));
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 1 ; j <= m ; j++)
        {
            dp[i][j] = dp[i - 1][j];
            if(j >= a[i].kg)
            {
                dp[i][j] = max(dp[i][j] , dp[i - 1][j - a[i].kg] + a[i].gt);
            }
        }
    }
    cout << dp[n][m];
}