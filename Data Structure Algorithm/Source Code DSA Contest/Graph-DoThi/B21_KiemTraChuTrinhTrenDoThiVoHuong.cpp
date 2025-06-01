#include <bits/stdc++.h>
using namespace std;
const int maxn = 1001;
vector<int>v[maxn];
bool ok[maxn];

bool DFS(int s , int par)
{
    ok[s] = true;
    for(int x : v[s])
    {
        if(!ok[x])
        {
            if(DFS(x , s)) return true;
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
    for(int i = 1 ; i <= n ;i++)
    {
        if(!ok[i])
        {
            if(DFS(i , 0))
            {
                cout << 1;
                return 0;
            }
        }
    }
    cout << 0;
}
