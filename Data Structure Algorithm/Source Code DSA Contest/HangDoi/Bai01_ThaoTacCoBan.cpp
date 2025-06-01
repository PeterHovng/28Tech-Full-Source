#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ; cin >> n;
    queue<int>q;
    vector<int>v;
    while(n--)
    {
        int a ; cin >> a;
        if(a == 1) cout << q.size() << endl;
        else if(a == 2)
        {
            if(q.empty()) cout << "YES";
            else cout << "NO";
            cout << endl;
        }
        else if(a == 3)
        {
            int x ; cin >> x;
            q.push(x);
        }
        else if(a == 4)
        {
            if(!q.empty())
            {
                q.pop();
            }
        }
        else if(a == 5)
        {
            if(q.empty())
            {
                cout << -1 << endl;
            }
            else cout << q.front() <<endl;
        }
        else if(a == 6)
        {
            if(q.empty())
            {
                cout << -1 << endl;
            }
            else
            {
                while(!q.empty())
                {
                    v.push_back(q.front());
                    q.pop();
                }
                for(int x : v)
                {
                    q.push(x);
                }
                cout << v.back() << endl;
                v.clear();
            }
        }
    }
    return 0;
}