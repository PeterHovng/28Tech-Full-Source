#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s , n ; cin >> s >> n;
    if(s > n * 9) cout << -1;
    else
    {
        string res = "";
        s -= 1;
        for(int i = 1 ; i <= n - 1 ; i++)
        {
            if(s >= 9)
            {
                res += "9";
                s -= 9;
            }
            else
            {
                res = to_string(s) + res;
                s = 0;
            }
        }
        s++;
        res = to_string(s) + res;
        cout << res;
    }
    return 0;
}
