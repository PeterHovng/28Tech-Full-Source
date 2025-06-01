#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n ; cin >> n;
    int a[n];
    for(int i = 0 ; i <n ;i++) cin >> a[i];
    sort(a , a + n);
    cout << max(1ll*a[0] * a[1] * a[n - 1] , 1ll*a[n - 3] * a[n - 2] * a[n - 1]);
    return 0;
}
