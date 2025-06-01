#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

ll soCach(ll n , ll k)
{
    if(k % 2 == 1) return 1;
    ll x = pow(2 , n - 1);
    if(k == x)
    {
        return n;
    }
    else if(k > x) return soCach(n - 1 , k - x);
    else return soCach(n - 1 , k);
}
int main()
{
   ll n , k ; cin >> n >> k;
   cout << soCach(n , k) << endl;
}
