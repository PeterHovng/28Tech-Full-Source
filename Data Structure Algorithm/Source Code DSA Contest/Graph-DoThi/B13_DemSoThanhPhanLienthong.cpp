#include <bits/stdc++.h>
using namespace std;
const int maxn = 1001;
vector<int>v[maxn];
bool ok[maxn];

void BFS(int s)
{
    queue<int>Q;
    Q.push(s);
    ok[s] = true;
    while(!Q.empty())
    {
        int top = Q.front(); Q.pop();
        for(int x : v[top])
        {
            if(!ok[x])
            {
                Q.push(x);
                ok[x] = true;
            }
        }
    }
}
int main()
{
    int n , m ; cin >> n >> m ;
    for(int i = 1 ; i <= m ; i++)
    {
        int a , b ; cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int ans = 0;
    for(int i = 1 ; i <= n ;i++)
    {
        sort(v[i].begin(), v[i].end());
    }
    for(int i = 1 ; i <= n ; i++)
    {
        if(!ok[i])
        {
            ++ans;
            BFS(i);
        }
    }
    cout << ans;
}
