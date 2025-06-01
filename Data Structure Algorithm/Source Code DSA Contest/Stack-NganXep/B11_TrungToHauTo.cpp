#include <bits/stdc++.h>
using namespace std;
int uutien(char x)
{
    if(x == '*' ||  x == '/')
    {
        return 2;
    }
    else if(x == '+' || x == '-')
    {
        return 1;
    }
    else return 0;
}
int main()
{
    string s ; cin >> s;
    stack<char>st;
    string res = "";
    for(char x : s)
    {
        if(isalpha(x))
        {
            res += x;
        }
        else if(x == '(')
        {
            st.push(x);
        }
        else if(x == ')')
        {
            while(!st.empty() && st.top() != '(')
            {
                res += st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            while(!st.empty() && uutien(st.top()) >= uutien(x))
            {
                res += st.top();
                st.pop();
            }
            st.push(x);
        }
    }
    while(!st.empty()) 
    {
        res += st.top(); st.pop();
    }
    cout << res;
    return 0;
}
