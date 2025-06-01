#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
typedef long long ll;

int main()
{
    string s ; cin >> s;
    set<char>se;
    for(char x : s)
    {
        se.insert(x);
    }
    int n = se.size() , cnt = 0 , l = 0 , ans = MOD;
    map<char,int>mp;
    for(int i = 0 ;i < s.size() ; i++)
    {
        mp[s[i]]++;
        if(mp[s[i]] == 1) ++cnt;
        while(cnt >= n)
        {
            ans = min(ans , i - l + 1);
            mp[s[l]]--;
            if(mp[s[l]] == 0) --cnt;
            ++l;
        }
    }
    cout << ans;
    return 0;
}