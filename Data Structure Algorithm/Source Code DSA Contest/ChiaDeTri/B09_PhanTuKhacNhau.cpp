#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;

int main()
{
    int n ; cin >> n;
    int a[n] , b[n - 1];
    for(int i = 0 ; i < n ; i++) cin >> a[i];
    for(int i = 0 ; i < n - 1 ; i++) cin >> b[i];
    for(int i = 0 ;i < n - 1 ; i++)
    {
        if(a[i] != b[i])
        {
            cout << i + 1;
            return 0;
        }
    }
}
