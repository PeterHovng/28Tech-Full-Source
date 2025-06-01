#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
typedef long long ll;

int main()
{
    int n , k ; cin >> n >> k;
    int a[n];
    for(int i = 0 ; i < n; i++) cin >> a[i];
    int l = 0 , ans = MOD , idx = 0;
    ll sum = 0;
    for(int i = 0 ; i < n; i++)
    {
        sum += a[i];
        while(sum >= k)
        {
            if((i - l + 1) < ans)
            {
                idx = l;
                ans = i - l + 1;
            }
            sum -= a[l];
            ++l;
        }
    }
    if(ans == MOD) cout << -1;
    else
    {
        for(int i = idx ; i <= idx + ans - 1 ; i++)
        {
            cout << a[i] << " ";
        }
    }
	return 0;
}