#include <bits/stdc++.h>
using namespace std;
const int maxn = 1001;
vector<int>v[maxn];
bool ok[maxn];
int parent[maxn];
void DFS(int s)
{
    ok[s] = true;
    for(int x : v[s])
    {
        if(!ok[x])
        {
            parent[x] = s;
            DFS(x);
        }
    }
}
void path(int s , int t)
{
    DFS(s);
    if(!ok[t])
    {
        cout << -1;
        return;
    }
    vector<int>duong;
    while(s != t)
    {
        duong.push_back(t);
        t = parent[t];
    }
    duong.push_back(s);
    reverse(duong.begin(), duong.end());
    for(int x : duong) cout << x << " ";
}
int main()
{
    int n , m , s , t ; cin >> n >> m >> s >> t;
    for(int i = 1 ; i <= m ; i++)
    {
        int a , b ; cin >> a >> b;
        v[a].push_back(b);
    }
    for(int i = 1 ; i <= n ;i++)
    {
        sort(v[i].begin(), v[i].end());
    }
    path(s , t);
}
