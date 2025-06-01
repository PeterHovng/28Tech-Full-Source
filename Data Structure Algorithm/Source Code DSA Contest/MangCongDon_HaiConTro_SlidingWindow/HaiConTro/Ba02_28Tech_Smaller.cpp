#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
typedef long long ll;

int main()
{
 int n , m ; cin >> n >> m;
    int a[n] , b[m];
    for(int i = 0 ; i < n ;i++) cin >> a[i];
    for(int i = 0 ; i < m ; i++) cin >> b[i];
    int  i = 0 , j = 0;
    while(i < n && j < m)
    {
        if(b[j] > a[i])
        {
            ++i;
        }
        else
        {
            cout << i << " ";
            ++j;
        }
    }
    while(j < m)
    {
        ++j;
        cout << n << " ";
    }
    return 0;
}