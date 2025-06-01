#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s ; getline(cin , s);
    int dem1 = 0 , dem2 = 0 , dem3 = 0;
    for(int i = 0 ; i < s.length() ; i++)
    {
        if(isalpha(s[i]))
        {
            ++dem1;
        }
        else if(isdigit(s[i]))
        {
            ++dem2;
        }
        else ++dem3;
    }
    cout << dem1 << " " << dem2 << " " << dem3;
    return 0;
}
