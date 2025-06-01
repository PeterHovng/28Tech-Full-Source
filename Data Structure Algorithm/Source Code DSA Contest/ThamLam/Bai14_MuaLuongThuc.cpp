#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n , s , m ; cin >> n >> s >> m;
    if(n * (s - s / 7) < m * s) cout << -1;
    else
    {
        for(int i = 0 ; i <= s - s/ 7 ; i++)
        {
            if(n * i >= s * m)
            {
                cout << i << endl;
                return 0;
            }
        }
        cout << -1;
    }
    return 0;
}
