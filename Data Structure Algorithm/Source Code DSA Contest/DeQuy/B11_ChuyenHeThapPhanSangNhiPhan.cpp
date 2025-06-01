#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

void nhiPhan(ll n)
{
    if(n == 0) 
    {
        return;
    }
    int tmp = n % 2;
    nhiPhan(n / 2);
    cout << tmp;
}

int main()
{
    ll n ;cin >> n;
    if(n == 0) cout << 0;
    else nhiPhan(n);
}
