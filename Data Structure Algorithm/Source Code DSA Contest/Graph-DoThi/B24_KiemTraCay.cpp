#include <bits/stdc++.h>
using namespace std;

vector<int>v[1001];
int check[10001];

void DFS(int u)
{
    check[u] = 1;
    for(int x : v[u])
    {
        if(!check[x])
        {
            DFS(x);
        }
    }
}
bool DFS2(int u , int par)
{
    check[u] = 1;
    for(int x : v[u])
    {
        if(!check[x])
        {
            if(DFS2(x , u)) return true;
        }
        else if(x != par) return true;
    }
    return false;
}
int main()
{
    int n , m ; cin >> n >> m;
    for(int i = 1 ; i <= m ; i++)
    {
        int a , b ; cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int ans = 0;
    for(int i = 1 ; i <= n ;i++)
    {
        if(!check[i])
        {
            ++ans;
            DFS(i);
        }
    }
    if(ans == 1)
    {
        memset(check , 0 , sizeof(check));
        if(!DFS2(1 , 0)) cout << 1;
        else cout << 0;
    }
    else cout << 0;
}
