#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t ; cin >> t;
    stack<int>st;
    for(int i = 1 ; i <= t ; i++)
    {
        string x ; cin >> x;
        if(x == "show")
        {
            vector<int>v;
            while(!st.empty())
            {
                v.push_back(st.top());
                st.pop();
            }
            reverse(v.begin() , v.end());
            for(int x : v)
            {
                cout << x << " ";
                st.push(x);
            }
            if(v.size() == 0) cout << "EMPTY" ;
            cout << endl;
        }
        else if(x == "push")
        {
            int y ; cin >> y;
            st.push(y);
        }
        else
        {
            if(st.empty() == false) st.pop();
        }
    }
    return 0;
}
