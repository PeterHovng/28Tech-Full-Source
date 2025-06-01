#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

int main()
{
    int n , k ; cin >> n >> k;
    int a[n];
    for(int i = 0 ; i < n ;i++)
    {
        cin >> a[i];
    }
    if(k > n / 2)
    {
        sort(a , a + n , greater<int>());
        ll sum1 = 0 , sum2 = 0;
        for(int i = 0 ; i < k ; i++) sum1 += a[i];
        for(int j = k ; j < n ; j++) sum2 += a[j];
        cout << sum1 - sum2;
    }
    else
    {
        sort(a , a + n);
        ll sum1 = 0 , sum2 = 0;
        for(int i = 0 ; i < k ; i++) sum2 += a[i];
        for(int j = k ; j < n ; j++) sum1 += a[j];
        cout << sum1 - sum2;
    }
}
