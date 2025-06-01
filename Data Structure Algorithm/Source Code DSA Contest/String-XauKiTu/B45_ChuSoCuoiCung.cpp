#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;

int main()
{
    string s; cin >>s;
    ll n = 0;
    for(char x : s)
    {
        n = n * 10 + x - '0';
        n %= 4;
    }
    if(n % 4 == 1) cout << 8;
    else if(n % 4 == 2) cout << 4;
    else if(n % 4 == 3) cout << 2;
    else cout << 6;
}
