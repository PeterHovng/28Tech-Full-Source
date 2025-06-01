#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MOD = 1e9 + 7;
bool check(int n)
{
    for(int i = 2 ; i <= sqrt(n) ; i++)
    {
        if(n % i == 0) return false;
    }
    return n > 1;
}
int main()
{
    int n ; cin >> n;
    int a[n][n];
    for(int i = 0 ; i < n; i++)
    {
        for(int j= 0 ; j < n ; j++)
        {
            cin >>a[i][j];
        }
    }
    int ans = 0;
    for(int i = 0 ; i < n ; i++)
    {
        if(check(a[i][i])) ++ans;
        if(check(a[i][n - i - 1])) ++ans;
    }
    if(n % 2 == 1 && check(a[n / 2][n / 2])) --ans;
    cout << ans;
}
