#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n ; cin >> n;
    int a[n][n];
    for(int i = 0 ; i < n;i++) for(int j = 0 ; j < n ;j++)
    {
        cin >> a[i][j];
    }
    for(int i = 1 ; i < n;i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            if(j == 0) a[i][j] += max(a[i - 1][j] , a[i - 1][j + 1]);
            else if(j == n - 1) a[i][j] += max(a[i - 1][j] , a[i - 1][j - 1]);
            else
            {
                a[i][j] += max({a[i - 1][j] , a[i - 1][j - 1] , a[i - 1][j + 1]});
            }
        }
    }
    cout << *max_element(a[n - 1] , a[n - 1] + n);
    
}