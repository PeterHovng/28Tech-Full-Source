#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
typedef long long ll;
int main()
{
	int n , q; cin >> n >> q;
    vector<ll>a; a.resize(n + 1);
    a[0] = 0;
    for(int i = 1 ;i <= n ;i++)
    {
        int x ; cin >> x;
        a[i] = a[i - 1] + x;
    }
    while(q--)
    {
        int l , r ; cin >> l >> r;
        cout << a[r + 1] - a[l] << endl;
    }
	return 0;
}