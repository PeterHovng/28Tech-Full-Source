#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

int main()
{
    int n , m , p; cin >> n >> m >> p;
    int a[n][m] , b[m][p];
    for(int i = 0 ; i < n ; i++) 
    {
        for(int j = 0 ; j < m ; j++)
        {
            cin >> a[i][j];
        }
    }
    for(int i = 0 ;i < m ;i++)
    {
        for(int j = 0 ; j < p ; j++) 
        {
            cin >> b[i][j];
        }
    }
    ll c[n][p];
    for(int i = 0 ; i < n ;i ++)
    {
        for(int j = 0 ; j < p ; j++)
        {
            c[i][j] = 0;
            for(int k = 0 ; k < m ; k++)
            {
                c[i][j] += 1ll * a[i][k] * b[k][j];
            }
        }
    }
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < p ; j++)
        {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
}