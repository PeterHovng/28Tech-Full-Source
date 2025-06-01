#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

ll sum(int n)
{
    if(n == 1) return 1;
    return n*n+ sum(n - 1);
}

int main()
{
    int n ;cin >> n;
    cout << sum(n) << endl;
}
