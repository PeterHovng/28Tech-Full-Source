#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ; cin >> n;
    int a[n]; for(int &x : a) cin >> x;
    int dp1[n] ; 
    int dp2[n] ;
    for(int i = 0 ; i < n;i++)
    {
        dp1[i] = a[i];
        for(int j = 0 ; j < i ; j++)
        {
            if(a[j] < a[i]) dp1[i] = max(dp1[i] , dp1[j] + a[i]);
        }
    }
    for(int i = n - 1 ; i >= 0 ; i--)
    {
        dp2[i] = a[i];
        for(int j = n - 1 ; j > i ; j--)
        {
            if(a[j] < a[i]) dp2[i] = max(dp2[i] , dp2[j] + a[i]);
        }
    }
    int Max = 0;
    for(int i = 0 ; i < n ; i++)
    {
        Max = max(dp1[i] + dp2[i] - a[i] , Max);
    }
    cout << Max;
    return 0;
}
