#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    string s ; cin >> s;
    int x , y ; cin >> x >> y;
    map<char,int>mp;
    int l = 0 , ans = 0;
    for(int i = 0 ; i < s.size() ; i++)
    {
        mp[s[i]]++;
        while(mp['2'] > x || mp['8'] > y)
        {
            mp[s[l]]--;
            ++l;
        }
        ans = max(i - l + 1 , ans);
    }
    cout << ans;
    return 0;
}