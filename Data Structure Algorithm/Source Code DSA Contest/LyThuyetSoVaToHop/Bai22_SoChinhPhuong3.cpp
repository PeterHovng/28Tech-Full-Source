#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll a , b ; cin >> a >> b;
    ll x = sqrt(a);
    ll y = sqrt(b);
    if(x *x  != a) ++x;
    cout << y - x + 1;
}
