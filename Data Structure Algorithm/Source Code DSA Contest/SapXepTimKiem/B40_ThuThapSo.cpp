#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main()
{
    int n ; cin >> n;
    int a[n + 1];
    for(int i = 1 ; i <= n ; i++)
    {
        int x ; cin >> x;
        a[x] = i;
    }
    int ans = 1;
    for(int i = 2 ; i <= n ; i++)
    {
        if(a[i] < a[i - 1]) ++ans;
    }
    cout << ans;
}