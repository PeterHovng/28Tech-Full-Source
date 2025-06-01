#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
typedef long long ll;
void lower(string &s)
{
	for(char &x : s)
	{
		x = tolower(x);
	}
}
int main()
{
	string s ; int ans = 0;
	while(cin >> s)
	{
		lower(s);
		if(s == "28tech") ++ans;
	}
	cout << ans;
	return 0;
}