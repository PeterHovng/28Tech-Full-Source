#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

int a[1001] , n , k , ok;
set<int>se;
void sinh()
{
    int i = k;
    while( i >= 1 && a[i] == n - k + i)
    {
        --i;
    }
    if(i == 0)
    {
        cout << k;
    }
    else
    {
        a[i]++;
        for(int j = i + 1 ; j <= k ; j++)
        {
            a[j] = a[j - 1] + 1;
        }
        int res = 0;
        for(int i = 1 ; i <= k ; i++)
        {
             if(se.count(a[i]))
             {
                ++res;
             }
         }
        cout << k - res;
    }
}

int main()
{
    cin >> n >>k ;
    for(int i = 1 ; i <= k ; i++)
    {
        cin >> a[i];
        se.insert(a[i]);
    }
    sinh();
    return 0;
}
