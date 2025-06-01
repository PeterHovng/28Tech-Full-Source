#include <bits/stdc++.h>
using namespace std;

int a[1001] , n , ok;

void ktao()
{
    for(int i = 1 ;i <= n ;i++)
    {
        a[i] = 0;
    }
}
void sinh()
{
    int i = n ;
    while(i >= 0 && a[i] == 1)
    {
        a[i] = 0; --i;
    }
    
    if(i == 0) ok = 0;
    else
    {
        a[i] = 1;
    }
}
int main()
{
    cin  >> n;
    ok = 1;
    ktao();
    while(ok == 1)
    {
        for(int i = 1 ; i <= n ; i++)
        {
            if(a[i] == 0) cout << "B";
            else cout << "A";
        }
        cout << endl;
        sinh();
    }
    return 0;
}
