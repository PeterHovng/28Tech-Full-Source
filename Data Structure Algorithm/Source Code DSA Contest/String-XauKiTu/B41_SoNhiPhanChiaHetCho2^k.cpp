#include <bits/stdc++.h>
using namespace std;


typedef long long ll;
const int MOD = 1e9 + 7;

bool check(string s , int k)
{
    int cnt = 0;
    for(int i = s.length() - 1 ; i >= 0 ; i--)
    {
        if(s[i] == '0')
        {
            ++cnt;
        }
        else if(s[i] != '0' && cnt < k) return false;
        if(cnt >= k) return true;
    }
    return false;
}

int main()
{
    string s ; cin >> s;int k ; cin >> k;
    if(check(s , k)) cout << "YES";
    else cout << "NO";
    return 0;
}
