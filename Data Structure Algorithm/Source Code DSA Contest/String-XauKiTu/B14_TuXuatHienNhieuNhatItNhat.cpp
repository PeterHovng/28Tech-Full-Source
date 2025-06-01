#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<string,int>a , pair<string,int>b) 
{
    if(a.second != b.second) return a.second < b.second;
    return a.first < b.first;
}
int main()
{
    string s ; getline(cin , s);
    map<string,int>mp;
    string x;
    stringstream ss(s);
    vector<pair<string , int>>v;
    while(ss >> x)
    {
        mp[x]++;
    }
    for(auto x : mp)
    {
        v.push_back(x);
    }
    sort(v.begin() , v.end(),cmp);
    cout << v[v.size() - 1].first << " " << v[v.size() - 1].second << endl;
    int res = v[0].second;
    string kq = v[0].first;
    for(int i = 1 ; i < v.size() ; i++)
    {
        if(v[i].second == res)
        {
            kq = v[i].first;
        }
    }
    cout << kq << " " << res;
}
