#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
const int OO = 1e9 + 7; 

vector<pair<int,int>>v[1001];
ll d[101][101];

void Dijkstra(int n , int m , int s)
{
    for(int i = 1 ; i <= n ; i++)
    {
        d[s][i] = OO;
    }
    d[s][s] = 0;
    priority_queue<pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>>>q;
    q.push({0 , s});
    while(!q.empty())
    {
        int u = q.top().second;
        int du = q.top().first;
        q.pop();
        if(du != d[s][u]) continue;
        for(int i = 0 ; i < v[u].size() ; i++)
        {
            int a = v[u][i].second;
            int da = v[u][i].first;
            if(d[s][a] > da + du)
            {
                d[s][a] = da + du;
                q.push({d[s][a] , a});
            }
        }
    }
}

int main()
{
    int n , m , s ; cin >> n >> m ;
    for(int i = 1 ; i <= m ; i++) 
    {
        int x,y , z; cin >>x  >> y >> z;
        v[x].push_back({z , y});
        v[y].push_back({z , x});
    }
    for(int i = 1 ; i <= n ; i++)
    {
        Dijkstra(n , m , i);
    }
    int t; cin >> t;
    while(t--)
    {
        int a , b ; cin >> a >> b;
        cout << d[a][b] << endl;
    }
    return 0;
}
