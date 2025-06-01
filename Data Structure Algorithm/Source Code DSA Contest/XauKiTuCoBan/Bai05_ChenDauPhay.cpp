#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
typedef long long ll;
int main()
{
    string s ; cin >> s;
    int cnt = 0;
    for(int i = s.size() - 1; i >= 0 ; i--)
    {
    	++cnt;
    	if(i != 0 && cnt % 3 == 0)
    	{
    		s.insert(i , ",");
		}
	}
	cout << s;
	return 0;
}