#include <bits/stdc++.h>
using namespace std;
vector<int>v[1001];
int check[1001];
int n , m;
void reset()
{
    for(int i = 0 ; i <= 1001 ; i++)
    {
        v[i].clear();
    }
    memset(check , 0 , sizeof(check));
}
void DFS(int u)
{
    check[u] = 1;
    for(int x : v[u])
    {
        if(!check[x])
        {
            DFS(x);
        }
    }
}
int TPLT()
{
    int res = 0;
    for(int i = 1 ; i <= n ;i++)
    {
        if(!check[i])
        {
            ++res;
            DFS(i);
        }
    }
    return res;
}
int cnt = 0;
void tinh(int canh , int res , vector<pair<int,int>>tmp)
{
    for(int i = 0 ;i < m ; i++)
    {
        if(i != canh)
        {
            v[tmp[i].first].push_back(tmp[i].second);
            v[tmp[i].second].push_back(tmp[i].first);
        }
    }
    int dem = TPLT();
    if(dem > res) ++cnt;
}
int main()
{
    cin >> n >> m;
    vector<pair<int,int>>tmp;
    for(int i= 1 ; i <= m ; i++)
    {
        int a , b ; cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
        tmp.push_back({a , b});
    }
    int ans = TPLT();
    for(int i = 0 ;i < m ; i++)
    {
        reset();
        tinh(i , ans , tmp);
    }
    cout << cnt;
}
