#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
struct Fly
{
    int f , s , w;
    friend istream& operator >> (istream& in , Fly &a)
    {
        cin >> a.f >> a.s >> a.w;
        return in;
    }
};
bool cmp(Fly a , Fly b)
{
    return a.s < b.s;
}
int binary(Fly a[] , int i)
{
    int l = 0 , r = i - 1 , res = -1;
    while(l <= r)
    {
        int m = (l + r) / 2;
        if(a[m].s < a[i].f)
        {
            res = m;
            l = m + 1;
        }
        else r = m - 1;
    }
    return res;
}
int main()
{
    int n ; cin >> n;
    Fly a[n];
    for(int i = 0 ; i < n ;i++)
    {
        cin >> a[i];
    }
    sort(a , a + n, cmp);
    ll dp[n];
    dp[0] = a[0].w;
    for(int i = 1 ;i < n ; i++)
    {
        ll tmp = a[i].w;
        int res = binary(a , i);
        if(res != -1)
        {
            tmp += dp[res];
        }
        dp[i] = max(dp[i - 1] , tmp);
    }
    cout << dp[n - 1];
    return 0;
}