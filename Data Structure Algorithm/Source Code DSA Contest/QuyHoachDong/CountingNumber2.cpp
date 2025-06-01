#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
typedef long long ll;
ll init(int n , int x)
{
    ll dp[11][100][2];
    memset(dp, 0, sizeof(dp));
    string s = to_string(n);
    for(int i = 0 ; i < s[0] - '0' ; i++)
    {
        dp[0][i][1] = 1;
    }
    dp[0][s[0] - '0'][0] = 1;
    for(int i = 1 ; i < s.size() ; i++)
    {
        for(int j = 0 ; j <= 9 ; j++)
        {
            for(int sum = j ; sum <= x ; sum++)
            {
                dp[i][sum][1] += dp[i - 1][sum - j][1];
                if(j < s[i] - '0')
                {
                    dp[i][sum][1] += dp[i - 1][sum - j][0];
                }
                if(j == s[i] - '0')
                {
                    dp[i][sum][0] += dp[i - 1][sum - j][0];
                }
            }
        }
    }
    int m = s.size();
    ll ans = dp[m - 1][x][1] + dp[m - 1][x][0];
    return ans;
}
int main()
{
    int a , b ; cin >> a >> b;
    ll res = 0 , sum = 0;
    int c[100] = {2,3 ,5, 7, 11, 13, 17, 19 ,23, 29, 31, 37, 41 ,43 ,47 ,53 ,59 ,61, 67, 71, 73, 79};
    for(int i = 0 ; i < 22 ; i++)
    {
        res += init(a - 1 , c[i]);
        sum += init(b , c[i]);
    }
    cout << sum - res;
}