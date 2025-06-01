#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;

int main()
{
    string s ; cin >> s;
    string res = "";
    string Max = string(1 , s[0]);
    res += s[0];
    int ans = 1 , tmp = 1;
    for(int i = 1 ; i < s.length() ; i++)
    {
        if(s[i] != s[i - 1])
        {
            res += s[i];
            ++ans;
        }
        else res = s[i] , ans = 1;
        
        if(ans > tmp)
        {
            tmp = ans;
            Max = res;
        }
        else if(ans == tmp)
        {
            Max = max(res , Max);
        }
    }
    cout << Max;
    return 0;
}
