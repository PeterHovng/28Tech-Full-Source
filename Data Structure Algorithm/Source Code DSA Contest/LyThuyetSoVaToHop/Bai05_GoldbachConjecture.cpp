#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e6 + 1;
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
    int t ; cin >> t;
    while(t--)
    {
        int n ; cin >> n;
        for(int a = 2 ; a <= n / 2 ; a++)
        {
            if(prime[a] == 0)
            {
                int b = n - a;
                if(prime[b] == 0)
                {
                    cout << a << " " << b << endl;
                }
            }
        }
    }
    return  0;
}
