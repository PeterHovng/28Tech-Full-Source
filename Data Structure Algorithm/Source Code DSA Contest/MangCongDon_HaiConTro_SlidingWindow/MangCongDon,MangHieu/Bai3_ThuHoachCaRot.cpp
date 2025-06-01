#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
typedef long long ll;
int main()
{
    int n , m ; cin >> n >> m;
    ll t[n + 1][m + 1];
    memset(t , sizeof(t) , 0);
    for(int i = 1 ; i <= n ;i++)
    {
        for(int j = 1 ;j <= m ;j++)
        {
            int x ; cin >> x;
            t[i][j] = t[i - 1][j] + t[i][j - 1] - t[i - 1][j - 1] + x;
        }
    }
    int q ; cin >> q;
    while(q--)
    {
        int h1 , h2 , c1 , c2 ; cin >> h1 >> h2 >> c1 >> c2;
        cout << t[h2][c2] - t[h1 - 1][c2] - t[h2][c1 - 1] + t[h1 - 1][c1 - 1] << endl;
    }
    return 0;
}