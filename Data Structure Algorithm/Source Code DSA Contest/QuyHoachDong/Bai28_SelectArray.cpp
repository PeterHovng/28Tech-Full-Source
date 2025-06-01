#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

ll dp[100001][200];

int main()
{
    int n , m ; cin >> n >>m;
    int a[n + 1];
    for(int i = 0; i < n ;i++) cin >> a[i];
    if(a[0] == 0)
    {
        for(int i = 1 ; i <= m ;i++)
        {
            dp[0][i] = 1;
        }
    }
    else
    {
        dp[0][a[0]] = 1;
    }
    for(int i = 1 ; i < n ;i++)
    {
        if(a[i] == 0)
        {
            for(int j = 1 ; j <= m ; j++)
            {
                for(int k = -1 ; k <= 1 ; k++)
                {
                    int ans = j + k;
                    if(ans >= 1 && ans <= m)
                    {
                        dp[i][j] += dp[i - 1][ans];
                        dp[i][j] %= MOD;
                    }
                }
            }
        }
        else
        {
            for(int k = -1 ; k <= 1 ; k++)
            {
                int ans = a[i] + k;
                if(ans >= 1 && ans <= m)
                {
                    dp[i][a[i]] += dp[i - 1][ans];
                    dp[i][a[i]] %= MOD;
                }
            }
        }
    }
    ll sum = 0;
    for(int i = 1 ;i  <= m ; i++)
    {
        sum += dp[n - 1][i];
        sum %= MOD;
    }
    cout << sum;
    return  0;
}
