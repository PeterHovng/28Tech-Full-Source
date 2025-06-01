#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

int main()
{
    int n , m ; cin >> n >>m;
    int a[n][m];
    int Min = MOD , Max = 0;
    for(int i = 0 ; i < n ; i++) 
    {
        for(int j = 0 ; j < m ; j++)
        {
            cin >> a[i][j];
            Min = min(a[i][j], Min);
            Max = max(a[i][j], Max);
        }
    }
    cout << Min <<endl;
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < m; j++)
        {
            if(a[i][j] == Min)
            {
                cout << i + 1 << " " << j + 1 << endl;
            }
        }
    }
    cout << Max << endl;
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < m ; j++)
        {
            if(a[i][j] == Max) cout << i + 1 << " " << j + 1<< endl;
        }
    }
}