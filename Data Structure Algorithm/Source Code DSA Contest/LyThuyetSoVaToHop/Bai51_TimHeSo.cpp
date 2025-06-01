#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
const int maxn = 1e6 + 1;

ll x , y , d;
void presicion(ll a,  ll b)
{
    if(b == 0)
    {
        x = 1 ; y = 0 ; d = a;
    }
    else
    {
        presicion(b , a % b);
        ll tmp = x;
        x = y;
        y = tmp - a/ b * y;
    }
}
int main()
{
    ll a , b , p ; cin >> a >> b >> p;
    presicion(a , b);
    if((x + y) % 2 == 0) cout << "YES";
    else cout << "NO";
}