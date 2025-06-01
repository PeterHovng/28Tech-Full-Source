#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

struct Job
{
    int stt , fi , se;
};
bool cmp(Job a , Job b)
{
    return a.se > b.se;
}
int main()
{
    int n ; cin >> n;
    Job a[n];
    for(int i = 0 ; i < n ;i++)
    {
        cin >> a[i].stt >> a[i].fi >> a[i].se;
    }
    sort(a , a + n , cmp);
    int check[n + 1];
    memset(check, 0, sizeof(check));
    int res = 0;
    for(int i = 0 ;i < n ;i++)
    {
        while(check[a[i].fi] && a[i].fi > 0) --a[i].fi;
        if(a[i].fi > 0 && !check[a[i].fi])
        {
            res += a[i].se;
            check[a[i].fi] = 1;
        }
    }
    cout << res;
}