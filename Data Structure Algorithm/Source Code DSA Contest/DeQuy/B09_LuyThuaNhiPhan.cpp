#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
ll du(ll a , ll b)
{
    return ((a % MOD) * (b % MOD)) % MOD;
}
ll powMOD(ll a , ll b)
{
    if(b == 0) return 1;
    ll tmp = powMOD(a , b / 2);
    if(b % 2 == 0) return du(tmp , tmp);
    else return du(du(tmp , tmp) , a);
}
int main()
{
    ll a , b ; cin >>a >> b;
    cout << powMOD(a, b) << endl;
}
