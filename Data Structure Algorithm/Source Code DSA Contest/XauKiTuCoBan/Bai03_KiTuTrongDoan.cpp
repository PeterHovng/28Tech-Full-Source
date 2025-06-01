#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
typedef long long ll;

int main()
{
    string s ; cin >> s;
    int digit = 0;
    for(char x : s)
    {
        if(isdigit(x))
        {
            digit += (x - '0');
        }
    }
    cout << digit;
    return 0;
}