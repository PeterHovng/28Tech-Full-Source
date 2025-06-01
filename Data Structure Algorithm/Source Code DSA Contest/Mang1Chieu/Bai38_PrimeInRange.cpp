#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
typedef long long ll;
const int maxn = 1e6 + 1;
bool t[maxn];
void sang()
{
    t[1] = t[0] = true;
    for(int i = 2 ; i <= sqrt(maxn) ; i++)
    {
        if(t[i] == false)
        {
            for(int j = i * i ; j <= 1e6 ; j += i)
            {
                t[j] = true;
            }
        }
    }
}
int F[maxn];
void QHD()
{
    for(int i = 1 ; i <= 1e6 ; i++)
    {
        if(t[i] == true)
        {
            F[i] = F[i - 1];
        }
        else F[i] = F[i - 1] + 1;
    }
}
int main()
{
    sang();
    QHD();
    int t ; cin >> t;
    while(t--)
    {
        int l , r ; cin >> l >> r;
        if(l == 0) cout << F[r] << endl;
        else cout << F[r] - F[l - 1] << endl;
    }
    return 0;
}