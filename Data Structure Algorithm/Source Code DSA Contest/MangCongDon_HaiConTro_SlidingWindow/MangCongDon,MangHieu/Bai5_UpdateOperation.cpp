#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
typedef long long ll;
int main()
{
    int n , q ; cin >> n >> q;
    vector<int>a , b;
    a.resize(n + 1 , 0);
    for(int i = 1 ;i  <= n ; i++)
    {
        int x ; cin >> x;
        if(i == 1) a[i] = x;
        else
        {
            a[i] = x - b.back();
        }
        b.push_back(x);
    }
    while(q--)
    {
        int l , r , k ; cin >> l >> r >> k;
        a[l + 1] += k;
        if(r + 2 <= n) a[r + 2] -= k;
    }
    vector<int>arr(n + 1);
    for(int i = 1 ; i <= n ;i++)
    {
        arr[i] = a[i] += a[i - 1];
    }
    for(int i = 1 ;i <= n ;i++) cout << arr[i] << " ";
    return 0;
}