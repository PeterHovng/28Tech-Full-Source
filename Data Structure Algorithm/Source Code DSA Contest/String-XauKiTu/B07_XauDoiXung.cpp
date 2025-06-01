#include <bits/stdc++.h>
using namespace std;

bool check(string s)
{
    string t = s;
    reverse(t.begin() , t.end());
    return t == s;
}
bool check2(string s)
{
    int l = 0 , r = s.length() - 1;
    while(l <= r)
    {
        if(s[l] != s[r])
        {
            return false;
        }
        ++l ; --r;
    }
    return true;
}
int main()
{
    string s ; cin>>s;
    if(check(s))
    {
        cout << "YES";
    }
    else cout << "NO";
}
