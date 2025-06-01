#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

string s ; int ok;
void sinh()
{
    int i = s.length() - 1; 
    while(i >= 0 && s[i] == '8')
    {
        s[i] = '6';
        --i;
    }
    if(i == -1) ok = 0;
    else
    {
        s[i] = '8';
    }
}
int main()
{
    int n ; cin >> n;
    vector<string>v;
    for(int i = 1 ; i <= 15 ; i++)
    {
        s = string(i , '6');
        ok = 1;
        while(ok)
        {
            string tmp = s; reverse(tmp.begin() , tmp.end());
            v.push_back(s + tmp);
            sinh();
        }
    }
    int ans = 0;
    for(auto x : v)
    {
        ++ans;
        cout << x << " ";
        if(ans == n) break;
    }
    return 0;
}
