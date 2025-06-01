#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s ;getline(cin , s);
    string t ; getline(cin , t);
    if(s.find(t) != string::npos)
    {
        cout << "YES";
    }
    else cout << "NO";
}
