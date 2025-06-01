#include <bits/stdc++.h>
using namespace std;

bool cmp1(pair<int,int> a , pair<int,int>b)
{
    if(a.second != b.second) return a.second > b.second;
    
    return a.first < b.first;
}
bool cmp2(pair<int,int>a , pair<int,int>b)
{
    return a.second > b.second;
}
int main()
{
    int n ; cin >> n;
    int a[n]; map<int,int>mp;
    for(int i = 0 ;i  < n ;i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    vector<pair<int,int>>v;
    vector<pair<int,int>>v2;
    for(int i = 0 ; i < n ;i++)
    {
        v.push_back({a[i], mp[a[i]]});
        v2.push_back({a[i] , mp[a[i]]});
    }
    sort(v.begin() , v.end() , cmp1);
    for(auto x : v) cout << x.first << " ";
    cout << endl;
    stable_sort(v2.begin() , v2.end() , cmp2);
    for(auto x : v2)
    {
        while(mp[x.first] != 0)
        {
            cout << x.first << " ";
            mp[x.first]--;
        }
    }
}