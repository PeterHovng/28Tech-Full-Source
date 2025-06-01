#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;
const int Maxn = 1e6 + 1;

int ans[Maxn];

int main()
{
    int n , x ; cin >> n >> x;
    int a[n];
    for(int i= 0 ; i < n ;i++) cin >> a[i];
    int vtd  , vtc , ok = 0;
    for(int i = 0 ; i < n ;i++)
    {
        if(a[i] == x && ok == 0)
        {
            vtd = i;
            ok = 1;
        }
        if(a[i] == x && ok == 1)
        {
            vtc = i;
        }
    }
    if(ok) cout << vtd + 1 << " " << vtc + 1<< endl;
    else cout << -1 << " " << -1;
}

