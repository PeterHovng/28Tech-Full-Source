#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

int main()
{
    ll n ; cin >> n;
    ll tmp = sqrt(n);
    if(tmp * tmp == n) cout << "YES";
    else cout << "NO";
}