#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;

ll F[94];

void sinh()
{
    F[0] = 0 , F[1] = 1;
    for(int i = 2 ; i <= 93 ; i++)
    {
        F[i] = F[i - 1] + F[i - 2];
    }
}
int number(int n , ll k)
{
    if(n == 1) return 0;
    if(n == 2) return 1;
    if(k <= F[n - 2])
    {
        return number(n - 2 , k);
    }
    else return number(n - 1 , k - F[n - 2]);
}
int main()
{
    int n ; cin >> n;
    ll k ; cin >> k;
    sinh();
    cout << number(n , k);
}
