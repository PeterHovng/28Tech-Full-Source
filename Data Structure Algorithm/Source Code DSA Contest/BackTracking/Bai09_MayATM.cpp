#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
int n , s , a[32] , res = MOD , ok = 0;

void ATM(int sum , int pos , int i)
{
    if(sum == s)
    {
        ok = 1;
        res = min(res , i);
    }
    for(int j = pos ; j <= n ; j++)
    {
        if(sum + a[j] <= s)
        {
            ATM(sum + a[j] , j + 1 , i + 1);
        }
    }
}

int main()
{
    cin >> n >> s;
    for(int i = 1 ; i <= n ;i++)
    {
        cin >> a[i];
    }
    ATM(0 , 1 , 0);
    if(!ok) cout << -1;
    else
    {
        cout << res;
    }
}