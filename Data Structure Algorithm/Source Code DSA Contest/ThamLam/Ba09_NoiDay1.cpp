#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
int main()
{
    int n ; cin >> n;
    priority_queue<ll , vector<ll> , greater<ll>>Q;
    for(int i = 0 ;i < n;i++)
    {
        int x ; cin >> x;
        Q.push(x);
    }
    ll ans = 0;
    while(Q.size() > 1)
    {
        ll tmp = Q.top(); Q.pop();
        ll res = Q.top(); Q.pop();
        Q.push(tmp + res);
        ans += tmp + res;
    }
    cout << ans;
}