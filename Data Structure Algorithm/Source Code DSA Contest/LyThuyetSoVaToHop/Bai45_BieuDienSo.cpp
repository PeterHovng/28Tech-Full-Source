#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

int main()
{
    int n ; cin >> n;
    // Quy ve pt : a*111 + b*11 = n
    // 0 <= a <= n / 111
    // 0 <= b <= n / 11
    
    for(int a = 0 ; a <= n / 111 ; a++)
    {
        ll res = a * 111;
        if((n - res) % 11 == 0)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}