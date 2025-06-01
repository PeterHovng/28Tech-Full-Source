#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long ull;
bool check(string s)
{
    stack<char>st;
    for(char x : s)
    {
        if(st.empty())
        {
            st.push(x);
        }
        else if(x == ')')
        {
            if(st.top() == '(') 
            {
                st.pop();
            }
            else return false;
        }
        else if(x == ']')
        {
            if(st.top() == '[') 
            {
                st.pop();
            }
            else return false;
        }
        else if(x == '}')
        {
            if(st.top() == '{') 
            {
                st.pop();
            }
            else return false;
        }
        else st.push(x);
    }
    return st.size() == 0;
}
int main()
{
    string s ; cin >> s;
    if(check(s)) cout << "YES";
    else cout << "NO";
}
