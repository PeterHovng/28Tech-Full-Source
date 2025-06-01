#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
typedef long long ll;
int main()
{
	int n , k , q ; cin >> n >> k >> q;
    vector<ll>a; a.resize(2e5 + 1, 0);
    for(int i = 1 ;i  <= n ;i++)
    {
        int x , y ; cin >> x >> y;
        a[x] += 1;
        a[y + 1] -= 1;
    }
    for(int i = 1 ;i <= 2e5 ; i++)
    {
        a[i] += a[i - 1];
    }
    vector<int>t; t.resize(2e5 + 1);
    for(int i = 1 ;i <= 2e5 ; i++)
    {
        t[i] = t[i - 1] + (a[i] >= k ? 1 : 0);
    }
    while(q--)
    {
        int x , y ; cin >> x >> y;
        cout << t[y] - t[x - 1] << endl;
    }
	return 0;
}