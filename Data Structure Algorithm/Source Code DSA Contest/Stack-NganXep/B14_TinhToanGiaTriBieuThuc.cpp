#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t; t = 1;
    while(t--)
    {
        string s ; cin >> s;
        stack<ll>st;
        for(int i = s.length() - 1 ; i >= 0 ; i--)
        {
            if(isdigit(s[i]))
            {
                st.push(stoll(string(1 , s[i])));
            }
            else
            {
                ll s1 = st.top(); st.pop();
                ll s2 = st.top(); st.pop();
                if(s[i] == '+')
                {
                    st.push(s1 + s2);
                }
                else if(s[i] == '-')
                {
                    st.push(s1 - s2);
                }
                else if(s[i] == '/')
                {
                    st.push(s1 / s2);
                }
                else st.push(s1 * s2);
            }
        }
        ll res = st.top();
        cout << res << endl;
    }
}
