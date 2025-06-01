#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long ull;
const int MOD = 1e9 + 7;

int main()
{
    int n , m; cin >> n >> m;
    set<int>s1,s2;
    for(int i = 0 ; i < n ;i++) 
    {
        int x ; cin >> x;
        s1.insert(x);
    }
    for(int i = 0 ; i < m ; i++)
    {
        int x ; cin >> x;
        s2.insert(x);
    }
    for(int x : s1)
    {
        if(s2.find(x) == s2.end())
        {
            cout << x << " ";
        }
    }
}