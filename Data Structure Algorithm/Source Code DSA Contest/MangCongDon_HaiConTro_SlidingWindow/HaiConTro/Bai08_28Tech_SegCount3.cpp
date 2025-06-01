#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n , k ; cin >> n >> k;
    int a[n];
    for(int i = 0 ;i < n;i++) cin >> a[i];
    map<int,int>mp;
    int cnt = 0 , l = 0;
    ll ans = 0;
    for(int i = 0 ;i  < n;i++)
    {
        mp[a[i]]++;
        if(mp[a[i]] == 1) ++cnt;
        while(cnt > k)
        {
            mp[a[l]]--;
            if(mp[a[l]] == 0) --cnt;
            ++l;
        }
        ans += i - l + 1;
    }
    cout << ans;
    return 0;
}