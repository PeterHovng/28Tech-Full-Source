#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
int tong(ll n)
{
    if(n < 10) return 1;
    return 1 + tong(n / 10);
}
int main()
{
    ll n ; cin >> n;
    cout << tong(n);
}
