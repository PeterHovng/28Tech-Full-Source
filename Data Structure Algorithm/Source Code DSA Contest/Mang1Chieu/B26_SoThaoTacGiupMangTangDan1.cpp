#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int n ; cin >> n;
    int a[n];
    for(int i = 0 ; i < n ;i++)
    {
        cin >> a[i];
    }
    ll res = 0;
    for(int i = 1 ; i < n ;i++)
    {
        if(a[i] <= a[i - 1])
        {
            int Max = a[i - 1] - a[i] + 1;
            a[i] += Max;
            res += Max;
        }
    }
    cout << res;
}

