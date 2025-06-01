#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long ull;
const int MOD = 1e9 + 7;

int main()
{
    int n , m; cin >> n >> m;
    set<int>hop , giao1 , giao2;
    for(int i = 0 ; i < n ;i++) 
    {
        int x ; cin >> x;
        hop.insert(x);
        giao1.insert(x);
    }
    for(int i = 0 ; i < m ; i++)
    {
        int x ; cin >> x;
        hop.insert(x);
        giao2.insert(x);
    }
    for(int x : giao1)
    {
        if(giao2.find(x) != giao2.end())
        {
            cout << x << " ";
        }
    }
    cout << endl;
    for(int x : hop) cout << x << " ";
}