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
    int ans = 1 , res = 1 , idx;
    for(int i = 1 ; i < n ;i++) 
    {
        if(a[i] != a[i - 1]) ++ans;
        else ans = 1;

        if(ans >= res) 
        {
            res = ans;
            idx = i;
        }
    }
    cout << res << endl;
    for(int i = idx - res + 1 ; i <= idx ; i++)
    {
        cout << a[i] << " ";
    }
}

