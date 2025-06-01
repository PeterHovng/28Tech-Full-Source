#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

int main()
{
    int n ; cin >> n;
    int dp[n];
    int a[n];
    for(int i = 0 ; i < n ;i ++)
    {
        cin >> a[i];
        dp[i] = 1;
        for(int j = 0 ;j < i ; j++)
        {
            if(a[i] > a[j]) dp[i] = max(dp[i] , dp[j] + 1);
        }
    }
    cout << *max_element(dp , dp + n);
}