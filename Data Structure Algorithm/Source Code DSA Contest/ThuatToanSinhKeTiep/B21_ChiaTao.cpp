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
    int n ; cin >>  n;
    ll a[n]; for(ll &x : a) cin >> x;
    s = string(n , '0');
    ok = 1; ll res = 1e9;
    while(ok)
    {
        ll sum1 = 0 , sum2 = 0;
        for(int i = 0 ; i < s.length() ; i++)
        {
            if(s[i] == '0')
            {
                sum1 += a[i];
            }
            else sum2 += a[i];
        }
        res = min(abs(sum1 - sum2) , res);
        sinh();
    }
    cout << res;
    return 0;
}
