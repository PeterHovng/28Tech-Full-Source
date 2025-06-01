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
    for(int i = 1 ; i <= n ; i++)
    {
        if(!check[i])
        {
            ++ans;
            DFS(i);
        }
    }
    int res = 0;
    for(int i = 1 ; i <= n ; i++)
    {
        memset(check , 0 , sizeof(check));
        check[i] = 1; // loai bo dinh i;
        int dem = 0;
        for(int j = 1 ; j <= n ; j++)
        {
            if(!check[j])
            {
                ++dem;
                DFS(j);
            }
        }
        if(dem > ans) ++res;
    }
    cout << res;
}
