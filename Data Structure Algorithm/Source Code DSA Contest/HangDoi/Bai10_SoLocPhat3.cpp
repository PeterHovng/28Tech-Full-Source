#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    queue<ll>q;
    q.push(6);
    q.push(8);
    vector<ll>v;
    while(true)
    {
        ll top = q.front();
        q.pop();
        v.push_back(top);
        if(to_string(top).size() > 18) break;
        q.push(top *10 + 6);
        q.push(top * 10 + 8);
    }
    int t ; cin >> t;
    while(t--)
    {
        int n ; cin>> n;
        vector<ll>tmp;
        for(ll x : v)
        {
            if(to_string(x).size() > n) break;
            tmp.push_back(x);
        }
        sort(tmp.begin() , tmp.end() , greater<ll>());
        cout << tmp.size() << endl;
        for(ll x : tmp) cout << x << " ";
        cout << endl;
    }
    return 0;
}