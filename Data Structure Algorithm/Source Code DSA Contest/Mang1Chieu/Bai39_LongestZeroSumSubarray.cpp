#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ; cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i++) cin >> a[i];
    map<int,int>mp;
    int ans = -1 ; mp[0] = -1;
    int sum = 0 , index = -1;
    for(int i = 0 ; i < n ;i++)
    {
        sum += a[i];
        if(mp.count(sum))
        {
            int l = i - mp[sum];
            if(l > ans)
            {
                ans = l;
                index = mp[sum] + 1;
            }
        }
        else mp[sum] = i;
    }
    if(index == -1) cout << "NOT FOUND";
    else
    {
        for(int i = index ; i <= index + ans - 1 ; i++)
        {
            cout << a[i] << " ";
        }
    }
}