#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
ll fibo(int n )
{
    if(n == 1) return 0;
    if(n == 2) return 1;
    return fibo(n - 1) + fibo(n - 2);
}
int main()
{
    int n ; cin >> n;
    cout << fibo(n) << endl;
}
