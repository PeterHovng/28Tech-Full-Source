#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;

int first(int a[] , int l , int r , int res)
{
    if(l > r) return res;
    int m = (l + r) / 2;
    if(a[m] == 0)
    {
        res = m;
        return first(a , l , m - 1 , res);
    }
    else return first(a , l , m - 1 , res);
}
int last(int a[] , int l , int r , int res)
{
    if(l > r) return res;
    int m = (l + r) / 2;
    if(a[m] == 0)
    {
        res = m;
        return last(a , m + 1 , r , res);
    }
    else return last(a , l , m - 1 , res);
}
int main()
{
    int n ; cin >> n;
    int a[n];
    for(int i = 0 ; i < n; i++) cin >> a[i];
    if(first(a , 0 , n - 1 , -1) != -1)
    {
        cout << last(a , 0 , n - 1 , -1) - first(a , 0 , n - 1 , -1) + 1;
    }
    else cout << 0;
}
