#include <bits/stdc++.h>
using namespace std;
vector<int>v[10001];
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
    vector<int>res;
    for(int i = 1 ; i <= n ; i++)
    {
        if(!check[i])
        {
            res.push_back(i);
            DFS(i);
        }
    }
    cout << res.size() - 1<< endl;
    for(int i = 0 ; i < res.size() - 1 ; i++)
    {
        cout << res[i] << " " << res[i + 1] << endl;
    }
}
