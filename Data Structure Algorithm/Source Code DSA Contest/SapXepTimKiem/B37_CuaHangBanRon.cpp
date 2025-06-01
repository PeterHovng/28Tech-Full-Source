#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main()
{
    int n ; cin >> n;
    vector<pair<int,int>>v;
    for(int i = 0 ; i < n ; i++)
    {
        int x , y ; cin >> x >> y;
        v.push_back({x , 1});
        v.push_back({y , -1});
    }
    int res = 0 ,ans = 0;
    sort(v.begin(), v.end());
    for(auto x : v)
    {
        res += x.second;
        ans = max(ans , res);
    }
    cout << ans;
}