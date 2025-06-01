#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n ; cin >> n;
    long long a[n];
    for(int i = 0 ; i < n ;i++) cin >> a[i];
    long long res = 0;
    stack<int>st;
    int i = 0;
    while(i < n)
    {
        if(st.empty()|| a[i] >= a[st.top()])
        {
            st.push(i);
            ++i;
        }
        else
        {
            int tmp = st.top();
            st.pop();
            if(st.empty())
            {
                res = max(res , a[tmp] * i);
            }
            else
            {
                res = max(res , a[tmp] * (i - st.top() - 1));
            }
        }
    }
    while(!st.empty())
    {
        int tmp = st.top();
        st.pop();
        if(st.empty())
        {
            res = max(res , a[tmp] * i);
        }
        else
        {
            res = max(res , a[tmp] * (i - st.top() - 1));
        }
    }
    cout << res;
}
