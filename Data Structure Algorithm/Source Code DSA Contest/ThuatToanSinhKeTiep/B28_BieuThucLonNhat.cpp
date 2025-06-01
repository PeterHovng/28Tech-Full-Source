#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
int a[1001] , ok;
void ktao()
{
    for(int i = 1 ; i <= 3 ; i++)
    {
        a[i] = 1;
    }
}
void sinh()
{
    int i = 3 ;
    while(i >= 1 && a[i] == 2)
    {
        --i;
    }
    if(i == 0) ok = 0;
    else
    {
        a[i]++;
        for(int j = i + 1 ; j <= 3 ;j++)
        {
            a[j] = 1;
        }
    }
}
int main()
{
    int x , y , z , d ; cin >>x >> y >> z >> d;
    ktao();
    ll ans = 0;
    ok  = 1;
    while(ok)
    {
        ll sum = x;
        for(int i = 1 ; i <= 3 ; i++)
        {
            if(i == 1)
            {
                if(a[i] == 1) sum += y;
                else sum -= y;
            }
            else if(i == 2)
            {
                if(a[i] == 1) sum += z;
                else sum -= z;
            }
            else
            {
                if(a[i] == 1) sum += d;
                else sum -= d;
            }
        }
    
        ans = max(ans , sum);
        sinh();
    }
    cout <<ans;
    return 0;
}
