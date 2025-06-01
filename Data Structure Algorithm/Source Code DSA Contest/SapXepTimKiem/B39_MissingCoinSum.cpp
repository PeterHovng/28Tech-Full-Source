#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;

int main()
{
    int n ; cin >> n;
    ll sum = 1; int a[n];
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a[i];
    }
    sort(a , a + n);
    for(int i = 0 ; i < n ;i++)
    {
        if(a[i] > sum)
        {
            break;
        }
        else sum += a[i];
    }
    cout << sum;
    return 0;
}
