#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n , k ; cin >> n >> k;
    int a[n];
    map<int,bool>mp;
    for(int i = 0 ; i < n;i++)
    {
        cin >> a[i];
    }
    for(int i = 0 ;i < n;i++)
    {
        if(k > a[i] && mp[k - a[i]])
        {
            cout << "YES";
            return 0;
        }
        mp[a[i]] = true;
    }
    cout << "NO";
    return 0;
}