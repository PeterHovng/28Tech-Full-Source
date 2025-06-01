#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
typedef long long ll;
int main()
{
	int n ; cin >> n;
	ll res = 0;
	for(int i = 1 ; i <= n ;i++)
	{
		int x ; cin >>x;
		res = res * 10 + x;
		res %= MOD;
	}
	cout << res;
	return 0;
}