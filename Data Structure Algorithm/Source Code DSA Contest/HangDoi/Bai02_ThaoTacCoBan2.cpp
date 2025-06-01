#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ; cin >> n;
    queue<int>q;
    while(n--)
    {
        string x ; cin >> x;
        if(x == "PUSH")
        {
            int m ; cin >> m;
            q.push(m);
        }
        else if(x == "PRINTFRONT")
        {
            if(q.empty())
            {
                cout << "NONE";
            }
            else cout << q.front();
            cout << endl;
        }
        else
        {
            if(!q.empty()) q.pop();
        }
    }
    return 0;
}