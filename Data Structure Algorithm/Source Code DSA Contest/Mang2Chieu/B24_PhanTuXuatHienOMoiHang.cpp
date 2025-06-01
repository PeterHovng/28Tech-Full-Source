#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
int ans[102] , res[102];
int main()
{
    int n ; cin >> n;
    int a[n][n];
    for(int i = 0 ;i < n ;i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            cin >> a[i][j];
            if(ans[a[i][j]] == 0)
            {
                ++res[a[i][j]];
                ans[a[i][j]] = 1;
            }
        }
        memset(ans , 0, sizeof(ans));
    }
    bool ok = false;
    for(int i = 0 ; i <= 100 ; i++)
    {
        if(res[i] == n) 
        {
            cout << i << " ";
            ok = true;
        }
    }
    if(!ok) cout << "NOT FOUND";
}