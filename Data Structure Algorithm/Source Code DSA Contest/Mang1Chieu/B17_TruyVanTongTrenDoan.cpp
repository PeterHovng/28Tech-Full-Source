#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;
const int Maxn = 1e7 + 1;


int main()
{
    int n ; cin >> n;
    int a[n + 1];
    ll prefix[n + 1];
    prefix[0] = 0;
    for(int i = 1 ; i <= n ; i++)
    {
        cin >> a[i];
        prefix[i] = prefix[i - 1] + a[i];
    }
    int q; cin >> q;
    while(q--)
    {
        int l , r ; cin >>l >> r;
        cout << prefix[r] - prefix[l - 1] <<endl;
    }
}

