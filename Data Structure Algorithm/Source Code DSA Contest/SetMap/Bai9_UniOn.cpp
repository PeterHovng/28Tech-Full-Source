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
    for(int i = 0 ; i < m ; i++)
    {
        int x ; cin >> x;
        se.insert(x);
    }
    set<int>::iterator it = se.end();
    --it;
    for(; it != se.begin() ; it--)
    {
        cout << *it << " ";
    }
    cout << *it;
}