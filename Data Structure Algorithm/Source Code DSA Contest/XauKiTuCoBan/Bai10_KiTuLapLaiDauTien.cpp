#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
typedef long long ll;
int main()
{
	string s ; cin >> s;
	map<char,int>mp;
	for(char x : s)
	{
		mp[x]++;
		if(mp[x] > 1) 
		{
			cout << x;
			return 0;
		}
	}
	cout << "NONE";
	return 0;
}