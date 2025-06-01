#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
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
    ll a , b ; cin >>a >> b;
    cout << gcd(a , b) << " " << lcm(a , b);
}
