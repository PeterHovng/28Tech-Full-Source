#include <bits/stdc++.h>
using namespace std;
vector<int>v[1001];
int ok[1001];
int DFS(int s , int par)
{
    int cnt = 1;
    for(int x : v[s])
    {
        if(x != par)
        {
            cnt += DFS(x , s);
        }
    }
    ok[s] = cnt;
    return cnt;
}
int main()
{
    int n ; cin >> n;
    for(int i = 1 ; i <= n - 1 ;i++)
    {
        int a , b ; cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    DFS(1 , -1);
    int res = 0;
    for(int i = 1 ; i <= n ;i++)
    {
        res += ok[i];
    }
    cout << res;
}
