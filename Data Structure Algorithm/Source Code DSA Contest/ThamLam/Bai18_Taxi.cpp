#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n ; cin >> n;
    int d[5] = {0};
    for(int i = 0 ; i < n ;i++)
    {
        int x ; cin >> x;
        d[x]++;
    }
    int ans = d[4] + d[3];
    if(d[1] > d[3]) d[1] -= d[3];
    else d[1] = 0;
    ans += d[2] / 2;
    if(d[2] % 2 == 1)
    {
        ++ans;
        if(d[1] > 2) d[1] -= 2;
        else d[1] = 0;
    }
    ans += d[1] / 4;
    d[1] %= 4;
    if(d[1] != 0)
    {
        ++ans;
    }
    cout << ans;
    return 0;
}
