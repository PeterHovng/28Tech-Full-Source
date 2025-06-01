#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
typedef long long ll;
int main()
{
    string s ; cin >> s;
    sort(s.begin() , s.end());
    cout << stoll(s);
	return 0;
}