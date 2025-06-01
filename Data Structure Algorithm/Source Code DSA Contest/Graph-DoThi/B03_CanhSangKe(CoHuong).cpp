#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n , m ; cin >> n >> m;
    vector<int>v[n + 1];
    for(int i = 1 ; i <= m ;i++)
    {
        int a , b ; cin >> a >> b;
        v[a].push_back(b);
    }
    for(int i = 1 ; i <= n ; i++)
    {
        sort(v[i].begin() , v[i].end());
        cout << i << " : " ;
        for(int x : v[i]) cout << x << " ";
        cout << endl;
    }
}
