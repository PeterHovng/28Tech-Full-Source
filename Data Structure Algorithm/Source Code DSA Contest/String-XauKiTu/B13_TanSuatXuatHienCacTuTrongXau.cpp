#include <bits/stdc++.h>
using namespace std;
bool check(string s)
{
    string t = s;
    reverse(t.begin() , t.end());
    return t == s;
}
int main()
{
    string s ; getline(cin , s);
    map<string,int>mp;
    string x;
    stringstream ss(s);
    vector<string>v;
    while(ss >> x)
    {
        v.push_back(x);
        mp[x]++;
    }
    for(auto x : mp)
    {
        cout << x.first << " " << x.second << endl;
    }
    cout << endl;
    for(string x : v)
    {
        if(mp[x] != 0)
        {
            cout << x << " " << mp[x] << endl;
            mp[x] = 0;
        }
    }
}
