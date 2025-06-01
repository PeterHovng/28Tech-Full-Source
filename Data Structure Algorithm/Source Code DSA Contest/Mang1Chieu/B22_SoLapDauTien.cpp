#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;
const int Maxn = 1e6 + 1;

int ans[Maxn];

int main()
{
    int n ; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    for(int x : a)
    {
        ans[x]++;
        if(ans[x] >= 2)
        {
            cout << x ;
            return 0;
        }
    }
    cout << -1;
}

