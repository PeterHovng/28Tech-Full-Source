#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

int main()
{
    int k ; cin >> k;
    string s ; cin >> s;
    map<char,int>mp;
    for(char x : s)
    {
        mp[x]++;
    }
    priority_queue<int>Q;
    for(pair<char,int> x : mp)
    {
        Q.push(x.second);
    }
    while(!Q.empty() && k--)
    {
        int tmp = Q.top();
        Q.pop();
        --tmp;
        if(tmp > 0) Q.push(tmp);
    }
    ll res = 0;
    while(!Q.empty())
    {
        res += Q.top() * Q.top();
        Q.pop();
    }
    cout << res << endl;
}
