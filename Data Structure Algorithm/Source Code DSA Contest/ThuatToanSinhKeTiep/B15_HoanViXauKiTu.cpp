#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

int main()
{
    string s; cin >> s;
    int a[12]; 
    set<char>se;
    for(int i = 0 ; i <s.length() ; i++)
    {
        se.insert(s[i]);
    }
    vector<char>v;
    for(auto x : se) v.push_back(x);
    for(int i = 0 ; i < v.size() ; i++)
    {
        a[i] = i;
    }
    do
    {
        for(int i = 0 ; i < v.size() ; i++)
        {
            cout << v[a[i]];
        }
        cout << endl;
    }while(next_permutation(a , a + v.size()));
    return 0;
}
