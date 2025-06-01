#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

string s ; int ok;
void sinh()
{
    int i = s.length() - 1; 
    while(i >= 0 && s[i] == '1')
    {
        s[i] = '0';
        --i;
    }
    if(i == -1) ok = 0;
    else
    {
        s[i] = '1';
    }
}
int main()
{
    vector<string>v;
    int n ; cin >> n;
    for(int i = 1 ; i <= n / 2 ; i++)
    {
        ok = 1;
        s = string(i, '0');
        while(ok)
        {
            string t = s ; reverse(t.begin() , t.end());
            v.push_back(s + t);
            sinh();
        }
    }
    sort(v.begin() , v.end());
    for(auto x : v) cout << x << endl;
    return 0;
}
