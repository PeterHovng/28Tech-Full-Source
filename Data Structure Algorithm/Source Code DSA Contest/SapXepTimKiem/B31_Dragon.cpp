#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;
int main()
{
    ll n , s; cin >> n >> s;
    pair<ll,ll>a[n];
    for(int i = 0 ; i < n ; i++) 
    {
        cin >> a[i].first >> a[i].second;
    }
    sort(a , a + n);
    for(int i = 0 ; i < n ;i++)
    {
        if(a[i].first >= s)
        {
            cout << "NO";
            return 0;
        }
        s += a[i].second;
    }
    cout << "YES";
}