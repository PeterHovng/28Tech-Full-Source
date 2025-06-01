#include <bits/stdc++.h>
using namespace std;
vector<int>v[1001];
int cat[1001];
int cnt = 0;
void DFS(int s , int par , int dem , int m)
{
    if(dem > m) return;
    if(v[s].size() == 1 && s != 1)
    {
        ++cnt;
    }
    for(int x : v[s])
    {
        if(x != par)
        {
            if(cat[x])
            {
                DFS(x , s , dem + 1 , m);
            }
            else DFS(x , s , 0 , m);
        }
    }

}
int main()
{
    int n , m ; cin >> n >> m;
    for(int i = 1 ; i <= n ; i++)
    {
        cin >> cat[i];
    }
    for(int i = 1 ; i < n ;i++)
    {
        int a , b ; cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    DFS(1 , 1 , cat[1] , m);
    cout << cnt;
}
