#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
typedef long long ll;
int main()
{
    int n , k ; cin >> n >> k;
    multiset<int>se;
    int a[n];
    for(int i = 0 ; i < n ; i++)
    {
    	cin >> a[i];
	}
	int l = 0 , ans = 0;
	sort(a , a + n);
	for(int i= 0 ; i < n ;i++)
	{
		se.insert(a[i]);
		while((*se.rbegin() - *se.begin()) > k)
		{
			se.erase(se.find(a[l++]));
		}
		ans = max(ans , i - l + 1);
	}
	cout << ans;
}