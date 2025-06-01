#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check(ll n)
{
    string s = to_string(n);
    for(char x : s)
    {
        if(x != '0' && x != '6' && x != '8') return false;
    }
    return true;
}
int main()
{
    ll n ; cin >> n;
    cout << check(n);
}
