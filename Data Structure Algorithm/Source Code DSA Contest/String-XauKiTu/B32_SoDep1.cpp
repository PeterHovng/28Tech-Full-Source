#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;

bool nTo(int n)
{
    for(int i = 2 ; i <= sqrt(n) ; i++)
    {
        if(n % i == 0) return false;
    }
    return n > 1;
}

int main()
{
    string s ; cin >> s;
    int sum = 0;
    for(char x : s)
    {
        sum += x - '0';
        if(!nTo(x - '0'))
        {
            cout << "NO";
            return 0;
        }
    }
    if(nTo(sum)) cout << "YES";
    else cout << "NO";
    return 0;
}
