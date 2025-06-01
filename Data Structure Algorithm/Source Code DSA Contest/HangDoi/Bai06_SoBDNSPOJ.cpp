#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    queue<ll>q;
    q.push(1);
    vector<ll>v;
    while(true)
    {
        ll top = q.front(); q.pop();
        if(top >= 1e18) break;
        v.push_back(top);
        q.push(top * 10);
        q.push(top * 10 + 1);
    }
    int t ; cin >> t;
    while(t--)
    {
        ll ans = 0;
        ll n ; cin>> n;
        for(auto x : v)
        {
            if(x >= n) break;
            ++ans;
        }
        cout << ans << endl;
    }
}