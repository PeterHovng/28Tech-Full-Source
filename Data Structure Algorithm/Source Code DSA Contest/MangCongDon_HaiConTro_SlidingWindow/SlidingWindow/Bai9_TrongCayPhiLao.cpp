#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
typedef long long ll;

int main()
{
    int n , k ; cin >> n >> k;
    int a[n]; for(int i = 0 ; i < n ;i++) cin >> a[i];
    int ans = 0 , res = accumulate(a ,a + n , 0);
    for(int i = 0 ; i < k ; i++)
    {
        ans += a[i];
    }
    int sum = ans;
    for(int i = k ; i < n ; i++)
    {
        ans = ans - a[i- k] + a[i];
        sum = max(sum , ans);
    }
    if(sum == k) cout << 0;
    else
    {
        if((k - sum) <= (res - sum))
        {
            cout << k - sum;
        }
        else cout << -1;
    }
	return 0;
}