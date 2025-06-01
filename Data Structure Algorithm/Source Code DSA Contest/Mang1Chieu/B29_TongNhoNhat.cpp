#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;
int main()
{
    int n ; cin >> n;
    int a[n];
    for(int i = 0 ;i < n ;i++) cin >> a[i];
    sort(a , a + n);
    ll sum1 = 0 , sum2 = 0;
    for(int i = 0 ;i < n ;i++)
    {
        if(i % 2 == 0) sum1 = sum1 * 10 + a[i];
        else sum2 = sum2 * 10 + a[i];
    }
    cout << sum1 + sum2;
}

