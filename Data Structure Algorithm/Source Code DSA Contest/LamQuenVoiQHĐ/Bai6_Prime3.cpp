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
ll F[maxn];
void QHD()
{
    for(int i = 1 ; i <= 1e6 ; i++)
    {
        if(t[i] == true)
        {
            F[i] = F[i - 1];
        }
        else 
        {
            if(F[i - 1] == 0) F[i] = i;
            else F[i] = F[i - 1] * i;
            F[i] %= MOD;
        }
    }
}
int main()
{
    sang();
    QHD();
    int t ; cin >> t;
    while(t--)
    {
        int n ; cin >> n;
        cout << F[n] << endl;
    }
    return 0;
}