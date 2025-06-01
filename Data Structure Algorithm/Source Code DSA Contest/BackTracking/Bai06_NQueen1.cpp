#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

int n , c[25] , d1[50] , d2[50] , res;

void Try(int i)
{
    for(int j = 1 ; j <= n ; j++)
    {
        if(!c[j] && !d1[i - j + n] && !d2[i + j - 1])
        {
            c[j] = d1[i - j + n] = d2[i + j - 1] = 1;
            if(i == n)
            {
                ++res;
            }
            else Try(i + 1);
            c[j] = d1[i - j + n] = d2[i + j - 1] = 0;
        }
    }
}

int main()
{
    cin >> n;
    res = 0;
    Try(1);
    cout << res;
}
