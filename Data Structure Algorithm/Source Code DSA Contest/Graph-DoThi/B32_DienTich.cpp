#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

int n , m ,ans = 0;

char a[1001][1001];

int dx[] = {1 , 0 , 0 , -1};
int dy[] = {0 , 1 , -1 , 0};

void DFS(int i , int j)
{
    a[i][j] = '#';
    ++ans;
    for(int k = 0 ;k < 4 ; k++)
    {
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        
        if(i1 >= 1 && j1 >= 1 && i1 <= n && j1 <= m && a[i1][j1] == '.')
        {
            DFS(i1 , j1);
        }
    }
}

int main()
{
    cin >> n >> m;
    for(int i = 1 ; i <= n ;i++)
    {
        for(int j = 1 ; j <= m ; j++)
        {
            cin >> a[i][j];
        }
    }
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 1 ; j  <= m ; j++)
        {
            if(a[i][j] == '.')
            {
                DFS(i , j);
                cout << ans << " ";
                ans = 0;
            }
        }
    }
    return 0;
}
