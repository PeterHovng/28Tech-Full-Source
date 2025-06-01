#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long ull;
const int MOD = 1e9 + 7;

int main()
{
    int n ; cin >> n;
    vector<int>a(n);unordered_map<int,int>mp;
    int Min = MOD , Max = 0;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a[i];
        Min = min(a[i] , Min) ; Max = max(a[i] , Max) ;
        mp[a[i]]++;
    }
    for(int i = Min ; i <= Max ; i++)
    {
        if(mp[i] != 0) cout << i << " " << mp[i] << endl;
    }
    cout << endl;
    for(int x : a)
    {
        if(mp[x] != 0)
        {
            cout << x << " " << mp[x] << endl;
            mp[x] = 0;
        }
    }
}