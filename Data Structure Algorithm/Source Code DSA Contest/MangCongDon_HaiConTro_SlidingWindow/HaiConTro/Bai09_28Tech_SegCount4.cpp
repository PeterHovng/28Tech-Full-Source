#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n , k ; cin >> n >> k;
    int a[n];
    for(int i = 0 ;i < n;i++) cin >> a[i];
    multiset<int>se;
    ll ans = 0 , l = 0;
    for(int i = 0; i< n ;i++)
    {
        se.insert(a[i]);
        while((*se.rbegin()) - (*se.begin()) > k)
        {
            se.erase(se.find(a[l]));
            ++l;
        }
        ans += i - l + 1;
    }
    cout << ans;
    return 0;
}