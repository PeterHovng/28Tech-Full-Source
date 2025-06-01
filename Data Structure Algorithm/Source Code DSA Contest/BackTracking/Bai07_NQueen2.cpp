#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

int n  , a[9][9], c[25] , d1[50] , d2[50] , res ,ans = 0;

void Try(int i)
{
    for(int j = 1 ; j <= n ; j++)
    {
        if(!c[j] && !d1[i - j + n] && !d2[i + j - 1])
        {
            c[j] = d1[i - j + n] = d2[i + j - 1] = 1;
            res += a[i][j];
            if(i == n)
            {
                ans = max(ans , res);
            }
            else Try(i + 1);
            c[j] = d1[i - j + n] = d2[i + j - 1] = 0;
            res -= a[i][j];
        }
    }
}
int main()
{
    n = 8;
    for(int i = 1 ; i <= 8 ; i++)
    {
        for(int j = 1 ; j <= 8 ; j++)
        {
            cin >> a[i][j];
        }
    }
    Try(1);
    cout << ans;
}
