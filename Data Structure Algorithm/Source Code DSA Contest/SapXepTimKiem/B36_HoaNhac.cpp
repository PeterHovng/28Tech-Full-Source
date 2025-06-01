#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int n , m ; cin >> n >> m;
    multiset<int>se;
    for(int i = 0 ; i < n ; i++)
    {
        int x ; cin >> x;
        se.insert(x);
    }
    for(int i = 0 ; i < m ; i++)
    {
        int x ; cin >> x;
        auto it = se.upper_bound(x);
        if(it != se.begin())
        {
            --it;
            cout << *it << endl;
            se.erase(it);
        }
        else if(it == se.begin())
        {
            cout << -1 << endl;
        }
    }
}