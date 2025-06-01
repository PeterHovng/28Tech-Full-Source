#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

bool aka(char c)
{
    return c == 'A' || c == 'E';
}
bool check(string s)
{
    for(int i = 1 ; i  <= s.size() - 2; i++)
    {
        if(aka(s[i]) && !aka(s[i - 1]) && !aka(s[i + 1])) return false;
    }
    return true;
}
int main()
{
    char n ; cin >> n;
    string s = "";
    for(int i = 1 ; i <= n - 'A' + 1 ;i++)
    {
        s += 'A' + i - 1;
    }
    vector<string>v1,v2;
    do
    {
        if(check(s)) cout <<s << endl;
    }while(next_permutation(s.begin() , s.end()));
    return 0;
}
