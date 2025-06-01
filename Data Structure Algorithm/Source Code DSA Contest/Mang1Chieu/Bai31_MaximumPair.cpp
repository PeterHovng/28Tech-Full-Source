#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n ; cin >> n;
	int a[n];
	for(int i = 0 ; i < n ;i++) cin >> a[i];
	sort(a , a + n);
	cout << max(abs(a[n - 1] + a[n - 2]) , abs(a[0] + a[1]));
}