#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

vector<ll>v[1001];
ll check[1001];
vector<ll>arr;
void DFS(ll u)
{
    check[u] = 1;
    arr.push_back(u);
    for(ll x : v[u])
    {
        if(!check[x])
        {
            DFS(x);
        }
    }
}

int main()
{
    ll n , m ; cin >> n >> m;
    while(m--)
    {
        ll a , b ; cin >> a >> b;
        v[a].push_back(b) ; v[b].push_back(a);
    }
    vector<ll>dem;
    for(ll i = 1 ; i <= n ;i++)
    {
        if(!check[i])
        {
            DFS(i);
            ll Max = -9 , vt = i;
            for(auto x : arr)
            {
                ll n = v[x].size();
                if(n > Max)
                {
                    Max = n;
                    vt = x;
                }
                else if(n == Max)
                {
                    if(vt > x) vt = x;
                }
            }
            dem.push_back(vt);
            arr.clear();
        }
    }
    sort(dem.begin() , dem.end());
    for(auto x : dem) cout << x << " ";
    return 0;
}
