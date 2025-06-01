#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

int main()
{
    int n , m ; cin >> n >> m;
    ll a[n][m];
    for(int i = 0 ; i < n ;i++) 
    {
        for(int j = 0 ; j < m ; j++)
        {
            cin >> a[i][j];
        }
    }
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < m ; j++)
        {
            if(i == 0 && j == 0) a[i][j] = a[i][j];
            else if(i == 0) a[i][j] += a[i][j - 1];
            else if(j == 0) a[i][j] += a[i - 1][j];
            else
            {
                a[i][j] += max(a[i - 1][j] ,a[i][j - 1]);
            }
        }
    }
    cout << a[n - 1][m - 1];
}