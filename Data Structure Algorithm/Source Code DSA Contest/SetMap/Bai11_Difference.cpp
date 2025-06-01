#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n , m ; cin >> n >> m;
    set<int>se;
    for(int i = 0 ; i < n ;i++)
    {
        int x ; cin >> x;
        se.insert(x);
    }
    for(int i = 0 ; i< m ;i++)
    {
        int x ; cin >> x;
        if(se.count(x))
        {
            se.erase(x);
        }
    }
    for(int x : se) cout << x << " ";
}