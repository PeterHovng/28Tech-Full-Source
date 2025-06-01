#include <bits/stdc++.h>

using namespace std;


int main() {
    string s; cin>>s;
    map<char, int> mp;
    set<char> se;
    vector<char> v;
    for(auto x: s)
	{
        mp[x]++;
        se.insert(x);
        v.push_back(x);
    }
    long long dem=0;
    dem += v.size();
    for(auto x : se)
	{
        if(mp[x] >= 2)
		{
           long long n = mp[x];
           dem += (long long)n*(n-1)/2;
        }
    }
    cout << dem ;
}
