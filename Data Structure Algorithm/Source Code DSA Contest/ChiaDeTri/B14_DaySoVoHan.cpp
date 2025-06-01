#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;

struct matran
{
    ll F[2][2];
    friend matran operator * (matran a , matran b)
    {
        matran res;
        for(int i = 0 ; i < 2 ; i++)
        {
            for(int j = 0 ; j < 2 ; j++)
            {
                res.F[i][j] = 0;
                for(int k = 0 ; k < 2 ; k++)
                {
                    res.F[i][j] += a.F[i][k] * b.F[k][j];
                    res.F[i][j] %= MOD;
                }
            }
        }
        return res;
    }    
};
matran powMod(matran a , int n)
{
    if(n == 1) return a;
    matran tmp = powMod(a , n / 2);
    if(n % 2 == 0)
    {
        return tmp * tmp;
    }
    else return tmp * tmp * a;
}
int main()
{
    int n ; cin >> n;
    matran a;
    a.F[0][0] = 1 ; a.F[0][1] = 1 ;
    a.F[1][0] = 1 ; a.F[1][1] = 0;
    matran res = powMod(a , n);
    cout << res.F[0][1];
}
