#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const int MOD = 1e9 + 7;

int main()
{
    map<int,int>mp;
    int n ; cin >> n;
    mp[0] = 1;
    int chan = 0 , le = 0 , res = 0;
    for(int i = 1 ; i <= n ; i++)
    {
        int x ; cin >> x;
        if(x % 2 == 0) ++chan;
        else ++le;
        if(mp.find(chan - le) != mp.end())
        {
            res +=  mp[chan - le];
        }
        mp[chan - le]++;
    }
    cout << res;
    return 0;
}
