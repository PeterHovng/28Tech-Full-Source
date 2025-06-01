#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
ll C[1001][1001];
void toHop()
{
    for(int i = 0 ; i <= 1000 ; i++)
    {
        for(int j = 0 ; j <= i ; j++)
        {
            if(i == j || j == 0)
            {
                C[i][j] = 1;
            }
            else
            {
                C[i][j] = C[i - 1][j - 1] + C[i - 1][j];
            }
        }
    }
}
int main()
{
    toHop();
    ll n , m ; cin >> n >> m;
    cout << C[n + m - 1][n - 1];
}