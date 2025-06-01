#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
bool check(int a[] , int l , int r)
{
    if(l >= r) return true;
    if(a[l] != a[r]) return false;
    return check(a , l + 1 , r - 1);
}
int main()
{
    int n ; cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a[i];
    }
    if(check(a , 0 , n - 1)) cout << "YES";
    else cout << "NO";
}
