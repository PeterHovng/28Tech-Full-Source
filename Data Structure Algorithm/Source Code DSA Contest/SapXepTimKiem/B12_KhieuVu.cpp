#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;

int main()
{
    int n , m ; cin >> n >> m;
    int a[n] , b[m];
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a[i];
    }
    for(int i = 0 ; i < m ; i++)
    {
       cin >> b[i];
    }
    int res = 0 , i = 0 , j = 0;
    while(i < n && j < m)
    {
        if(a[i] > b[j])
        {
            ++res;
            ++i ; ++j;
        }
        else ++i;
    }
    cout << res;
}