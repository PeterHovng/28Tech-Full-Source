#include <bits/stdc++.h>
using namespace std;
bool cmp(string a , string b)
{
    string ab = a + b;
    string ba = b + a;
    return ab > ba;
}
int main()
{
    int t ; cin >> t;
    vector<string>v;
    while(t--)
    {
        string x ; cin >>x;
        v.push_back(x);
    }
    sort(v.begin() , v.end() ,cmp);
    for(string x : v)
    {
        cout << x;
    }
}
