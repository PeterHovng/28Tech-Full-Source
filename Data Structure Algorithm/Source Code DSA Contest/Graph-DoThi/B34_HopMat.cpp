#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

vector<int>v[10001];
int visited[10001];
map<int ,int>mp;
void BFS(int s)
{
    queue<int>q; q.push(s);
    visited[s] = 1;
    mp[s]++;
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        
        for(int x : v[u])
        {
            if(!visited[x])
            {
                q.push(x);
                visited[x] = 1;
                mp[x]++;
            }
        }
    }
}

int main()
{
    int k , n , m ; cin >> k >> n >> m;
    int arr[k]; for(int &x : arr) cin >> x;
    for(int i = 1 ; i <= m ;i++)
    {
        int a , b ; cin>> a >> b;
        v[a].push_back(b);
    }
    int ans = 0;
    for(int x : arr)
    {
        memset(visited , 0 , sizeof(visited));
        BFS(x);
    }
    ll res = 0;
    for(auto x : mp)
    {
        if(x.second == k)
        {
            ++res;
        }
    }
    cout << res;
    return 0;
}
