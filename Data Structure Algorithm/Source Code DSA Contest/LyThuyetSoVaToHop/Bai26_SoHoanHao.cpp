#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll>v;
bool check(int n)
{
    for(int i = 2 ; i <= sqrt(n) ;i++)
    {
        if(n % i == 0) return false;
    }
    return n > 1;
}
void sinhHoanHao()
{
    for(int p = 1 ; p <= 32 ; p++)
    {
        if(check(p))
        {
            ll tmp = pow(2 , p) - 1;
            if(check(tmp))
            {
                ll res = tmp * pow(2 , p - 1);
                v.push_back(res);
            }
        }
    }
}
int main()
{
    sinhHoanHao();
    ll n ; cin >> n;
    for(ll x : v)
    {
        if(n == x)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}
