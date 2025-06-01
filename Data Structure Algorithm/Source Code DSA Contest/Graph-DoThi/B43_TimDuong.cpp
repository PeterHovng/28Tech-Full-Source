#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e5 + 1;
int n , m , x , y;
char a[501][501];
int dx[] = {1 , -1 , 0 , 0};
int dy[] = {0 , 0 , -1 , 1};
bool DFS(int i , int j , int par , int dem)
{
    if(dem > 2) return false;
    for(int k = 0 ; k < 4 ; k++)
    {
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if(i1 < 1 || j1 < 1 || i1 > n || j1 > m) continue;
        int tmp = dem;
        if(a[i1][j1] == '.')
        {
            a[i1][j1] = '*';
            int tmp = dem;
            if(k != par && a[i][j] != 'S') tmp += 1;
            if(DFS(i1 , j1 , k , tmp)) return true;
            a[i1][j1] = '.';
        }
        else if(a[i1][j1] == 'T')
        {
            if(k != par && a[i][j] != 'S') ++dem;
            if(dem <= 2) return true;
        }

    }
    return false;

}
int main()
{
    cin >> n >> m;
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 1 ; j <= m ;j++)
        {
            cin >> a[i][j];
            if(a[i][j] == 'S')
            {
                x = i ; y = j;
            }
        }
    }  
    if(DFS(x , y , 1 , 0)) cout << "YES";
    else cout << "NO";
}
