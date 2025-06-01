#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ; cin >> n;
    int a[n] , b[n];
    stack<int>st;
    for(int i = 0 ; i < n ;i++)
    {
        int x; cin >> x;
        b[i] = x;
        if(st.empty())
        {
            st.push(i);
        }
        else 
        {
            while(!st.empty() && x > b[st.top()])
            {
                a[st.top()] = x;
                st.pop();
            }
            st.push(i);
        }
    }
    while(!st.empty())
    {
        a[st.top()] = -1;
        st.pop();
    }
    for(int i = 0 ; i < n ;i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
