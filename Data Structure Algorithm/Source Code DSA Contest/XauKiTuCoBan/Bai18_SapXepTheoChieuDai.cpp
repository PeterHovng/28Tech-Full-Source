#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
typedef long long ll;
bool cmp(string a , string b)
{
	if(a.size() != b.size()) return a.size() < b.size();
	else return a < b;
}
int main()
{
	string s ; vector<string>v;
	while(cin >> s)
	{
		v.push_back(s);
	}
	sort(v.begin() , v.end() , cmp);
    for(string x : v) cout << x << " ";
	return 0;
}