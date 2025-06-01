#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n ; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    vector<int>res(n , 1);
    vector<int>ans(n , 1);
    int kq = 0;
    for(int i = 1 ;i < n ;i++)
    {
        if(a[i] > a[i - 1])
        {
            res[i] = res[i - 1] + 1;
        }
        kq = max(res[i] , kq);
    }
    for(int i = n - 2 ; i >= 0 ; i--)
    {
        if(a[i] < a[i + 1])
        {
            ans[i] = ans[i + 1] + 1;
        }
        kq = max(res[i] , kq);
    }
    for(int i = 1 ; i < n - 1 ; i++)
    {
        if(a[i - 1] < a[i + 1])
        {
            kq = max(res[i - 1] + ans[i + 1] , kq);
        }
    }
    cout << kq;
    return  0;
}
