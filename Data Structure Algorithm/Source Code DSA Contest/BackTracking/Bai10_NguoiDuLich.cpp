#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n , a[20][20] , x[20], check[101] , cmin , ans , res;
void Backtrack(int i)
{
   for(int j = 2 ; j <= n ; j++)
   {
       if(check[j])
       {
           check[j] = 0;
           x[i] = j;
           res += a[x[i - 1]][j];
           if(i == n)
           {
               ans = min(ans , a[x[i]][1] + res);
           }
           if(res + (n - i + 1) * cmin <= ans)
           {
               Backtrack(i + 1);
           }
            res -= a[x[i - 1]][j]; 
            check[j] = 1;
       }
   }
}
int main()
{
    cin >> n;
    res = 0;
    cmin = 1e9 , ans = 1e9;
    for(int i = 1 ; i <= n ;i++) 
    {
        for(int j = 1 ; j <= n ;j++)
        {
            cin >> a[i][j] ;
            cmin = min(a[i][j], cmin);
        }
    }
    x[1] = 1;
    memset(check , 1 , sizeof(check));
    Backtrack(2);
    cout << ans;
}