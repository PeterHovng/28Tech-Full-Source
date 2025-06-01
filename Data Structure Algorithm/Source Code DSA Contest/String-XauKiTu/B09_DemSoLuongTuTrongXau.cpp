#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s ; getline(cin , s);
    string word;
    vector<string>v;
    stringstream ss(s);
    while(ss >> word)
    {
        v.push_back(word);
    }
    cout << v.size();
}
