#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

int a[101][101];
int n , m , x , y , t , v;

int dx[] = {1 , 0 , 0 , -1};
int dy[] = {0 , 1 , -1 , 0};

bool check(int i , int j)
{
    if(i >= 0 && i < n && j >= 0 && j < m) return true;
    return false;
}
bool BFS(int i , int j)
{
    queue<pair<int,int>>Q;
    Q.push({i ,j});
    a[i][j] = 0;
    while(!Q.empty())
    {
        pair<int,int> u = Q.front(); Q.pop();
        if(u.first == t && u.second == v) return true;
        for(int k = 0 ; k < 4 ; k++)
        {
            int i1 = u.first + dx[k];
            int j1 = u.second + dy[k];
            if(check(i1 , j1) && a[i1][j1])
            {
                Q.push({i1 , j1});
                a[i1][j1] = 0;
            }
        }
    }
    return false;
}
int main()
{
    cin >> n >> m;
    cin >> x >> y >> t >> v;
    --x; --y ; --t ; --v;
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j <m ;j++)
        {
            cin >> a[i][j];
        }
    }
    if(BFS(x , y)) cout << "YES";
    else cout << "NO";
}