#include <bits/stdc++.h>
using namespace std;
vector<int>v[1001];
bool ok[1001];
void DFS(int s)
{
    ok[s] = true;
    for(int x : v[s])
    {
        if(!ok[x])
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
        if(!ok[i])
        {
            DFS(i);
            ++ans;
        }
    }
    int res = 0;
    for(int i = 1 ; i <= n ; i++)
    {
        memset(ok , false , sizeof(ok));
        ok[i] = true; // loai bo dinh i
        int dem = 0;
        for(int j = 1 ; j <= n ;j++)
        {
            if(!ok[j])
            {
                DFS(j);
                ++dem;
            }
        }
        if(dem > ans) ++res;
    }
    cout << res;
}
