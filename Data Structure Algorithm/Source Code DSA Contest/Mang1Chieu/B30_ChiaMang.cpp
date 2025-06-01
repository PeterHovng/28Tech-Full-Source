#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;
int main()
{
    int n , k ; cin >> n >> k;
    int a[n];
    for(int i = 0 ; i < n ; i++) cin >> a[i];
    ll sum1 = 0 , sum2 = 0;
    if(k > n / 2) 
    {
        sort(a  , a + n , greater<int>());
        for(int i = 0 ; i < k ; i++) sum1 += a[i];
        for(int i = k ; i < n; i++) sum2 += a[i];
        cout << sum1 - sum2 << endl;
    }
    else
    {
        sort(a , a + n);
        for(int i = 0 ; i < k ; i++) sum1 += a[i];
        for(int i = k ; i < n ; i++) sum2 += a[i];
        cout << sum2 - sum1;
    }
}

