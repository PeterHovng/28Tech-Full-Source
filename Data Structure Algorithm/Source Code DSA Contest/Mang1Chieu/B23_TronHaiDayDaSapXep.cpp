#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;
const int Maxn = 1e6 + 1;

int ans[Maxn];

int main()
{
    int n  , m; cin >> n;
    int a[n] , b[n];
    for(int &x : a) cin >> x;
    for(int &x : b) cin >> x;
    sort(a , a + n); sort(b , b + n , greater<int>());
    int k = 0, l = 0;
    for(int i = 0 ; i < n + n ; i++)
    {
        if(i % 2== 0)
        {
            cout << a[k++] << " ";
        }
        else cout << b[l++] << " ";
    }
}

