#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void phantich(ll n)
{
    for(int i = 2 ;i <= sqrt(n) ; i++)
    {
        if(n % i == 0)
        {
            int cnt = 0;
            while(n % i == 0)
            {
                ++cnt;
                n /= i;
            }
            cout << i << "^" << cnt ;
            if(n != 1) cout << " * ";
        }
    }
    if(n != 1) cout << n << "^1";
}
int main()
{
    ll n ; cin >> n;
    phantich(n);
}