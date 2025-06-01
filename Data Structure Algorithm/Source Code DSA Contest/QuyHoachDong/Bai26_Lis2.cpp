#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n ; cin >> n;
    vector<int>v;
    v.push_back(1e9 + 7);
    for(int i = 1 ; i <= n ;i++)
    {
        int x ; cin >> x;
        auto it = lower_bound(v.begin() , v.end() , x);
        if(it == v.end())
        {
            v.push_back(x);
        }
        else
        {
            *it = x;
        }
    }
    cout << v.size();
    return  0;
}
