#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e7 + 1;
ll gcd(ll a , ll b)
{
    return b == 0 ? a : gcd(b , a % b);
}
ll lcm(ll a , ll b)
{
    return a / gcd(a , b) * b;
}
int main()
{
    ll x , y , z; cin >> x >> y >> z;
    int n ; cin >> n;
    ll res = lcm(x , lcm(y , z));
    ll tmp = pow(10 , n- 1);
    ll kq = (tmp + res - 1) / res * res;
    if(kq < pow(10 , n)) cout << kq;
    else cout << -1;
}
