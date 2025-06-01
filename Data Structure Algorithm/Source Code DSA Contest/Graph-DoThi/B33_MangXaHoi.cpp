#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

vector<int>v[100001];
int visited[100001];
vector<int>arr;

void BFS(int s)
{
    queue<int>q;
    q.push(s); visited[s] = 1;
    arr.push_back(s);
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        for(int x : v[u])
        {
            if(!visited[x])
            {
                q.push(x);
                arr.push_back(x);
                visited[x] = 1;
            }
        }
    }
}

int main()
{
    int n , m ; cin >> n >> m;
    for(int i = 1 ; i <= m ; i++)
    {
        int a , b ; cin >>a >> b;
        v[a].push_back(b) ; v[b].push_back(a);
    }
    for(int i = 1 ; i <= n ;i++)
    {
        if(!visited[i])
        {
            BFS(i);
            for(int k = 0 ; k < arr.size() - 1 ; k++)
            {
                if(v[arr[k]].size() != v[arr[k + 1]].size())
                {
                    cout << "NO"; return 0;
                }
            }
            arr.clear();
        }
    }
    cout << "YES";
    return 0;
}
