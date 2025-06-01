#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;
void chuyenThuong(string &x)
{
    for(char &s : x)
    {
        s = tolower(s);
    }
}
int main()
{
    string s ; getline(cin , s);
    string t; getline(cin , t);
    set<string>se1;
    set<string>se2;
    string x;
    stringstream ss(s);
    while(ss >> x)
    {
        chuyenThuong(x);
        se1.insert(x);
    }
    stringstream tt(t);
    while(tt >> x)
    {
        chuyenThuong(x);
        se2.insert(x);
    }
    for(string x : se1)
    {
        if(!se2.count(x))
        {
            cout << x << " ";
        }
    }
    return 0;
}
