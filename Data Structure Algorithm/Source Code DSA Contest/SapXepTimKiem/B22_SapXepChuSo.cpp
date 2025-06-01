#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;
int main()
{
    int n ; cin >> n;
    set<char>se;
    for(int i = 0 ; i < n ;i++)
    {
        string s ; cin >> s;
        for(char x : s)
        {
            se.insert(x);
        }
    }
    for(char x : se) cout << x << " ";
}