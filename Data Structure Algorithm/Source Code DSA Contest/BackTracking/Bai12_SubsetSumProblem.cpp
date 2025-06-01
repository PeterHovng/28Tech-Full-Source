#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9;

int n , k , s , a[200] ; bool ok ; int used[200] ;

void Try(int sum , int ans)
{
    if(ok == true) return;
    if(ans == k)
    {
        ok = true;
        return;
    }
    for(int j = 1 ; j <= n ;j++)
    {
        if(used[j])
        {
            used[j] = 0;
            if(sum == s)
            {
                Try(0 , ans + 1);
                return;
            }
            if(sum > s) return;
            else Try(sum + a[j] , ans);
        }
        used[j] = 1;
    }
}

int main()
{
    cin >> n ; k = 2; s= 0; ok = false;
    memset(used , 1 ,sizeof(used));
    for(int i = 1 ; i <= n ;i++)
    {
        cin >> a[i];
        s += a[i];
    }
    if(s % k != 0) cout << 0 ;
    else
    {
        s/= k; 
        Try(0 , 0);
        if(ok == true) cout << 1;
        else cout << 0;
    }
}
