#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e5 + 1;
struct canh
{
    int x , y , w ;
};
vector<canh>v;
int size[maxn] , parent[maxn];

int find(int u)
{
    if(u == parent[u]) return u;
    return parent[u] = find(parent[u]);
}
bool Union(int a , int b)
{
    a = find(a);
    b = find(b);
    if(a == b) return false;
    if(size[a] < size[b]) swap(a , b);
    size[a] += size[b];
    parent[b] = a;
    return true;
}
bool cmp(canh a , canh b)
{
    return a.w < b.w;
}
void kruskal(int n , int m)
{
    ll ans = 0;
    int cnt = 0;
    for(int i = 0 ; i < m ;i++) 
    {
        if(cnt == n - 1) break;
        if(Union(v[i].x , v[i].y))
        {
            ans += v[i].w;
            ++cnt;
        }
    }
    if(cnt != n - 1) cout << "IMPOSSIBLE";
    else cout <<  ans;
}
int main()
{
    int n , m ; cin >> n >> m;
    for(int i = 1 ; i <= n ; i++)
    {
        parent[i] = i;
        size[i] = 1;
    }
    for(int i = 1 ; i <= m ;i++)
    {
        int a , b , c ; cin >> a >> b >> c;
        v.push_back({a , b , c});
    }
    sort(v.begin(), v.end() , cmp);
    kruskal( n,  m);
}
