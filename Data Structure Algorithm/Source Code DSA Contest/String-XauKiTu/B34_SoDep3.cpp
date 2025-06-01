#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;

bool check1(string s)
{
    char Max = s[0];
    for(char x : s)
    {
        if(x < Max) return false;
        Max = x;
    }
    return true;
}
bool check2(string s)
{
    char Max = s[0];
    for(char x : s)
    {
        if(x > Max) return false;
        Max = x;
    }
    return true;
}
int main()
{
    string s ; cin >> s;
    if(check2(s) || check1(s)) cout << "YES";
    else cout << "NO";
    return 0;
}
