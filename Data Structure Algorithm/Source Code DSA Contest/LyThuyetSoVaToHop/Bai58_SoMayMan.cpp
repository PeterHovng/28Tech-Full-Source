#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e6 + 1;
const int MOD = 1e9 + 7;
bool check(int n)
{
    string s = to_string(n);
    for(char x : s)
    {
        if(x != '4' && x != '7')
        {
            return false;
        }
    }
    return true;
}
bool checkUoc(ll n)
{
    for(int i = 1 ; i <= sqrt(n) ;i++)
    {
        if(n % i == 0)
        {
            if(check(i) || check(n / i)) return true;
        }
    }
    return false;
}
int main()
{
    ll n ; cin >> n;
    if(checkUoc(n)) cout << "YES";
    else cout  << "NO";
}