#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;

int first(int a[] , int l , int r , int res , int x)
{
    if(l > r) return res;
    int m = (l + r) / 2;
    if(a[m] <= x)
    {
        res = a[m];
        return first(a , m + 1 , r , res , x);
    }
    else return first(a , l , m - 1 , res , x);
    
}

int main()
{
    int n , x; cin >> n >> x;
    int a[n];
    for(int i = 0 ; i < n ; i++) cin >> a[i];
    cout << first(a , 0 , n - 1 , -1 , x);
    return 0;
}
