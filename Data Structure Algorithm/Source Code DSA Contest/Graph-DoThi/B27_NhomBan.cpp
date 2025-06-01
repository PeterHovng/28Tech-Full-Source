#include <bits/stdc++.h>
using namespace std;
vector<int>v[10001];
int check[10001];
int ans = 0;
void DFS(int u)
{
    check[u] = 1;
    ++ans;
    for(int x : v[u])
    {
        if(!check[x])
        {
            DFS(x);
        }
    }
}
int main()
{
    int n , m ; cin >> n >> m;
    for(int i = 0 ; i < m ; i++)
    {
        int a , b ; cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int res = 0;
    for(int i = 1 ; i <= n ;i++)
    {
        if(!check[i])
        {
            ans = 0;
            DFS(i);
            res = max(res , ans);
        }
    }
    cout << res;
}
