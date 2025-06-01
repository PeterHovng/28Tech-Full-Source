#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
typedef long long ll;
int main()
{
    int n ; cin >> n;
    vector<ll>a; a.resize(n + 1);
    a[0] = 0;
    for(int i = 1 ;i <= n ;i++)
    {
        int x ; cin >> x;
        a[i] = a[i - 1] + x;
    }
    for(int i = 1 ;i <= n ;i++) cout << a[i] << " ";
    return 0;
}