#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
typedef long long ll;
const int maxn = 1e6 + 1;
ll F[maxn];
void fibo()
{
	F[0] = 0 , F[1] = 1;
	for(int i = 2 ;i <= 1e6 ; i++)
	{
		F[i] = F[i - 1] + F[i - 2];
		F[i] %= MOD;
	}
}
int main()
{
	fibo();
	int t ; cin >> t;
	while(t--)
	{
		int n ;cin >> n;
		cout << F[n] << endl;
	}
	return 0;
}