#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    string s ; cin >> s;
    map<int,int>mp;
    for(int i = 0 ; i < s.length() ; i++)
    {
        mp[s[i]]++;
    }
    int dem = 0;
    for(auto x : mp)
    {
        if(x.second % 2 == 1) ++dem;
    }
    if(dem <= 1) cout << 1;
    else 
    {
        if(dem % 2 == 1) cout << 1;
        else cout << 2; 
    }
}
