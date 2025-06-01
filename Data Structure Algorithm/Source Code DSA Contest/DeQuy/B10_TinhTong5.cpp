#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
double tong(int n)
{
    if(n == 1) return 1;
    return 1.0 / n + tong(n - 1);
}
int main()
{
    int n ; cin >> n;
    cout << fixed << setprecision(3) << tong(n);
}
