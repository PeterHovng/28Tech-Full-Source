#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
typedef long long ll;
int digit(char x)
{
	return x - '0';
}
bool check(string x)
{
	for(int i = 1 ; i < x.size() ; i++)
	{
		if(abs(digit(x[i]) - digit(x[i - 1])) != 1) return false;
	}
	return true;
}
int main()
{
    string s ; cin >> s;
    if(check(s)) cout << "YES";
    else cout << "NO";
	return 0;
}