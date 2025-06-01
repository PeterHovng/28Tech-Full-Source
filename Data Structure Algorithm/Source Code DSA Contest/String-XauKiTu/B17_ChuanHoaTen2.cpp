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
void chuanHoaName(string &s)
{
    for(char &x : s)
    {
        x = toupper(x);
    }
}
int main()
{
    string s ;getline(cin , s);
    stringstream ss(s);
    string x ;
    vector<string>v;
    while(ss >> x)
    {
        chuanHoa(x);
        v.push_back(x);
    }
    chuanHoaName(v[v.size() - 1]);
    for(int i = 0 ; i < v.size() ;i++)
    {
        cout << v[i];
        if(i != v.size() - 2) cout << " ";
        else cout << ", ";
    }
    cout << endl;
    cout << v[v.size() - 1] << ", ";
    for(int i = 0 ; i < v.size() - 1 ; i++)
    {
        cout << v[i] << " ";
    }
}
