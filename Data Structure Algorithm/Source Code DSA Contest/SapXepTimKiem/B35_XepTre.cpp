#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;
int main()
{
    int n , s ; cin >> n >> s;
    ll a[n] , ans = 0;
    for(int i = 0 ; i < n;i++) cin >> a[i];
    sort(a , a + n);
    int i = 0 , j = n - 1;
    while(i < j)
    {
        if(a[i] + a[j] <= s)
        {
            ++ans;
            ++i ; --j;
        }
        else
        {
            ++ans ; 
            --j;
        }
    }
    if(i == j) ++ans;
    cout << ans;
}