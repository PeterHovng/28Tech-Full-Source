#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

char arr[1001][1001];
int dx[] = {1 , 0 , 0 , -1};
int dy[] = {0 , 1 , -1 , 0};
int n , m;
void DFS(int i , int j)
{
    for(int k = 0 ;k < 4 ; k++)
    {
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        
        if(i1 >= 0 && j1 >= 0 && i1 <= n && j1 <= m && arr[i1][j1] == '.')
        {
            arr[i1][j1] = '#';
            DFS(i1,j1);
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
            cin >> arr[i][j];
        }
    }
    int ans = 0;
    for(int i = 1 ; i <= n ;i++)
    {
        for(int j = 1 ; j <= m; j++)
        {
            if(arr[i][j] != '#')
            {
                arr[i][j] = '#';
                ++ans;
                DFS(i , j);
            }
        }
    }
    cout << ans;
    return 0;
}
