#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
bool check(ll n)
{
    int ans = 0;
    for(int i = 2 ; i <= sqrt(n) ; i++)
    {
        if(n % i == 0)
        {
            int cnt = 0;
            while(n % i == 0)
            {
                ++cnt;
                n /= i;
            }
            if(cnt > 1) return false;
            else ++ans;
        }
    }
    if(n != 1) ++ans;
    return ans == 3;
}
int main()
{
    ll n ; cin >> n;
    if(check(n)) cout << "1";
    else cout << "0";
}