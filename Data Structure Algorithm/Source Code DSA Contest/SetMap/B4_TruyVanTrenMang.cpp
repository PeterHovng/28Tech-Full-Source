#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long ull;
const int MOD = 1e9 + 7;

int main()
{
    int n ; cin >> n;
    multiset<int>se;
    for(int i = 0 ; i < n ;i++) 
    {
        int x ; cin >> x;
        se.insert(x);
    }
    int q; cin >> q;
    while(q--)
    {
        int a , b ; cin >> a >> b;
        if(a == 1)
        {
            se.insert(b);
        }
        else if(a == 2)
        {
            if(se.size() != 0 && se.count(b))
            {
                se.erase(se.find(b));
            }
        }
        else
        {
            if(se.count(b)) cout << "YES";
            else cout << "NO";
            cout << endl;
        }
    }
}