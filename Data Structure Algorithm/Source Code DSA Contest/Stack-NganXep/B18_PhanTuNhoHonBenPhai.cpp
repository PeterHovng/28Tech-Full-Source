#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ; cin >> n;
    int a[n];
    for(int i = 0 ;i  < n ;i++) cin >> a[i];
    stack<int>st;
    map<int,int>mp1 , mp2;
    for(int i = 0 ; i < n ;i++)
    {
        cin >> a[i];
        if(st.empty())
        {
            st.push(i);
        }
        else
        {
            while(!st.empty() && a[i] > a[st.top()])
            {
                mp1[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }
    }
    while(!st.empty())
    {
        mp1[st.top()] = -1;
        st.pop();
    }
    for(int i = 0 ; i < n ;i++)
    {
        if(st.empty())
        {
            st.push(i);
        }
        else
        {
            while(!st.empty() && a[i] < a[st.top()])
            {
                mp2[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }
    }
    while(!st.empty())
    {
        mp2[st.top()] = -1;
        st.pop();
    }
    for(int i = 0 ; i < n ;i++)
    {
        if(mp1[i] == -1 || mp2[mp1[i]] == -1)
        {
            cout << -1 << " ";
        }
        else cout << a[mp2[mp1[i]]] << " ";
    }
    return 0;
}
