#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;

int main()
{
    int n , m ; cin >> n >> m;
    int b[n] , c[m];
    for(int i = 0 ; i < n ; i++)
    {
        cin >> b[i];
    }
    for(int i = 0 ; i < m ; i++)
    {
       cin >> c[i];
    }
    int i = 0 , j = 0 ;
    while(i < n && j < m)
    {
        if(b[i] <= c[j])
        {
            cout << "b" << i + 1 << " " ;
            ++i;
        }
        else
        {
            cout << "c" << j + 1 << " ";
            ++j;
        }
    }
    while(i < n)
    {
        cout << "b" << i + 1 << " ";
        ++i;
    }
    while(j < m)
    {
        cout << "c" << j + 1 << " ";
        ++j;
    }
}