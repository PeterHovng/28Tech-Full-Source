#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

int main()
{
    int n ; cin >> n;
    int a[n] , b[n];
    for(int i = 0 ; i < n ;i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b , b + n);
    bool ok = 0;
    for(int i = 0 ; i < n ;i++)
    {
        if(a[i] != b[i] && a[i] != b[n - i - 1])
        {
            ok = 1;
        }
    }
    if(ok) cout << "NO";
    else cout << "YES";
}
