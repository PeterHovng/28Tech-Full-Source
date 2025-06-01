#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

int a[100][100];
int n , m ;

int dx[] = {1 , 0 , 0 , -1};
int dy[] = {0 , 1 , -1 , 0};
bool check(int i , int j)
{
    if(i >= 0 && i < n && j >= 0 && j < m) return true;
    return false;
}
void DFS(int i , int j)
{
    a[i][j] = 0;
    for(int k = 0 ; k < 4 ; k++)
    {
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if(a[i1][j1] && check(i1, j1))
        {
            DFS(i1 , j1);
        }
    }
}

int main()
{
    cin >> n >> m;
    for(int i = 0 ;i < n ; i++)
    {
        for(int j = 0 ;j < m ; j++)
        {
            cin >> a[i][j];
        }
    }
    int ans = 0;
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < m ; j++)
        {
            if(a[i][j])
            {
                ++ans;
                DFS(i , j);
            }
        }
    }
    cout << ans;
}