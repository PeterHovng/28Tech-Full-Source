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
        ll top = q.front();
        q.pop();
        v.push_back(top);
        if(top > 7e18) break;
        q.push(top * 10);
        q.push(top * 10 + 1);
    }
    ll res[501] = {0};
    for(int i = 1 ;i <= 500 ; i++)
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
    int t; cin >> t;
    while(t--)
    {
        int n ; cin >> n;
        cout << res[n] << endl;
    }
    return 0;
}