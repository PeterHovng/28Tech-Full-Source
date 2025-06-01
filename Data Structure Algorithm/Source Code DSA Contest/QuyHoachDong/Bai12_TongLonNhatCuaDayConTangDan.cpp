#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    int dp[n] ; 
    for(int i = 0 ; i < n ;i++)
    {
        dp[i] = a[i];
        for(int j = 0 ; j < i ; j++)
        {
            if(a[i] > a[j])
            {
                dp[i] = max(dp[i] , dp[j] + a[i]);
            }
        }
    }
    cout << *max_element(dp , dp + n);
    return 0;
}
