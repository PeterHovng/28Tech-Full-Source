#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s ; cin >> s;
    stack<char>st;
    int ans = 0;
    for(char x : s)
    {
        if(x == '(')
        {
            st.push(x);
        }
        else
        {
            if(st.empty())
            {
                ++ans;
                st.push('(');
            }
            else st.pop();
        }
    }
    cout << st.size() / 2 + ans;
    return 0;
}
