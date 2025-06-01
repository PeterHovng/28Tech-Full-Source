#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e6 + 1;
const int MOD = 1e9 + 7;
vector<ll>v;
ll gt[maxn];
void gthua()
{
    gt[0] = 1;
    for(int i = 1 ; i <= 1e6 ; i++)
    {
        gt[i] = gt[i - 1] * i;
        gt[i] %= MOD;
    }
}
ll powmmod(ll a , ll b , ll mod)
{
    a %= mod;
    ll res = 1;
    while(b)
    {
        if(b % 2 == 1)
        {
            res *= a;
            res %= mod;
        }
        a *= a;
        b /= 2;
        a %= mod;
    }
    return res;
}
void sinh_so_tot(ll a , ll b)
{
    queue<ll>q;
    q.push(a) ; q.push(b);
    while(true)
    {
        int top = q.front(); q.pop();
        if(top > 1e7) break;
        v.push_back(top);
        q.push(top * 10 + a);
        q.push(top * 10 + b);
    }
}
ll sum(ll a , ll m)
{
    return powmmod(a , m - 2 , m);
}
ll tuyetvoi(ll n , ll x , ll y)
{
    ll res = (gt[x] * gt[y])%MOD;
    ll r = sum(res , MOD);
    return (gt[n] * r) % MOD;
}
ll giai_pt(ll a , ll b , ll n , ll m)
{
    ll tmp = b - a;
    if(m - n * a >= 0 && (m - n * a) % tmp == 0)
    {
        ll y = (m - n * a) / tmp;
        ll x = n - y;
        if(x >= 0 && y >= 0)
        {
            return tuyetvoi(n , x , y);
        }
    }
    return 0;
}
int main()
{
    ll a , b , n ; cin >> a >> b >> n;
    gthua();
    sinh_so_tot(a , b);
    ll ans =0;
    for(ll x : v)
    {
        ans += giai_pt(a , b , n , x);
        ans %= MOD;
    }
    cout << ans % MOD;
}