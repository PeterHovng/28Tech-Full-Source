#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<ll,ll>pi;
const int MOD = 1e9 + 7;

//Code by : Hoang Phuong!


ll check(ll x , ll n)
{
    ll ans = 0;
    if(x == 1) return 1;
    for(ll i = 1 ; i <= sqrt(x) ; i++)
    {
        if(x % i == 0)
        {
            if(x / i == i)
            {
                if(i <= n) ++ans;
            }
            else
            {
                if(x / i <= n && i <= n) ans += 2;
            }
        }
    }
   return ans;
}
int main()
{
    ios::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    ll n , x ; cin >> n >> x;
    cout << check(x , n);
    return 0;
}
