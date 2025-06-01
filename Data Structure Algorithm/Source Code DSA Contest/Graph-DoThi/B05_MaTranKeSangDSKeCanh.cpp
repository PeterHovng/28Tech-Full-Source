#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ; cin >> n;
    vector<pair<int,int>>canh;
    vector<int>ke[n + 1];
    for(int i = 1 ; i <= n ;i++)
    {
        for(int j = 1 ; j <= n ;j++)
        {
            int x ; cin >> x;
            if(x && j < i)   canh.push_back({i , j});
            if(x)  ke[i].push_back(j);
        }
    }
    for(auto x : canh) cout << x.first << " " << x.second << endl;
    cout << endl;
    for(int i = 1 ; i <= n ;i++)
    {
        cout << i << " : " ;
        for(int x : ke[i]) cout << x << " ";
        cout << endl;
    }
}
