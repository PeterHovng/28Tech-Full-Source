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
	string s ; set<string>v;
	while(cin >> s)
	{
		lower(s);
		v.insert(s);
	}
	cout << v.size();
	return 0;
}