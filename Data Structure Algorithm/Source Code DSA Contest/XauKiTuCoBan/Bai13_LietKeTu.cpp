#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
typedef long long ll;

int main()
{
	string s ; getline(cin , s);
	stringstream ss(s);
	string tu;
	vector<string>v , t;
	while(ss >> tu)
	{
		v.push_back(tu);
	}
	string res = ".,!?";
	for(string x : v)
	{
		string h = "";
		for(char y : x)
		{
			if(res.find(y) == string::npos)
			{
				h += y;
			}
			else 
			{
				if(h != "") t.push_back(h);
				h = "";
			}
		}
		if(h != "") t.push_back(h);
	}
	for(string x : t) cout << x << " ";
	return 0;
}