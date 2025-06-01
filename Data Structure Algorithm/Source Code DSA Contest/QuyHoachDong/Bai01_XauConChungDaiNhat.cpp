#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

int main()
{
    string s , t ; cin >> s >> t;
    int n = s.length() , m = t.length();
    int dp[n + 1][m + 1]; 
    s = "a" + s; t = "a" + t;
    memset(dp , 0 , sizeof(dp));
    for(int i = 1 ; i <= n ;i++)
    {
        for(int j = 1 ; j <= m ; j++)
        {
            if(s[i] == t[j])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j] , dp[i][j - 1]);
            }
        }
    }
    cout << dp[n][m] << endl;
}
