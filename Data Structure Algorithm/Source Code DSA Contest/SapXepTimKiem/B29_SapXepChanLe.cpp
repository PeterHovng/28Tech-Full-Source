#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;
int main()
{
    int n ; cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a[i];
    }
    sort(a , a + n);
    if(n % 2 == 0)
    {
        int i = 0 , j = n / 2 ;
        for(int k = 0 ; k < n / 2 ; k++) 
        {
            cout << a[i++] << " " << a[j++] << " ";
        }
    }
    else
    {
        int i = 0 , j = n / 2 + 1;
        for(int k= 0 ; k < n / 2 ;k++) 
        {
            cout << a[i++] << " " << a[j++] << " ";
        }
        cout << a[i];
    }
}