#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll x , y , d;
void precision(ll a , ll b)
{
    if(b == 0)
    {
        x = 1 ; y = 0 ; d = a;
    }
    else
    {
        precision(b , a % b);
        ll tmp = x;
        x = y;
        y = tmp - a / b * y;
    }
}
int main()
{
    ll a , b ; cin >> a >> b;
    precision(a , b);
    if(d != 1)
    {
        cout << -1;
    }
    else
    {
        cout << (x % b + b) % b;
    }
}