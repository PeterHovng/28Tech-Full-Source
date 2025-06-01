#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e7 + 1;

int main()
{
    ll n ; cin >> n;
    string s = to_string(n);
    map<char,int>mp;
    for(char x : s)
    {
        if(x == '2' || x == '5' || x == '7' || x == '3')
        {
            mp[x]++;
        }
    }
    for(auto x : mp)
    {
        cout << x.first << " " << x.second << endl;
    }
    cout << endl;
    for(char x : s)
    {
        if(mp[x] != 0)
        {
            cout << x << " " << mp[x] << endl;
            mp[x] = 0;
        }
    }
}
