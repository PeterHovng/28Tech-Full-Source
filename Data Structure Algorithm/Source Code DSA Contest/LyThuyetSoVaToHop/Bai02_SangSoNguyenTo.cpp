#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e7 + 1;
int prime[maxn];
void sang()
{
    prime[0] = prime[1] = 1;
    for(int i = 2 ; i <= sqrt(maxn) ; i++)
    {
        if(prime[i] == 0)
        {
            for(int j = i * i ; j <= maxn ; j += i)
            {
                prime[j] = 1;
            }
        }
    }
}
int main()
{
    sang();
    int n ; cin >> n;
    for(int i = 2 ; i <= n ;i++)
    {
        if(prime[i] == 0)
        {
            cout << i << " ";
        }
    }
    return  0;
}
