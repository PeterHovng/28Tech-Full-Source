#include <bits/stdc++.h>
using namespace std;
const int maxn = 1001;
vector<int>v[maxn] , r[maxn];
bool ok[maxn];
stack<int>st;

void dfs1(int s)
{
    ok[s] = true;
    for(int x : v[s])
    {
        if(!ok[x])
        {
            dfs1(x);
        }
    }
    st.push(s);
}
void dfs2(int s)
{
    ok[s] = true;
    for(int x : r[s])
    {
        if(!ok[x])
        {
            dfs2(x);
        }
    }
}
void init()
{
    int n , m ; cin >> n >> m;
    for(int i = 1 ; i <= m ; i++)
    {
        int a , b ; cin >> a >> b;
        v[a].push_back(b);
        r[b].push_back(a);
    }
    for(int i = 1 ; i <= n ;i++)
    {
        if(!ok[i])
        {
            dfs1(i);
        }
    }
    memset(ok , false , sizeof(ok));
    int ans = 0;
    while(!st.empty())
    {
        int top = st.top(); st.pop();
        if(!ok[top])
        {
            dfs2(top);
            ++ans;
        }
    }
    if(ans == 1) cout << 1;
    else cout << 0;
}
int main()
{
    init();
}
