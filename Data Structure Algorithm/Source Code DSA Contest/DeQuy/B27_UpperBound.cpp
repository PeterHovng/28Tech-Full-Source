#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
int upperBound(int a[] , int l , int r , int res , int x)
{
    if(l > r) return res;
    int m = (l + r) / 2;
    if(a[m] > x)
    {
        res = m;
        return upperBound(a , m + 1 , r , res , x);
    }
    else 
    {
        return upperBound(a , l , m - 1 , res , x);
    }
}
int main()
{
    int n ; cin >> n;
    int a[n]; for(int &x : a) cin >> x;
    int x ; cin >> x;
    if(upperBound(a , 0 , n - 1 , -1 , x) == -1)
    {
        cout << n;
    }
    else cout << upperBound(a , 0 , n - 1 , -1 , x);
    return 0;
}
