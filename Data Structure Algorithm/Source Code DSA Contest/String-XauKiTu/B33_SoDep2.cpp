#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;

bool thuanNgich(string s)
{
    string t = s;
    reverse(t.begin() , t.end());
    return s == t;
}
bool kt(string s)
{
    for(char x : s)
    {
        if(x == '6') return true;
    }
    return false;
}
int main()
{
    string s ; cin >> s;
    if(kt(s) && thuanNgich(s)) cout << "YES";
    else cout << "NO";
    return 0;
}
