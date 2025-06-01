#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
typedef long long ll;

int main()
{
    string s ; cin >> s;
    int n = s.size();
    if(n % 2 == 0) cout << "NOT FOUND";
    else cout << s[n / 2];
	return 0;
}