#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
typedef long long ll;
bool check(string s)
{
	for(char x : s)
	{
		if(isupper(x) == 0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	string s ; 
	int cnt = 0;
	while(cin >> s)
	{
		if(check(s)) ++cnt;
	}
	cout << cnt;
	return 0;
}