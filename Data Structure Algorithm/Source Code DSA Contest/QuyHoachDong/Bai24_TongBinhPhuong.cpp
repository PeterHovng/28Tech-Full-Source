#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n ; cin >> n;
    int dp[n + 1];
    dp[0] = 0;
    for(int i = 1 ; i <= n ; i++)
    {
        dp[i] = i;
        for(int j = 1 ; j <= sqrt(i) ; j++)
        {
            dp[i] = min(dp[i] , dp[i - j*j] + 1);
        }
    }
    cout << dp[n];
}
