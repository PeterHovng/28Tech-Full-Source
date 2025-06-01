#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

int main()
{
    int n , s ; cin >> n >> s;
    vector<int>a(n);
    for(int i = 0 ; i < n ;i++) cin >> a[i];
    int dp[s + 1]; memset(dp , 0 , sizeof(dp));
    dp[0] = 1;
    for(int i = 0 ; i <= s ; i++)
    {
        for(int j = 0 ; j < n ;j++)
        {
            if(a[j] <= i)
            {
                dp[i] += dp[i - a[j]];
                dp[i] %= MOD;
            }
        }
    }
    cout << dp[s];
    return 0;
}
