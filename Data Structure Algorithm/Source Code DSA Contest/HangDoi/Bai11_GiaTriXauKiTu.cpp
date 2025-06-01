#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t ; cin >> t;
    while(t--)
    {
        ll k ; cin >> k;
        string s ; cin >> s;
        map<char , ll>mp;
        for(char x : s)
        {
            mp[x]++;
        }
        priority_queue<ll , vector<ll>>q;
        for(auto x : mp)
        {
            q.push(x.second);
        }
        while(!q.empty() && k > 0)
        {
            --k;
            ll top = q.top(); q.pop();
            top--;
            if(top > 0) q.push(top);
        }
        ll ans = 0;
        while(!q.empty())
        {
            ll res = 1ll * q.top() * q.top();
            ans += res;
            q.pop();
        }
        cout << ans << endl;
    }
}