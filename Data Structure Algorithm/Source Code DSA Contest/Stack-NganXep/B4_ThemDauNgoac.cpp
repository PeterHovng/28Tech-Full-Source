#include <bits/stdc++.h>
using namespace std;


int main()
{
    string s ; cin >> s;
    int ans = 0;
    stack<char>st;
    for(int i = 0 ; i < s.length() ;i++)
    {
        if(st.empty())
        {
            st.push(s[i]);
        }
        else if(s[i] == ')' && st.top() == '(')
        {
            ans += 2;
            st.pop();
        }
        else st.push(s[i]);
    }
    cout << s.length() - ans;
    return 0;
}
