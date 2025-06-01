#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

int main()
{
    int n ; cin >> n;
    for(int b = n / 7 ; b >= 0 ; b--)
    {
        int tmp = n - b * 7;
        if(tmp % 4 == 0)
        {
            cout << string(tmp / 4 , '4') << string(b , '7');
            return 0;
        }
    }
    cout << -1;
}
