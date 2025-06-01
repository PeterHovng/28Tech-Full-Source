#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e6 + 1 , MOD = 1e9 + 7;
set<ll>se;
ll F[94];
void fibo()
{
    F[0] = 0 ; F[1] = 1;
    se.insert(0) ; se.insert(1);
    for(int i = 2 ;i <= 93 ; i++)
    {
        F[i] = F[i - 1] + F[i - 2];
        se.insert(F[i]);
    }
}
int main()
{
    fibo();
    ll n; cin >> n;
    if(se.count(n)) cout << "YES";
    else cout << "NO";
}