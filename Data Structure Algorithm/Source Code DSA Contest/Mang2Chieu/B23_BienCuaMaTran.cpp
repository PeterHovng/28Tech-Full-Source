#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

int main()
{
    int n ; cin >> n;
    int a[n][n];
    for(int i = 0 ;i < n ;i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            cin >> a[i][j];
        }
    }
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            if(i == 0 || j == 0 || j == n - 1 || i == n - 1)
            {
                cout << a[i][j] << " ";
            }
        }
    }
}