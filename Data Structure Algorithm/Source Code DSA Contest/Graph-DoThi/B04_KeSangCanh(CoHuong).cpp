#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int>a , pair<int,int>b)
{
    if(a.first != b.first) return a.first < b.first;
    else return a.second < b.second;
}
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
            v.push_back({i , stoi(io)});
        }
    }
    sort(v.begin(), v.end(), cmp);
    for(pair<int,int> x : v) cout << x.first << " " << x.second << endl;
}
