#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
typedef long long ll;

int main()
{
    string s , t ; cin >> s >> t;
    map<char,int>mp1 , mp2;
    int cnt = 0 , l = 0 ,ans = MOD , idx = -1;
    for(char x : t) mp1[x]++;
    for(int i = 0 ;i <s.size() ;i++)
    {
        char x = s[i];
        mp2[x]++;
        if(mp2[x] <= mp1[x]) ++cnt;
        if(cnt == t.size())
        {
            while(mp2[s[l]] > mp1[s[l]] || mp1[s[l]] == 0)
            {
                if(mp1[s[l]] != 0)
                {
                    mp2[s[l]]--;
                }
                ++l;
            }
            if((i - l + 1) < ans)
            {
                ans = i - l + 1;
                idx = l;
            }
        }
    }
    if(idx == -1) cout << -1;
    else
    {
        cout << s.substr(idx , ans);
    }
	return 0;
}