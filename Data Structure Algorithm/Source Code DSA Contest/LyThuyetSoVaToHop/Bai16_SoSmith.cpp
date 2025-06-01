#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
bool checknto(int n)
{
    for(int i =2 ; i<= sqrt(n) ; i++)
    {
        if(n % i == 0) return false;
    }
    return n > 1;
}
int sum(int n)
{
    int tong = 0;
    while(n)
    {
        tong += n % 10;
        n /= 10;
    }
    return tong;
}
bool check(int n)
{
    int m = n;
    int ans = 0;
    for(int i = 2 ; i <= sqrt(n) ; i++)
    {
        while(n % i == 0)
        {
            ans += sum(i);
            n /= i;
        }
    }
    if(n != 1) ans += sum(n);
    return ans == sum(m);
}
int main()
{
    int n ; cin >> n;
    if(check(n) && !checknto(n))
    {
        cout << "YES";
    }
    else cout << "NO";
}