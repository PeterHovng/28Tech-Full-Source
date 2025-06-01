#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
typedef long long ll;

int main()
{
	string s ; vector<string>v;
	while(cin >> s)
	{
		v.push_back(s);
	}
	sort(v.begin() , v.end());
	for(string x : v) cout << x << " ";
	cout << endl;
	sort(v.begin() , v.end() , greater<string>());
	for(string x : v) cout << x << " ";
	return 0;
}