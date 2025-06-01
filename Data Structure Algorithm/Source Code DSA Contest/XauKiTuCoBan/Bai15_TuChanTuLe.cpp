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
	for(int i = 0 ; i < v.size() ; i++)
	{
		if(i % 2 == 0) cout << v[i] << " ";
		else
		{
			reverse(v[i].begin() , v[i].end());
			cout << v[i] << " ";
		}
	}
	return 0;
}