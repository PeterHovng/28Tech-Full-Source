#include <bits/stdc++.h>
using namespace std;
const int maxn = 1001;
vector<int>v[maxn];
bool ok[maxn];
int parent[maxn] , size[maxn];
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
    size[a] += b;
    parent[b] = a;
    return true;
}
int main()
{
    int n , m ; cin >> n >> m;
    for(int i = 1 ; i <= n ;i++) 
    {
        parent[i] = i;
        size[i] = 1;
    }
    for(int i = 1 ; i <= m ; i++)
    {
        int a , b ; cin >> a >> b;
        Union(a , b);
    }
    int q ; cin >>q;
    while(q--)
    {
        int a , b ; cin >> a >> b;
        if(parent[a] == parent[b])
        {
            cout << 1 << endl;
        }
        else cout << -1 << endl;
    }
}
