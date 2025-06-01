#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n ; cin >> n;
    int a[n];
    for(int i = 0 ; i < n ;i++)
    {
        cin >>a[i];
    }
    int sum = accumulate(a , a + n , 0);
    int dp[sum + 1];
    memset(dp , false , sizeof(dp));
    dp[0] = true;
    for(int i = 0 ; i < n ;i++)
    {
        for(int j = sum ; j >= a[i] ; j--)
        {
            if(dp[j - a[i]])
            {
                dp[j] = true;
            }
        }
    }
    for(int i = 0 ; i <= sum ; i++)
    {
        if(dp[i])
        {
            cout << i << " ";
        }
    }
}
