#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
ll findMax(int a[] , int l , int r , int m)
{
    ll tmp = 0 , s1 = 0 , s2 = 0;
    for(int i = m ; i >= l ; i--)
    {
        tmp += a[i];
        s1 = max(s1 , tmp);
    }
    tmp = 0;
    for(int i = m + 1 ; i <= r ; i++)
    {
        tmp += a[i];
        s2 = max(s2 , tmp);
    }
    return s1 + s2;
}
ll Max(int a[] , int l , int r )
{
    if(l == r) return a[l];
    int m = (l + r) / 2;
    ll res1 = Max(a , l , m);
    ll res2 = Max(a , m + 1 , r);
    ll res3 = findMax(a , l , r , m);
    return max({res1 , res2 , res3});
}

int main()
{
    int n ; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    cout << Max(a , 0 , n - 1);
}
