#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;
int n , k;
struct matran
{
    ll F[11][11];
    friend istream& operator >> (istream &in , matran &x)
    {
        for(int i = 0 ; i < n ;i++)
        {
            for(int j = 0 ; j < n ; j++)
            {
                in >> x.F[i][j];
            }
        }
        return in;
    }
    friend ostream& operator << (ostream &out , matran x)
    {
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = 0 ; j < n ; j++)
            {
                out << x.F[i][j] << " ";
            }
            out << endl;
        }
        return out;
    }
    friend matran operator * (matran a , matran b)
    {
        matran res;
        for(int i = 0 ;i < n ; i++)
        {
            for(int j = 0 ; j < n ; j++)
            {
                res.F[i][j] = 0;
                for(int k = 0 ; k < n ; k++)
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
    cin >> n >> k;
    matran a; cin >> a;
    matran res = powMod(a , k);
    cout << res;
}
