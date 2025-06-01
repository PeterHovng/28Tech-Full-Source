#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
typedef long long ll;
int main()
{
	int n ; cin >> n; int a[n];
    for(int i = 1 ;i <= n ;i++)
    {
        cin >> a[i];
        if(i == 1) cout << a[i] << " ";
        else cout << a[i] - a[i - 1] << " ";
    }
	return 0;
}