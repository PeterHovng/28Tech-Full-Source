#include <bits/stdc++.h>
using namespace std;

int main()
{
    string x ;
    stack<string>st;
    while(cin >> x)
    {
        st.push(x);
    }
    while(!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}
