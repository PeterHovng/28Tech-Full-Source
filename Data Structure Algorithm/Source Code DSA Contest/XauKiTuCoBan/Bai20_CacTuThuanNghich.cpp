#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
typedef long long ll;
bool check(string s)
{
	string t = s;
	reverse(t.begin() , t.end());
	return t == s;
}
int main()
{
	string s ; multiset<string>se;
	while(cin >> s)
	{
		if(check(s))
		{
			se.insert(s);
		}
	}
	for(string x : se) cout << x << " ";
	return 0;
}