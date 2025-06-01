#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;
ll gcd(ll a , ll b)
{
    if(b == 0) return a;
    return gcd(b ,a % b);
}
int main()
{
    ll a , b , c ; cin >> a >> b >> c;
    ll n = gcd(b , c);
    for(int i = 0 ;i < n ; i++)
    {
        cout << a;
    }
}
