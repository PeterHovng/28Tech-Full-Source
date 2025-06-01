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
bool check(int a)
{
    while(a != 0)
    {
        int r = a % 10;
        if(r != 2 && r != 3 && r != 5 && r != 7) return false;
        a /= 10;
    }
    return true;
}
int main()
{
    sang();
    int a , b ; cin >> a >> b;
    int ans = 0;
    for(int i = a ; i <= b ; i++)
    {
        if(prime[i] == 0 && check(i))
        {
            ++ans;
        }
    }
    cout << ans;
    return  0;
}
