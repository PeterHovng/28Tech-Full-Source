#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
typedef long long ll;
struct node
{
    int x , y , z ; 
};
int main()
{
    ll n , m , k ; cin >> n >> m >> k;
    vector<ll>a; a.resize(n + 2 , 0);
    vector<ll>b; b.resize(n + 2 , 0);
    for(int i = 1 ; i <= n ; i++)
    {
        cin >> a[i];
        b[i] = a[i] - a[i - 1];
    }
    vector<node>v; v.resize(m + 2);
    for(int i = 1 ; i <= m ; i++)
    {
        cin >> v[i].x >> v[i].y >> v[i].z;
    }
    vector<ll>arr; arr.resize(m + 2 , 0);
    for(int i = 1 ; i <= k ; i++)
    {
        int x , y ; cin >> x >> y;
        arr[x] += 1;
        arr[y + 1] -= 1;
    }
    for(int i = 1 ; i <= m ; i++)
    {
        arr[i] += arr[i - 1];
    }
    for(int i = 1 ; i <= m ; i++)
    {
        b[v[i].x] += (arr[i]*v[i].z);
        b[v[i].y + 1] -= (arr[i] * v[i].z);
    }
    for(int i = 1 ;i <= n ; i++)
    {
        b[i] += b[i - 1];
        cout << b[i] << " ";
    }
    return 0;
}