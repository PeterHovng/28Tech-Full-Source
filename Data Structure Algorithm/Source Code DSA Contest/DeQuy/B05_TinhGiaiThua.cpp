#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
ll powMod(ll a , ll b) 
{
    return ((a % MOD) *(b % MOD)) % MOD;
}
ll gt(int n)
{
    if(n == 0) return 1;
    return powMod(n , gt(n - 1));
}
int main()
{
    int n ; cin >> n;
    cout << gt(n) << endl;
}
