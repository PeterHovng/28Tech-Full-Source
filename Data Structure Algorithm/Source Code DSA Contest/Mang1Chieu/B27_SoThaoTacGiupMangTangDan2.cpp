#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int n , d ; cin >> n >> d;
    int a[n];
    for(int i = 0 ;i < n ; i++) cin >> a[i];
    ll res = 0;
    for(int i = 1 ; i < n ; i++) 
    {
        if(a[i] <= a[i - 1])
        {
            int tmp = a[i - 1] - a[i] + 1;
            int k = (tmp + d - 1) / d * d;
            a[i] += k;
            res += k / d;
        }
    }
    cout << res;
}

