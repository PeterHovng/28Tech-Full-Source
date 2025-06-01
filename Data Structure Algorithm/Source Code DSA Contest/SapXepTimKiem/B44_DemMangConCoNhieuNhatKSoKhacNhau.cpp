#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main()
{
    int n , k; cin >> n >> k;
    map<int,int>mp;
    int a[n];
    ll ans = 0 , cnt = 0 , l = 0;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a[i];
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
}
