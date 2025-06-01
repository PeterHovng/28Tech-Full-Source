#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
ll powMOD(ll a , ll b , ll m)
{
    ll res = 1;
    a %= MOD;
    while(b)
    {
        if(b % 2 == 1)
        {
            res *= a;
            res %= MOD;
        }
        a *= a;
        a %= MOD;
        b /= 2;
    }
    return res;
}
int main()
{
    int n ; cin >> n;
    int sum = n * (n + 1) / 2;
    if(sum % 2 != 0)
    {
        cout << 0;
    }
    else
    {
        sum /= 2;
        ll dp[sum + 1];
        memset(dp , 0 , sizeof(dp));
        dp[0] = 1; 
        for(int i = 1 ; i <= n ; i++)
        {
            for(int j = sum ; j >= i ; j--)
            {
                dp[j] += dp[j - i];
                dp[j] %= MOD;
            }
        }
        cout << (dp[sum] * (powMOD(2 , MOD - 2 , MOD))) % MOD;
    }
    return 0;
}