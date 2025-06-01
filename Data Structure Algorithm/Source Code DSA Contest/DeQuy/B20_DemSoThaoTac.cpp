#include <bits/stdc++.h>

using namespace std;

int MOD = (1e9 + 7);
typedef long long ll;

int thaoTac(int n)
{
    if(n == 1) return 0;
    int x = 1e9 , y = 1e9 , z = 1e9;
    if(n % 2 == 0)
    {
        x = 1 + thaoTac(n / 2);
    }
    if(n % 3 == 0)
    {
        y = 1 + thaoTac(n / 3);
    }
    if(n > 1)
    {
        z = 1 + thaoTac(n - 1);
    }
    return min(x , min(y , z));
}

int main()
{
    int n ; cin >> n;
    cout << thaoTac(n);
}
