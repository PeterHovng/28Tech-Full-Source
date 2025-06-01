#include <bits/stdc++.h>
using namespace std;

int main()
{
    multiset<int>se;
    int n ; cin >> n;
    for(int i = 0 ; i < n ; i++)
    {
        int x ; cin >> x;
        se.insert(x);
    }
    int q ; cin >> q;
    while(q--)
    {
        int a , b ; cin >>a >> b;
        if(a == 1)
        {
            se.insert(b);
        }
        else if(a == 2)
        {
            if(se.find(b) != se.end()) se.erase(se.find(b));
        }
        else if(a == 3)
        {
            auto it = se.lower_bound(b);
            if(it != se.end()) cout << *it;
            else cout << -1;
            cout << endl;
        }
        else if(a == 4)
        {
            auto it = se.upper_bound(b);
            if(it != se.begin())
            {
                cout << *(--it);
            }
            else cout << -1;
            cout << endl;
        }
    }
}