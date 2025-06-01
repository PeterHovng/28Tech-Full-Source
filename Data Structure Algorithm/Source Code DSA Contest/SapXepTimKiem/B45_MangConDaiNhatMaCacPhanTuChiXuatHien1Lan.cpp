#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main()
{
    int n ; cin >> n;
    map<int,int>mp;
    int a[n] , ans = 0 , l = 0;
    for(int i = 0 ; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
        while(mp[a[i]] > 1)
        {
            mp[a[l]]--;
            ++l;
        }
        ans = max(i - l + 1 , ans);
    }
    cout << ans;
}
