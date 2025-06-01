#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;
const int maxn = 1e6 + 1;
bool cnt[maxn];
int main()
{
    int n ; cin >> n;
    int a[n] , Min = MOD , Max = 0;
    for(int i = 0 ; i < n ;i++) 
    {
        cin >> a[i];
        Max = max(Max , a[i]);
        Min = min(Min , a[i]);
        cnt[a[i]] = true;
    }
    int ans = 0;
    for(int i = Min ; i <= Max ; i++)
    {
        if(!cnt[i]) ++ans;
    }
    cout << ans;
}