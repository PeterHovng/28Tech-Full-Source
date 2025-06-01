#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;

int main()
{
    string s ; cin >> s;
    s = s + "a";
    ll res = 0 , sum = 0;
    for(int i = 0 ; i < s.length() ; i++)
    {
        if(isdigit(s[i]))
        {
            sum = sum * 10 + s[i] - '0';
        }
        else
        {
            res += sum;
            sum = 0;
        }
    }
    cout << res;
    return 0;
}
