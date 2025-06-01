#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s ; cin>> s;
	int ans = 0;
	map<char,int>mp;
	for(char x : s)
	{
		mp[x]++;
		ans = max(ans , mp[x]);
	}
	if((ans - 1) <= (s.length() - ans))
	{
		cout << "YES";
	}
	else cout << "NO";
}