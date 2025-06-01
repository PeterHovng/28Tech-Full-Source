#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

int main()
{
    int n; cin >> n ;
    int a[n][n] , b[n][n];
    for(int i = 0 ; i < n ; i++) 
    {
        for(int j = 0 ; j < n ; j++)
        {
            cin >> a[i][j];
            b[j][i] = a[i][j];
        }
    }
    for(int i = 0 ;i  < n ; i++)
    {
        sort(b[i]  , b[i] + n);
    }
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n ; j++) 
        {
            cout << b[j][i] << " ";
        }
        cout << endl;
    }
}