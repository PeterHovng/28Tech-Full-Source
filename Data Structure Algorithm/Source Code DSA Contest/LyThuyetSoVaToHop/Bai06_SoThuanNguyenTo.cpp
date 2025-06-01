#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e6 + 1;
bool checknto(int n)
{
    for(int i = 2 ;i <= sqrt(n) ; i++)
    {
        if(n % i == 0) return false;
    }
    return n > 1;
}
bool check(int n)
{
    int sum = 0;
    while(n)
    {
        int r = n % 10;
        sum += r;
        if(r != 2 && r != 5 && r != 7 && r != 3) return false;
        n /= 10;
    }
    return checknto(sum);
}
int main()
{
    int a , b ; cin >> a >> b;
    int ans = 0;
    for(int i = a ; i <= b ; i++)
    {
        if(check(i) && checknto(i))
        {
            ++ans;
        }
    }
    cout << ans;
}