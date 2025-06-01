#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s ; cin >> s;
    reverse(s.begin() , s.end());
    stack<string>st;
    string res = "";
    for(char x : s)
    {
        if(isalpha(x))
        {
            st.push(string(1 , x));
        }
        else
        {
            string tmp1 = st.top();st.pop();
            string tmp2 = st.top();st.pop();
            st.push(tmp1 + tmp2 + x);
        }
    }
    cout << st.top();
    return 0;
}
