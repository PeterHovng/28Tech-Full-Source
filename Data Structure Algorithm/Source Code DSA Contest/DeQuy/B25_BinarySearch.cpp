#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
bool check(int a[] , int l , int r , int x)
{
    if(l > r) return false;
    int m = (l + r) / 2;
    if(a[m] == x) return true;
    else if(a[m] > x) return check(a , m + 1, r, x);
    else return check(a , l , m - 1 , x);
}
int main()
{
    int n ; cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a[i];
    }
    int x ; cin >> x;
    if(check(a , 0 , n - 1 , x))
    {
        cout << "1" << endl;
    }
    else cout << "0";
}
