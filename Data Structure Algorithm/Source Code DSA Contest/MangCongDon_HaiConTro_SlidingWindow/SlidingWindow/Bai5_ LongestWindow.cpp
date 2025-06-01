#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
typedef long long ll;

int main()
{
    string s ; cin >> s;
    map<char,int>mp;
    int l = 0 , ans = 0 , cnt =0;
    for(int i = 0 ; i < s.size() ; i++)
    {
        mp[s[i]]++;
        while(mp[s[i]] > 1)
        {
            mp[s[l]]--;
            ++l;
        }
        ans = max(ans , i - l + 1);
    }
    cout <<ans;
	return 0;
}