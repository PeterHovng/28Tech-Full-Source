#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
int chan(ll n)
{
    if(n == 0) return 0;
    if(n % 10 % 2 == 0) return n % 10+ chan(n / 10);
    else return chan(n / 10);
}
int le(ll n)
{
    if(n == 0) return 0;
    if(n % 10 % 2 != 0) return n % 10+ le(n / 10);
    else return le(n / 10);
}
int main()
{
    ll n ; cin >> n;
    cout << chan(n) << endl << le(n);
}
