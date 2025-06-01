#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1 ; cin >> s1;
    string s2 ; cin >> s2;
    set<char>se1;
    set<char>se2;
    for(char x : s1) se1.insert(x);
    for(char x : s2) se2.insert(x);
    
    set<char>se3;
    for(char x : se1)
    {
        if(se2.count(x))
        {
            se3.insert(x);
        }
    }
    for(char x : se3) cout << x ;
    set<char>se4;
    cout << endl;
    for(char x : se1)
    {
        se4.insert(x);
    }
    for(char x : se2)
    {
        se4.insert(x);
    }
    for(char x : se4) cout << x ;
}
