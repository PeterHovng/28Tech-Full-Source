#include "bits/stdc++.h"
using namespace std;
const int MOD = 1e9 + 7;
typedef long long ll;
bool check(int n)
{
    for(int i = 2 ; i <= sqrt(n) ; i++)
    {
        if(n % i == 0) return false;
    }
    return n > 1 ;
}

int main()
{
    int n ; cin >> n;
    int a[n];
    for(int i = 0 ; i < n ;i++) cin >> a[i];
    int Max = -MOD , vt_max , Min = MOD , vt_min , ans = 0;
    ll sum = 1;
    for(int i = 0 ; i < n ; i++) 
    {
        if(a[i] > Max) 
        {
            Max = a[i], vt_max = i;
        }
        if(a[i] <= Min) 
        {
            Min = a[i] , vt_min = i;
        }
        if(check(a[i])) ++ans;
        sum *= a[i];
        sum %= MOD;
    }
    cout << Max << " " << vt_max << endl;
    cout << Min << " " << vt_min << endl;
    cout << ans << endl;
    int Min2 = MOD , Max2 = -MOD;
    bool ok = true;
    for(int i = 0 ; i < n;i++)
    {
        if(a[i] > Max2 && i != vt_max)
        {
            Max2 = a[i];
        }
        if(a[i] < Min2 && i != vt_min)
        {
            Min2 = a[i];
        }
        if(a[i] != a[n - i - 1]) ok = false;
    }
    cout << max(1ll * Max * Max2 , 1ll* Min2 * Min) << endl;
    if(ok) cout << "YES";
    else cout << "NO";
    cout << endl;
    cout << sum;
}
