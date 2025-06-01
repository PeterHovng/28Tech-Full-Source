#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
typedef long long ll;
int main()
{
    int n ; cin >> n;
    for(int i = sqrt(n) ; i <= n ; i++)
    {
        ll tmp = 1ll*i*i;
        if(tmp % n == 0)
        {
            cout << tmp;
            return 0;
        }
    }
    return 0;
}