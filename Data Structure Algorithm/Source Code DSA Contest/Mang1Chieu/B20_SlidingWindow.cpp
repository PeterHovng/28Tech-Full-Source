#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;
const int Maxn = 1e6 + 1;

int ans[Maxn];

int main()
{
    int n , k ; cin >> n >> k;
    int a[n];
    for(int i = 0 ; i < n ;i++)
    {
        cin >>a[i];
    }
    ll sum = 0;
    for(int i = 0 ; i < k ; i++)
    {
        sum += a[i];
    }
    ll Max = sum  , idx = k - 1;
    for(int i = k ; i < n ; i++)
    {
        sum -= a[i - k]; sum += a[i];
        if(sum > Max)
        {
            Max = sum;
            idx = i;
        }
    }
    cout << Max << endl;
    for(int i = idx - k + 1 ;i <= idx ; i++) cout << a[i] << " ";
}

