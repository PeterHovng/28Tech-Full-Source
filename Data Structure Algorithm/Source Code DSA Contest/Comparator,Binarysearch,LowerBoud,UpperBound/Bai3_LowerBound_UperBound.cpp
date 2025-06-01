#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n ,x; cin >> n >> x;
	int a[n];
	for(int &x : a) cin >> x;
	int *it = lower_bound(a ,a + n , x);
	if(it != (a + n)) cout << it - (a + 0) << endl;
	else cout << -1 << endl;
	int *pt = upper_bound(a ,a + n , x);
	if(pt != (a + n)) cout << pt - (a + 0) << endl;
	else cout << -1 << endl;
	if(*it == x) cout << it - (a + 0) << endl;
	else cout << -1 << endl;
	--pt;
	if(*pt == x) cout << pt - (a + 0) << endl;
	else cout << -1 << endl;
	if(*it == x) cout << pt - it + 1;
	else cout << 0;
}