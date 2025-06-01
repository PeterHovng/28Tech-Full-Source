#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9;

bool check(ll n)
{
    for(ll i = 2 ; i <= sqrt(n) ; i++)
    {
        if(n % i== 0) return false;
    }
    
    return n > 1;
}

int main()
{
    int n ; cin >> n ;
    
    ll a[300][300];
    
    for(int i = 0 ; i < n; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            cin >> a[i][j];
        }
    }
    map<ll,ll>mp;
    
    for(int i = 0 ; i < n ; i++)
    {
        if(check(a[i][i]))
        {
            mp[a[i][i]]++;
        }
        
        if(check(a[i][n - i - 1]))
        {
            mp[a[i][n - i - 1]]++;
        }
    }
    
    cout << mp.size() ;
    return 0;
}
