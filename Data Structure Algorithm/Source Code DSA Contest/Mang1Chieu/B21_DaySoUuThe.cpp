#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;
const int Maxn = 1e6 + 1;

int ans[Maxn];

int main()
{
    int x ;
    int chan = 0 , le = 0 ;
    while(cin >> x)
    {
        if(x % 2 == 0) chan++;
        else le++;
    }
    int tmp = chan + le;
    if((tmp % 2 == 0 && chan > le) || (tmp % 2 == 1 && le > chan))
    {
        cout << "YES";
    }
    else cout << "NO";
}

