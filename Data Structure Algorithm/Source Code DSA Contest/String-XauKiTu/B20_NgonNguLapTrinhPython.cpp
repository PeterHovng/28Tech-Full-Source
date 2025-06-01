#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s ; cin >> s;
    string t = "python";
    int cnt = 0;
    for(int i = 0 ; i < s.length() ; i++)
    {
        if(cnt >= 6) break;
        if(s[i] == t[cnt])
        {
            ++cnt;
        }
    }
    if(cnt == 6) cout << "YES";
    else cout << "NO";
}
