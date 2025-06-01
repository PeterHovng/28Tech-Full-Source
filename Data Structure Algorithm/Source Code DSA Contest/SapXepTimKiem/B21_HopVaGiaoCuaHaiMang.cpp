#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;
int main()
{
    int n , m ; cin >> n >> m;
    int a[n] , b[m];
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a[i];
    }
    for(int i = 0 ;i < m ; i++)
    {
        cin >> b[i];
    }
    sort(a , a + n); sort(b , b + m);
    int i = 0 , j = 0;
    vector<int>giao,hop;
    while(i < n && j < m)
    {
        if(a[i] == b[j])
        {
            hop.push_back(a[i]);
            giao.push_back(b[j]);
            ++i; ++j;
        }
        else if(a[i] > b[j])
        {
            hop.push_back(b[j]);
            ++j;
        }
        else
        {
            hop.push_back(a[i]);
            ++i;
        }
    }
    while(i < n)
    {
        hop.push_back(a[i]); ++i;
    }
    while(j < m)
    {
        hop.push_back(b[j]); ++j;
    }
    for(int x : giao)
    {
        cout << x << " ";
    }
    cout <<endl;
    for(int x : hop)
    {
        cout << x << " ";
    }
}