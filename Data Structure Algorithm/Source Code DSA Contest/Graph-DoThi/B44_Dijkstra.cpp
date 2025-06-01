#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1001;
const int INF = 1e9 + 1;
vector<pair<ll,ll>>v[maxn];
ll d[maxn];

void dijkstra(int s , int n)
{
    for(int i = 1 ; i <= n ;i++)
    {
        d[i] = INF;
    }
    priority_queue<pair<ll,ll> , vector<pair<ll,ll>> , greater<pair<ll,ll>>>Q;
    d[s] = 0;
    Q.push({0 , s});
    while(!Q.empty())
    {
        pair<ll,ll>top = Q.top(); 
        int w = top.first;
        int u = top.second;
        Q.pop();
        if(d[u] < w) continue;
        for(auto x : v[u])
        {
            ll z = x.first;
            ll y = x.second;
            if(d[z] > y + w)
            {
                d[z] = y + w;
                Q.push({d[z] , z});
            }
        }
    }
    for(int i = 1 ; i <= n ;i++) cout << d[i] << " ";
}

int main()
{
    int n , m , s ; cin >> n >> m >>s;
    for(int i = 1 ; i <= m ;i++)
    {
        int a , b , c ; cin >> a >> b >> c;
        v[a].push_back({b , c});
        v[b].push_back({a , c});
    }
    dijkstra(s , n);
}
