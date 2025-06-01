#include <bits/stdc++.h>
using namespace std;
int powmod(int a , int b)
{
    int res = 1;
    while(b)
    {
        if(b&1)
        {
            res *= a;
            res %= 10;
        }
        a *= a;
        a %= 10;
        b >>= 1;
    }
    return res;
}
int main()
{
    int a , b ; cin >> a >> b;
    cout << powmod(a , b);
    return 0;
}