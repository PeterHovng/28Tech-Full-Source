#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e6 + 1;
int t[maxn];
void sang()
{
    t[0] = t[1] = 1;
    for(int i = 2 ; i <= sqrt(maxn) ; i++)
    {
        if(t[i] == 0)
        {
            for(int j = i * i ; j <= maxn ;j += i)
            {
                t[j] = 1;
            }
        }
    }
}
int main()
{
    ll n ; cin >> n;
    sang();
    int ans = 0;
    for(ll i = 2 ;i <= sqrt(n) ;i ++)
    {
        if(t[i] == 0)
        {
            ++ans;
        }
    }
    cout << ans;
}