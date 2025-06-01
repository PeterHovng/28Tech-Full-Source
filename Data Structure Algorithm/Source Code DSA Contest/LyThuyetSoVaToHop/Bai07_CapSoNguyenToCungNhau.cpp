#include <bits/stdc++.h>
using namespace std;
int gcd(int a , int b)
{
    return (b == 0) ? a : gcd(b , a % b);
}
int main()
{
    int a , b ; cin >> a >> b;
    for(int i = a ; i <= b ; i++)
    {
        for(int j = i + 1 ; j <= b ; j++)
        {
            if(gcd(i , j) == 1)
            {
                cout << "(" << i << "," << j << ")" << endl;
            }
        }
    }
}