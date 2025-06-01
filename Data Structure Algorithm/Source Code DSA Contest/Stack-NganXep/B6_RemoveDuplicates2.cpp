#include <bits/stdc++.h>
using namespace std;


int main()
{
    string s ; cin >> s;
    int k ; cin >> k;
    stack<char>st;
    for(int i = 0 ; i < s.length() ; i++)
    {
        if(st.empty()) st.push(s[i]);
        else if(s[i] != st.top() || st.size() + 1 < k)
        {
            st.push(s[i]);
        }
        else
        {
            int ans = 0;
            for(int j = 0 ; j < k - 1 ; j++)
            {
                if(s[i] == st.top()) 
                {
                    st.pop();
                    ++ans;
                }
                else break;
            }
            if(ans < k - 1)
            {
                for(int j = 0 ; j < ans + 1 ; j++)
                {
                    st.push(s[i]);
                }
            }
        }
    }
    string res = "";
    while(!st.empty())
    {
        res += st.top();
        st.pop();
    }
    if(res == "") 
    {
        cout << "EMPTY";
        return 0;
    }
    reverse(res.begin() , res.end());
    cout << res;
    return 0;
}
