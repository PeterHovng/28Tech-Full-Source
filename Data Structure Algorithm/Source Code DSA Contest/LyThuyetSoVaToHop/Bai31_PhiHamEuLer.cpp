#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e7 + 1;

int main()
{
    ll n ; cin >> n;
    ll res = n;
    for(int i =2 ; i <= sqrt(n) ;i++)
    {
        if(n % i  == 0)
        {
            while(n % i == 0)
                {
                n /= i;
            }
            res = res - res / i;
        }
    }
    if(n != 1) res = res - res / n;
    cout << res;
}
