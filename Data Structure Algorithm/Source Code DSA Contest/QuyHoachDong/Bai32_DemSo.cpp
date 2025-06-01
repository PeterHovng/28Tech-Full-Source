#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const int MOD = 1e9 + 7;

ll powmod(ll a , ll b , ll mod)
{
    ll res = 1;
    while(b)
    {
        if(b % 2 == 1)
        {
            res *= a;
            res %= mod;
        }
        a *= 2;
        b /= 2;
        a %= mod;
    }
    return res;
}
ll digitNumber(ll n , vector<ll>v)
{
    if (n < 1) return n == 0 ? 1 : 0;
    ll res = 0;
    string s = to_string(n);
    int m = s.length();
    for(int i = 0 ; i < m ;i++)
    {
        res += v[i];
    }
    res += ((s[0] - '0') - 1)* v[m - 1];
    for(int i = 1 ; i < m ; i++)
    {
        int ans = s[i] - '0';
        int tmp = m - i - 1;
        int best = s[i] > s[i - 1] ? ans - 1 : ans;
        res += ans == 0 ? 0 : best * v[tmp];
        if(s[i] == s[i - 1]) return res;
    }
    return res + 1;
}
void init()
{
    ll a , b ; cin >> a >> b;
    vector<ll>v(19);
    v[0] = 1;
    for(int i = 1 ; i <= 18 ; i++)
    {
        v[i] = v[i - 1] * 9;
    }
    cout << digitNumber(b , v) - digitNumber(a - 1 , v);
}
int main()
{
    init();
}
