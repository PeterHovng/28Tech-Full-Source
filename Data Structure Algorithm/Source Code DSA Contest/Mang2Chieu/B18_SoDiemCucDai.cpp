#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

int dx[] = {1 , 0 , 0 , -1 , 1 , 1 , -1 , -1};
int dy[] = {0 , 1 , -1 , 0 , -1 , 1 , 1 , -1};
bool check(int i , int j ,int n ,int m)
{
    if(i >= 0 && i < n && j >= 0 && j < m) return true;
    return false;
}
int main()
{
    int n , m ; cin >> n >> m;
    int a[n][m] ,ans = 0;
    for(int i = 0 ; i < n ;i++) 
    {
        for(int j = 0 ; j < m ; j++)
        {
            cin >> a[i][j];
        }
    }
    for(int i = 0 ;i < n ; i++)
    {
        for(int j = 0 ; j < m ; j++)
        {
            bool ok = true;
            for(int k = 0 ; k < 8 ; k++)
            {
                int i1 = i + dx[k];
                int j1 = j + dy[k];
                if(check(i1 , j1 , n , m)) 
                {
                    if(a[i][j] <= a[i1][j1])
                    {
                        ok = false;
                    }
                }
            }
            if(ok) ++ans;
        }
    }
    cout << ans;
}