#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t ; cin >> t;
    stack<int>st;
    for(int i = 1 ; i <= t ; i++)
    {
        string x ; cin >> x;
        if(x == "top")
        {
            if(st.empty())
            {
                cout << "NONE";
            }
            else cout << st.top();
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
