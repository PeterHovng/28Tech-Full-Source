#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
vector<ll>v;
void init(ll n)
{
    int tmp = log2(n);
    for(int i = 0 ; i <= tmp ; i++)
    {
        v.push_back((ll)pow(2 , i));
    }
}
ll find(ll pos , ll n , int idx)
{
    if(pos % 2 == 1)
    {
        return 1;
    }
    if(pos == v[idx])
    {
        return n % 2;
    }
    else if(pos < v[idx])
    {
        return find(pos , n / 2 , idx - 1);
    }
    else return find(2*v[idx] - pos , n / 2 , idx - 1);
}
int main()
{
    ll n , l , r ; cin >> n >> l >> r;
    init(n);
    ll ans = 0;
    int m = v.size() - 1;
    for(ll res = l; res <= r ; res++)
    {
        ans += find(res , n , m);
    }
    cout << ans;
}
