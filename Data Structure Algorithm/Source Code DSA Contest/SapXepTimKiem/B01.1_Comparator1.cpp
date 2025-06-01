#include <bits/stdc++.h>
using namespace std;
map<string,int>mp;
bool cmp1(string a , string b) 
{
    if(a.length() != b.length()) return a.length() < b.length();
    return a < b;
}
bool cmp2(string a , string b)
{
    if(mp[a] != mp[b])
    {
        return mp[a] > mp[b];
    }
    return a < b;
}
int main()
{
    int n ; cin >> n;
    string a[n];
    for(string &x : a) 
    {
        cin >> x;
        mp[x]++;
    }
    sort(a , a + n);
    for(string x : a) cout << x << " ";
    cout <<endl;
    sort(a , a + n , greater<string>());
    for(string x : a) cout << x << " ";
    cout << endl;
    sort(a , a + n , cmp1);
    for(string x : a) cout << x << " ";
    cout << endl;
    sort(a , a + n , cmp2);
    for(string x : a) cout << x << " ";
}