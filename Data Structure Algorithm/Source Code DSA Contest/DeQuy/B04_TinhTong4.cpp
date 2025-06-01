#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

ll sum(int n)
{
    if(n == 1) return -1;
    if(n % 2 == 0) return n + sum(n - 1);
    else return sum(n - 1) - n;
}

int main()
{
    int n ;cin >> n;
    cout << sum(n) << endl;
}
