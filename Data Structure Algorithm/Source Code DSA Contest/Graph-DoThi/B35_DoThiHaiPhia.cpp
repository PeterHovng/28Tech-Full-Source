#include <bits/stdc++.h>
using namespace std;
vector<int>v[10001];
int used[10001];
#define pb push_back
bool BFS(int s)
{
    queue<int>q;
    q.push(s); used[s] = 1;
    while(!q.empty())
    {
        int u = q.front();
        q.pop(); 
        for(int x : v[u])
        {
            if(!used[x])
            {
                used[x] = 3 - used[u];
                q.push(x); 
            }
            else if(used[x] == used[u]) return false;
        }
    }
    return true;
}
bool DFS(int s , int parent)
{
    used[s] = 1 - used[parent];
    for(int x : v[s])
    {
        if(used[x] == -1)
        {
            if(!DFS(x , s)) return false;
        }
        else if(used[x] == used[s]) return false;
    }
    return true;
}
int main()
{
    int n , m ; cin >> n >> m;
    for(int i = 1 ; i<= m ; i++)
    {
        int x , y ; cin >> x >> y;
        v[x].pb(y);
        v[y].pb(x);
    }
    memset(used , -1 , sizeof(used));
    used[0] = 1;
    for(int i = 1 ;i  <= n ; i++)
    {
        if(used[i] == -1)
        {
            if(!DFS(i , 0))
            {
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";
}
