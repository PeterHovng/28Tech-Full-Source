#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
struct Matrix
{
    ll F[2][2];
    friend Matrix operator * (Matrix , Matrix);
};
Matrix operator * (Matrix a , Matrix b)
{
    Matrix res;
    for(int i = 0 ;i < 2 ; i++)
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
Matrix powMod(Matrix a , int n)
{
    if(n == 1 || n == 0) return a;
    Matrix x = powMod(a , n / 2);
    if(n % 2 == 1) return x*x*a;
    else return x*x;
}
int main()
{
    int n ; cin >>n;
    Matrix a; a.F[0][0] = 1 ; a.F[0][1] = 1 ; a.F[1][0] = 1; a.F[1][1] = 0;
    Matrix tmp = powMod(a , n);
    cout << tmp.F[1][1];
    return 0;
}