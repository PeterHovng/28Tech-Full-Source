#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s ; cin >>s;
    int a[256] = {0};
    for(int i = 0 ; i < s.length() ; i++)
    {
        a[s[i]]++;
    }
    int Max = 0 , Min = 1e5;
    for(int i = 0 ; i < 256 ; i++)
    {
        if(a[i] != 0)
        {
            Max = max(a[i], Max);
            Min = min(a[i] , Min);
        }
    }
    for(int i = 255 ; i>= 0 ; i--)
    {
        if(a[i] == Max)
        {
            cout << (char) i << " " << a[i] ;
            break;
        }
    }
    cout <<endl;
    for(int i = 255 ; i>= 0 ; i--)
    {
        if(a[i] == Min)
        {
            cout << (char) i << " " << a[i] ;
            break;
        }
    }
}
