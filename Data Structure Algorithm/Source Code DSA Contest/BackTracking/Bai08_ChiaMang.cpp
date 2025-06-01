#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int n , k , s = 0, ok , a[200] , check[200];

void QL(int sum , int ans)
{
    if(ok) return;
    if(ans == k)
    {
        ok = 1;
        return;
    }
    for(int j = 0 ; j < n ;j++)
    {
        if(check[j] == 0)
        {
            check[j] = 1;
            if(sum == s)
            {
                QL(0 , ans + 1);
            }
            else if(sum < s)
            {
                QL(sum + a[j] , ans);
            }
        }
        check[j] = 0;
    }
}

int main()
{
    cin >> n >> k;
    for(int i = 0 ; i < n ;i++)
    {
        cin >> a[i];
    }
    s = accumulate(a , a + n , 0);
    ok = 0;
    if(s % k != 0)
    {
        cout << 0;
    }
    else
    {
        s /= k;
        QL(0 , 0);
        cout << ok;
    }
}
