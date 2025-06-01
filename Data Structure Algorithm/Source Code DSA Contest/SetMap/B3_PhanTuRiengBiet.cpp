#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long ull;
const int MOD = 1e9 + 7;

int main()
{
    int n ; cin >> n;
    vector<int>a(n) ; map<int,int>mp;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a[i] ; mp[a[i]]++; 
    }
    for(int x : a)
    {
        if(mp[x] != 0)
        {
            cout << x << " " ;
            mp[x] = 0;
        }
    }
}