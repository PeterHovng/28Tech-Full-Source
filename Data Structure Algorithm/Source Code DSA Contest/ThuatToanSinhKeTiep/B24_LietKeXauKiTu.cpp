#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

char a[1001] , c ; int n , k , ok;
void ktao()
{
    for(int i  = 1 ; i <= k ; i++)
    {
        a[i] = 'A';
    }
}
void sinh()
{
    int i = k;
    while(i >= 1 && a[i] == c)
    {
        --i;
    }
    if(i == 0) ok = 0;
    else
    {
        a[i]++;
        for(int j = i + 1 ; j <= k; j++)
        {
            a[j] = 'A';
        }
    }
}
int main()
{
    cin >> c >> k;
    ok = 1;ktao();
    while(ok)
    {
        string res = "";
        for(int i = 1 ; i <= k ; i++)
        {
            cout << a[i];
        }
        cout << endl;
        sinh();
    }
    return 0;
}
