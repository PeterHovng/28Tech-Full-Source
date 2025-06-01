#include <bits/stdc++.h>
using namespace std;
const int maxn = 1001;
vector<int>v[maxn];
bool ok[maxn];

void DFS(int s)
{
    ok[s] = true;
    cout << s << " ";
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
    int n , m , s ; cin >> n >> m >> s;
    for(int i = 1 ; i <= m ; i++)
    {
        int a , b ; cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    for(int i = 1 ; i <= n ;i++)
    {
        sort(v[i].begin(), v[i].end());
    }
    DFS(s);
}
