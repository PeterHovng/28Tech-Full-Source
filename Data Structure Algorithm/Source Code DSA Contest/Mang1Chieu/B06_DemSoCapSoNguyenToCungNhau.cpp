#include "bits/stdc++.h"
using namespace std;
const int MOD = 1e9 + 7;

int gcd(int a , int b)
{
    return b == 0 ? a : gcd(b , a % b);
}

int main()
{
   int n ; cin >> n;
   int a[n];
   for(int i = 0 ; i < n; i++) cin >> a[i];
   int ans = 0;
   for(int i = 0 ; i < n ; i++) 
   {
       for(int j = i + 1 ; j < n ; j++)
       {
           if(gcd(a[i] , a[j]) == 1)
           {
               ++ans;
           }
       }
   }
   cout << ans;
}