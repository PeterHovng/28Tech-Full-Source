#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

int main()
{
    int n , m ; cin >> n >> m;
    int a[n];
    for(int i = 0 ; i  < n ;i++)
    {
        cin >> a[i];
    }
    ll res[m + 2];
    memset(res , 0 , sizeof(res));
    res[0] = 1;
    for(int i = 0 ; i < n ;i++)
    {
        for(int j = a[i] ; j <= m ; j++)
        {
            res[j] += res[j - a[i]];
            res[j] %= MOD;
        }
    }
    cout << res[m];
    return 0;
}
