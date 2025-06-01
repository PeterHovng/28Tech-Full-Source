#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
string Hex = "0123456789ABCDEF";
void He16(ll n)
{
    if(n == 0) return;
    int tmp = n % 16;
    He16(n / 16);
    cout << Hex[tmp];
}

int main()
{
    ll n ;cin >> n;
    if(n == 0) cout << 0;
    else He16(n);
}
