#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check(int n)
{
    int dem6 = 0 , sum = 0 , m = n , tong = 0;
    while(n)
    {
        int r = n % 10;
        sum = sum * 10 + r;
        if(r == 6) ++dem6;
        tong += r;
        n /= 10;
    }
    return dem6 >= 1 && (tong % 10 == 8) && sum == m;
}
int main()
{
    int a , b; cin >> a >> b;
    for(int i = a ; i<= b ; i++)
    {
        if(check(i)) cout << i << " ";
    }
}
