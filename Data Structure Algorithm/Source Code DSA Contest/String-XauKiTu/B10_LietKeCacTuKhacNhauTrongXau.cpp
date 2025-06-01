#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s ; getline(cin , s);
    set<string>se;
    map<string,int>mp;
    vector<string>v;
    stringstream ss(s);
    string word;
    while(ss >> word)
    {
        mp[word]++;
        se.insert(word);
        v.push_back(word);
    }
    for(string x : se)
    {
        cout << x << " ";
    }
    cout << endl;
    for(string x : v)
    {
        if(mp[x] != 0)
        {
            cout << x << " ";
            mp[x] = 0;
        }
    }
}
