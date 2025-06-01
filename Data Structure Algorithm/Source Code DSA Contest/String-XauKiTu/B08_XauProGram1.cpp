#include <bits/stdc++.h>
using namespace std;
void chuyenThuong(string &s)
{
    for(char &x : s)
    {
        x = tolower(x);
    }
}
int main()
{
    string s ; cin>>s;
    set<char>se;
    chuyenThuong(s);
    for(char x : s) se.insert(
    if(se.size() == 26)
    {
        cout << "YES";
    }
    else cout << "NO";
}
