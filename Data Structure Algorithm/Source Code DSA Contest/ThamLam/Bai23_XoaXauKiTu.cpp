#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long ull;
const int MOD = 1e9 + 7;

int main()
{
    string s ; cin >> s;
    vector<int>v;
    for(int i = 0 ; i < s.length() ;i++)
    if(s[i] == '1')
    {
        int j = i;
        while(j + 1 < s.length() && s[j + 1] == '1')
        {
            ++j;
        }
        v.push_back(j - i + 1);
        i = j;
    }
    sort(v.begin(), v.end() , greater<int>());
    int ans = 0;
    for(int i = 0 ; i < v.size() ; i += 2)
    {
        ans += v[i];
    }
    cout << ans << endl;
}