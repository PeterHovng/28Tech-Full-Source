#include <bits/stdc++.h>
using namespace std;
int cnt[10000001];
int main()
{
   int n ; cin >> n;
   int a[n] , Max = 0;
   for(int &x : a) 
   {
       cin >>x;
       Max = max(x , Max);
       cnt[x]++;
   }
   for(int i = 0 ; i <= Max ; i++)
   {
       if(cnt[i] != 0) cout << i << " " << cnt[i] << endl;
   }
    cout << endl;
   for(int x : a)
   {
       if(cnt[x] != 0)
       {
           cout << x << " " << cnt[x] << endl;
           cnt[x] = 0;
       }
   }
}
