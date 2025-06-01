#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
ll C(int n , int k)
{
    if(k == 0 || n == k) return 1;
    return C(n - 1 , k) + C(n - 1 , k - 1);
}
int main()
{
    int n , k ;cin >> n >> k;
    cout << C(n , k);
}
