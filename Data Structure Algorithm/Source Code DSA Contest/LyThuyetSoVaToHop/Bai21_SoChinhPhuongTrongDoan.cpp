#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll a , b ; cin >> a >> b;
    for(ll i = sqrt(a) ; i <= sqrt(b) ; i++)
    {
        ll tmp = i * i;
        if(tmp >= a && tmp <= b)
        {
            cout << tmp << " ";
        }
    }
}
