#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;
int main()
{
    int n ; cin >> n;
    int a[n] , ans = 0;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a[i];
        if(a[i] == 0) ++ans;
    }
    for(int i = 0 ; i < n ; i++)
    {
        if(a[i] != 0)
        {
            cout << a[i] << " ";
        }
    }
    for(int i = 0 ; i < ans ; i++) cout << 0 << " ";
}