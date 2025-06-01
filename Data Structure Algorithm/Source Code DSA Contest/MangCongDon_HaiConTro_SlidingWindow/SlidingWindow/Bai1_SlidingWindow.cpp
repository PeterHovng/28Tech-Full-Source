#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
typedef long long ll;

int main()
{
    int n , k ; cin >> n >> k;
    int a[n]; for(int i = 0 ; i< n ;i++) cin >> a[i];
    ll sum = 0;
    for(int i = 0 ; i < k ; i++)
    {
        sum += a[i];
    }
    ll ans = max(ans , sum) , idx = k - 1 , res = 0;
    for(int i = k ; i < n ;i++)
    {
        sum = sum - a[i - k] + a[i];
        if(sum > ans)
        {
            idx = i;
            ans = sum;
        }
    }
    cout << ans << endl;
    for(int i = idx - k + 1 ; i <= idx ; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}