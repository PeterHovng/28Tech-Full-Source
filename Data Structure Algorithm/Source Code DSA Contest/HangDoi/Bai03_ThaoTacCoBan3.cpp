#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ; cin >> n;
    deque<int>q;
    while(n--)
    {
        string x ; cin >> x;
        if(x == "PUSHFRONT")
        {
            int k ; cin >> k;
            q.push_front(k);
        }
        else if(x == "PRINTFRONT")
        {
            if(q.empty())
            {
                cout << "NONE";
            }
            else cout << q.front();
            cout <<endl;
        }
        else if(x == "POPFRONT")
        {
            if(!q.empty())
            {
                q.pop_front();
            }
        }
        else if(x == "PUSHBACK")
        {
            int m ; cin >> m;
            q.push_back(m);
        }
        else if(x == "PRINTBACK")
        {
            if(!q.empty())
            {
                cout << q.back();
            }
            else cout << "NONE";
            cout <<endl;
        }
        else if(x == "POPBACK")
        {
            if(!q.empty()) q.pop_back();
        }
    }
    return 0;
}