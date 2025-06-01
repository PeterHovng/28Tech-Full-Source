#include <bits/stdc++.h>
using namespace std;


typedef long long ll;
const int MOD = 1e9 + 7;

int main()
{
    string s ; cin >> s;
    int sum = 0;
    for(char x : s)
    {
        sum += x - '0';
    }
    cout << sum;
    return 0;
}
