#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

struct Balo{
    int kg , gt;
};
int x[1001] , ok , n , m;

void ktao()
{
    for(int i = 1 ; i<= n ; i++)
    {
        x[i] = 0;
    }
}
void sinh()
{
    int i = n;
    while(i >= 1 && x[i] == 1)
    {
        x[i] = 0;
        --i;
    }
    if(i == 0) ok = 0;
    else
    {
        x[i] = 1;
    }
}
int main()
{
    cin >> n >> m;
    Balo a[209];
    for(int i = 1 ; i <= n ;i++)
    {
        cin >> a[i].kg;
    }
    for(int i = 1 ; i <= n ;i++)
    {
        cin >> a[i].gt;
    }
    sort(a + 1 ,a + n + 1 ,[](Balo a , Balo b)->bool
    {
        return float(a.gt / a.kg) > float(b.gt / b.kg);
    });
    ok = 1;
    ll res = 0;
    while(ok)
    {
        ll ans = 0 , sum = 0;
        for(int i = 1 ; i <= n ;i++)
        {
            if(x[i] == 1)
            {
                ans += a[i].gt;
                sum += a[i].kg;
            }
        }
        if(sum <= m)
        {
            res = max(ans , res);
        }
        sinh();
    }
    cout << res;
    return 0;
}
