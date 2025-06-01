#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    string s ; cin >> s;
    ll dp[s.length()];
    dp[0] = s[0] - '0';
    for(int i = 1 ; i < s.length() ; i++)
    {
        dp[i] = dp[i - 1] * 10 + (i + 1) * (s[i] - '0');
    }
    ll sum =  0;
    for(int i = 0 ; i < s.length() ; i++)
    {
        sum += dp[i];
    }
    cout << sum;
}