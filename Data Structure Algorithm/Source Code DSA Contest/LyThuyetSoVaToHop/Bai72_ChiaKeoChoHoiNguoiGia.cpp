#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
typedef long long ll;
int main()
{
    ll n;
    cin >> n;
    vector<ll> F(n + 1);
    F[1] = 0;F[2] = 1;
    for(int i = 3; i <= n; ++i)
    {
        F[i] = (i - 1) * ((F[i - 1] +F[i - 2]) % MOD);
        F[i] %= MOD;
    }
    cout << F[n];
    return 0;
}