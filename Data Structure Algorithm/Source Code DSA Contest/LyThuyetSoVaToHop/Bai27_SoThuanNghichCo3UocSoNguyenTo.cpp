#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check1(int n)
{
    int m = n;
    int sum =0;
    while(n)
    {
        sum = sum * 10 + n % 10;
        n /= 10;
    }
    return sum == m;
}
bool check2(int n)
{
    int ans = 0;
    for(int i = 2 ; i <= sqrt(n) ;i++)
    {
        if(n % i == 0)
        {
            while(n % i == 0)
            {
                n /= i;
            }
            ++ans;
        }
    }
    if(n != 1) ++ans;
    return ans >= 3;
}
int main()
{
    int a , b ; cin >> a >> b;
    bool ok = false;
    for(int i = a ; i <= b ; i++)
    {
        if(check1(i) && check2(i))
        {
            ok = true;
            cout << i << " ";
        }
    }
    if(ok == false) cout << -1 ;
}
