#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
int dequy(ll n)
{
    if(n < 10) return n;
    return dequy(n / 10);
}
int main()
{
    ll n ; cin >> n;
    cout << dequy(n);
}
