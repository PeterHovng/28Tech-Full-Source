#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
const int maxn = 1e6 + 1;
ll gt[maxn];
ll powmod(ll a , ll b , ll m)
{
    a %= m;
    ll res = 1;
    while(b)
    {
        if(b % 2 == 1)
        {
            res *= a;
            res %= m;
        }
        a *= a;
        a %= m;
        b /= 2;
    }
    return res;
}
void giaithua()
{
    gt[0] = 1;
    for(int i = 1 ;i <= 1e6 ; i++)
    {
        gt[i] = gt[i - 1] * i;
        gt[i] %= MOD;
    }
}

int main()
{
    giaithua();
    string s ; cin >> s;
    int n = s.length();
    map<char,int>mp;
    for(char x : s) mp[x]++;
    ll sum = 1;
    for(auto x : mp)
    {
        sum *= gt[x.second];
        sum %= MOD;
    }
    ll res = powmod(sum , MOD - 2 , MOD);
    cout << ((gt[n] % MOD) *(res % MOD)) %MOD;
}