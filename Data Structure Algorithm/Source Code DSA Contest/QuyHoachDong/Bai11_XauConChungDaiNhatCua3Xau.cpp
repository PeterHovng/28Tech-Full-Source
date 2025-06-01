#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    string s1 , s2 , s3 ; cin >> s1 >> s2 >> s3;
    int n = s1.length(), m = s2.length() , z = s3.length();
    s1 = "a" + s1 ; s2 = "b" + s2 ; s3 = "c" + s3;
    int dp[n + 1][m + 1][z + 1];
    memset(dp , 0 , sizeof(dp));
    for(int i = 1 ; i <= n ;i++)
    {
        for(int j = 1 ; j <= m ; j++)
        {
            for(int k = 1 ; k <= z ; k++)
            {
                if(s1[i] == s2[j] && s2[j] == s3[k])
                {
                    dp[i][j][k] = dp[i - 1][j - 1][k - 1] + 1;
                }
                else dp[i][j][k] = max(dp[i][j][k - 1] , max(dp[i - 1][j][k] , dp[i][j - 1][k]));
            }
        }
    }
    cout << dp[n][m][z];
}