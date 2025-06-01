#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n , m ; cin >> n >> m;
    int a[n] , b[m];
    for(int &x : a) cin >> x; for(int &x : b) cin >>x;
    int j = 0 , ok = 0;
    for(int i = 0 ; i < n;i++)
    {
        if(a[i] == b[j]) ++j;
        if(j == m) 
        {
            ok = 1; break;
        }
    }
    if(ok) cout << "YES";
    else cout << "NO";
}