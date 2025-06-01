#include <bits/stdc++.h>
using namespace std;
const int maxn = 1001;
vector<int>v[maxn];
bool ok[maxn];
int color[maxn];
bool DFS(int s)
{
    color[s] = 1;
    for(int x : v[s])
    {
        if(!color[x])
        {
            if(DFS(x)) return true;
        }
        else if(color[x] == 1) return true;
    }
    color[s] = 2;
    return false;
}

int main()
{
    int n , m ; cin >> n >> m;
    for(int i = 1 ; i <= m ; i++)
    {
        int a , b ; cin >> a >> b;
        v[a].push_back(b);
    }
    for(int i = 1 ; i <= n ;i++)
    {
        if(color[i] == 0)
        {
            if(DFS(i))
            {
                cout << 1;
                return 0;
            }
        }
    }
    cout << 0;
}
