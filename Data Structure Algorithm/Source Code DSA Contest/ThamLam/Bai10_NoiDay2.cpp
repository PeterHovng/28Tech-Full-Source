#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
int main()
{
    int n ; cin >> n;
    priority_queue<ll>Q;
    for(int i = 0 ;i < n;i++)
    {
        int x ; cin >> x;
        Q.push(x);
    }
    ll ans = 0;
    while(Q.size() > 1)
    {
        int tmp = Q.top(); Q.pop();
        tmp %= MOD;
        int res = Q.top(); Q.pop();
        res %= MOD;
        Q.push(tmp + res);
        ans += tmp + res;
        ans %= MOD;
    }
    cout << ans;
}