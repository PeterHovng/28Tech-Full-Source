#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    string s ; cin >> s;
    stack<ll>st;
    for(char x : s)
    {
        if(isdigit(x))
        {
            st.push(stoll(string(1 , x)));
        }
        else
        {
            ll s1 = st.top(); st.pop();
            ll s2 = st.top(); st.pop();
            if(x == '+')
            {
                st.push(s1 + s2);
            }
            else if(x == '-')
            {
                st.push(s2 - s1);
            }
            else if(x == '/')
            {
                st.push(s2 / s1);
            }
            else st.push(s1 * s2);
        }
    }
    cout << st.top();
    return 0;
}
