#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;
int main()
{
    int n , x ; cin >> n >> x;
    int a[n];    map<int, int>mp;
    for(int &x : a)
    {
        cin >> x;
        mp[x] = 1;
    }
    for(int i = 0 ; i < n ;i++)
    {
        if(a[i] > x && mp[a[i] - x] == 1)
        {
            cout << "1";
            return 0;
        }
    }
    cout << "-1";
}