#include <bits/stdc++.h>
using namespace std;
int cnt1[10000001] , cnt2[10000001];
typedef long long ll;
const int MOD = 1e9 + 7;
int main()
{
    int n , m ; cin >> n >> m;
    int a[n] , b[m];
    for(int &x : a) cin >> x;
    for(int &x : b) cin >>x;
    int i = 0 , j = 0;
    vector<int>hop, giao;
    while(i < n && j < m)
    {
        if(a[i] == b[j])
        {
            hop.push_back(a[i]);
            giao.push_back(b[j]);
            ++i;++j;
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
        hop.push_back(a[i++]);
    }
    while(j < m)
    {
        hop.push_back(b[j++]);
    }
    for(int x : hop) cout << x << " ";
    cout << endl;
    for(int x : giao) cout << x << " ";
}
