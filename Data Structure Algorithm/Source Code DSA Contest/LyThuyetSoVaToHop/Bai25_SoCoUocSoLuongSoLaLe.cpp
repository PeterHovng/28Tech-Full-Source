#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n ; cin >>n;
    ll x = sqrt(n);
    if(x * x == n) cout << "YES";
    else cout << "NO";
}
