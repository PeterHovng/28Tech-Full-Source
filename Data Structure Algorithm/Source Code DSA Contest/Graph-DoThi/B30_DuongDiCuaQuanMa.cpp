#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
int arr[1001][1001];
struct Basic{
    int x ,y, cnt;
};
bool check(int x , int y , int n)
{
    if(x <= n && x >= 1 && y >= 1 && y <= n) return true;
    return false;
}
int BFS(int a ,int b , int c , int d ,int n)
{
    int dx[] = {1 , 1 , 2 , 2 , -1 , -1 , -2 , -2};
    int dy[] = {2 , -2 , 1 , -1 , 2 , -2 , 1 , -1};
    queue<Basic>q;
    q.push({a , b , 0});
    Basic t;
    int x , y;
    arr[a][b] = 0;
    while(!q.empty())
    {
        t = q.front();
        q.pop();
        if(t.x == c && t.y == d)
        {
            return t.cnt;
        }
        for(int i = 0 ; i < 8 ; i++)
        {
            x = t.x + dx[i];
            y = t.y + dy[i];
            if(check(x , y , n) && arr[x][y] == 1)
            {
                arr[x][y] = 0;
                 q.push({x , y , t.cnt + 1});
            }
        }
    }
    return -1;
}
int main()
{
    int n , a , b , c , d; cin >> n >> a >> b >> c >> d;
    for(int i = 1 ; i <= n ;i++)
    {
        for(int j = 1 ; j <= n ; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << BFS(a , b , c , d , n);
    return 0;
}
