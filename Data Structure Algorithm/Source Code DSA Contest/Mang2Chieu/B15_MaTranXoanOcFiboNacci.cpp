#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

ll F[94];

void fibo()
{
    F[0] = 0 , F[1] = 1 ;
    for(int i = 2 ; i <= 93 ; i++) 
    {
        F[i] = F[i - 1] + F[i - 2];
    }
}

int main()
{
    int n ; cin >> n;
    fibo();
    ll a[n][n] , ans = 0;
    int h1 = 0 , h2 = n - 1 , c1 = 0 , c2 = n - 1 ;
    while(h1 <= h2 && c1 <= c2)
    {
        for(int i = c1 ; i <= c2 ; i++)
        {
            a[h1][i] = F[ans++];
        }
        ++h1;
        for(int i = h1 ; i <= h2 ; i++) 
        {
            a[i][c2] = F[ans++];
        }
        --c2;
        if(h1 < h2)
        {
            for(int i = c2 ; i >= c1 ; i--)
            {
                a[h2][i] = F[ans++];
            }
            --h2;
        }
        if(c1 < c2)
        {
            for(int i = h2 ; i >= h1 ; i--)
            {
                a[i][c1] = F[ans++];
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