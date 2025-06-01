#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

int main()
{
    int n ; cin >> n;
    int a[n][n] , ans = 1;
    int h1 = 0 , h2 = n - 1 , c1 = 0 , c2 = n - 1 ;
    while(h1 <= h2 && c1 <= c2)
    {
        for(int i = c1 ; i <= c2 ; i++)
        {
            a[h1][i] = ans++;
        }
        ++h1;
        for(int i = h1 ; i <= h2 ; i++) 
        {
            a[i][c2] = ans++;
        }
        --c2;
        if(h1 < h2)
        {
            for(int i = c2 ; i >= c1 ; i--)
            {
                a[h2][i] = ans++;
            }
            --h2;
        }
        if(c1 < c2)
        {
            for(int i = h2 ; i >= h1 ; i--)
            {
                a[i][c1] = ans++;
            }
            ++c1;
        }
    }
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}