#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
typedef long long ll;
int main()
{
    string s ; cin >> s;
    string z = "28tech";
    string res = "";
    for(char x : s)
    {
    	if(z.find(x) == string::npos)
    	{
    		res += x;
		}
	}
	if(res == "") cout << "EMPTY";
	else cout << res;
	return 0;
}