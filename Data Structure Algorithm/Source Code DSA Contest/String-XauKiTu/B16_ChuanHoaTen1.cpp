#include <bits/stdc++.h>
using namespace std;
void chuanHoa(string &s)
{
    s[0] = toupper(s[0]);
    for(int i = 1 ; i < s.length() ; i++)
    {
        s[i] = tolower(s[i]);
    }
}
int main()
{
    string s ;getline(cin , s);
    string ns ; cin >> ns;
    stringstream ss(s);
    string x ;
    vector<string>v;
    while(ss >> x)
    {
        chuanHoa(x);
        v.push_back(x);
    }
    if(ns[2] != '/') ns = "0" + ns;
    if(ns[5] != '/') ns.insert(3 , "0");
    for(string x : v) cout << x << " ";
    cout << endl;
    cout << ns;
}
