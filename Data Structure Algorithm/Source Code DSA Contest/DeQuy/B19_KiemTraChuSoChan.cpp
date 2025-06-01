#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
bool check(ll n)
{
    if(n == 0) return true;
    if(n % 10 % 2 == 1) return false;
    return check(n / 10);
}
int main()
{
    ll n ; cin >> n;
    if(check(n)) cout << "YES";
    else cout << "NO";
}
