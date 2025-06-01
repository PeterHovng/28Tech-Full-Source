#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    queue<ll>q;
    q.push(8);
    vector<ll>v;
    while(true)
    {
        ll top = q.front(); q.pop();
        if(top >= 1e18) break;
        v.push_back(top);
        q.push(top * 10);
        q.push(top * 10 + 8);
    }
    ll res[201];
    for(int i = 1 ;i <= 200 ;i++)
    {
        for(ll x : v)
        {
            if(x % i == 0)
            {
                res[i] = x;
                break;
            }
        }
    }
    int t ; cin >> t;
    while(t--)
    {
        int n ; cin>> n;
        cout << res[n] << endl;
    }
    return 0;
}