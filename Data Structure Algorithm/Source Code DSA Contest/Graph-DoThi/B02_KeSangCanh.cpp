#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n ; cin >> n; cin.ignore();
    vector<pair<int,int>>v;
    for(int i = 1 ; i <= n ;i++)
    {
        string s; getline(cin , s);
        stringstream ss(s);
        string io;
        while(ss >> io)
        {
            if(stoi(io) > i) v.push_back({i , stoi(io)});
        }
    }
    for(pair<int,int> x : v) cout << x.first << " " << x.second << endl;
}
