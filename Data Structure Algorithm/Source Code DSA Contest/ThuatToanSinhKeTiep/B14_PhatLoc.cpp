#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

int x[101] , n , ok ;

void ktao()
{
    for(int i = 1 ; i <= n ; i++)
    {
        x[i] = 6;
    }
}
void sinh()
{
    int i = n;
    while(i >= 1 && x[i] == 8)
    {
        x[i] = 6;
        --i;
    }
    if(i == 0) ok = 0;
    else
    {
        x[i] = 8;
    }
}
bool check()
{
    if(x[1] != 8 || x[n] != 6) return false;
    int cnt = 1;
    for(int i = 2 ; i <= n ;i++)
    {
        if(x[i] == 8 && x[i - 1] == 8) return false;
        
        if(i >= 4 && x[i] == 6 && x[i - 1] == 6 && x[i - 2] == 6 && x[i - 3] == 6) return false;
    }
    return true;
}
int main()
{
    cin >> n;
    ok = 1;
    ktao();
    while(ok)
    {
        if(check())
        {
            for(int i = 1 ; i <= n ;i++)
            {
                cout << x[i];
            }
            cout << endl;
        }
        sinh();
    }
    return 0;
}
