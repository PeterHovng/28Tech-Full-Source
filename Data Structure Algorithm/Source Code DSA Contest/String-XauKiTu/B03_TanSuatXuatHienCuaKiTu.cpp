#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s ; cin >> s;
    int a[256] = {0};
    memset(a , 0 , sizeof(a));
    for(int i = 0 ; i < s.length() ; i++)
    {
        a[s[i]]++;
    }
    for(int i = 0 ; i < 256 ; i++)
    {
        if(a[i] != 0)
        {
            cout << (char)i << " " << a[i] << endl;
        }
    }
    cout << endl;
    for(int i = 0 ; i < s.length() ; i++)
    {
        if(a[s[i]] != 0)
        {
            cout << s[i] << " " << a[s[i]] << endl;
            a[s[i]] = 0;
        }
    }
    return 0;
}
