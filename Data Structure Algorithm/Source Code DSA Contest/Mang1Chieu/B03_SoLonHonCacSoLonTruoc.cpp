#include "bits/stdc++.h"
using namespace std;
const int MOD = 1e9 + 7;
int main()
{
    int n ; cin >> n;
    int a[n];
    for(int i = 0 ; i < n;i++) cin >>a[i];
    cout << a[0] << " ";
    int Max = a[0];
    for(int i = 1 ; i < n ; i++) 
    {
        if(a[i] > Max) 
        {
            cout << a[i] << " ";
            Max = a[i];
        }
    }
}