#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
ll Max(ll n)
{
    if(n < 10) 
    {
        return n;
    }
    return max(n % 10 , Max(n / 10));
}
ll Min(ll n)
{
    if(n < 10) return n;
    return min(n % 10 , Min(n / 10));
}
int main()
{
    ll n ; cin >> n;
    cout << Max(n) << " " << Min(n) << endl;
}
