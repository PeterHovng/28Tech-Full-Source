#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;

int main()
{
    int n , m , k ; cin >> n >> m >> k;
    int a[n] , b[m];
    for(int i = 0 ; i < n ; i++) cin >> a[i];
    for(int i = 0 ; i < m ; i++) cin >> b[i];
    
    int i = 0 , j = 0 , cnt = 0;
    while(i < n && j < m)
    {
        if(a[i] > b[j])
        {
            ++cnt;
            if(cnt == k)
            {
                cout << b[j];
                return 0;
            }
            ++j;
        }
        else
        {
            ++cnt;
            if(cnt == k)
            {
                cout << a[i];
                return 0;
            }
            ++i;
        }
    }
    while(i < n)
    {
        ++cnt;
        if(cnt == k)
        {
            cout << a[i];
            return 0;
        }
        ++i;
    }
    while(j < m)
    {
        ++cnt;
        if(cnt == k)
        {
            cout << b[j];
            return 0;
        }
        ++j;
    }
}
