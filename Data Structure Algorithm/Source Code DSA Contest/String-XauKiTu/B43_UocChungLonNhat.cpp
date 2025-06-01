#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;
ll gcd(ll a , ll b)
{
    if(b == 0) return a;
    return gcd(b , a % b);
}
int main()
{
    string s; cin >>s;
    ll x ; cin >> x;
    ll sum = 0;
    for(int i = 0 ;i < s.length() ; i++)
    {
        sum = sum * 10 + s[i] - '0';
        sum %=x;
    }
    cout << gcd(x , sum);
}
