#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e7 + 1;
const int MOD = 1e9 + 7;
bool check(int n)
{
    for(int i= 2 ;i <= sqrt(n) ;i++)
    {
        if(n % i == 0) return false;
    }
    return n > 1;
}
ll uocSo(int n , int p)
{
    ll ans = 0;
    for(int i = p ; i <= n ;i *= p)
    {
        ans += n / i;
        ans %= MOD;
    }
    return ans;
}
int main()
{
    int n ; cin >> n;
    ll ans = 1;
    for(int i =2 ; i <= n ;i++)
    {
        if(check(i))
        {
            ans *= (uocSo(n , i) + 1);
            ans %= MOD;
        }
    }
    cout << ans;
}
