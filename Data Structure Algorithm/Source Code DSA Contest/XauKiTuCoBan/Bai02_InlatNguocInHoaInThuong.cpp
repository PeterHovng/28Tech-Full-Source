#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
typedef long long ll;
string my_reverse(string s)
{
	reverse(s.begin() ,s.end());
	return s;
}
string upper(string s)
{
	for(char &x : s)
	{
		x = toupper(x);
	}
	return s;
}
string lower(string s)
{
	for(char &x : s)
	{
		x = tolower(x);
	}
	return s;
}
int main()
{
    string s ; cin >> s;
    cout << my_reverse(s) << endl;
    cout << lower(s) << endl;
    cout << upper(s);
	return 0;
}