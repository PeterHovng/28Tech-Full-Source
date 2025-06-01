#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
typedef long long ll;
int main()
{
    string s ; cin >> s;
    string digit = "";
    string alpha = "";
    for(char x : s)
    {
    	if(isdigit(x)) digit += x;
    	else alpha += x;
	}
	cout << digit << endl << alpha ;
	return 0;
}