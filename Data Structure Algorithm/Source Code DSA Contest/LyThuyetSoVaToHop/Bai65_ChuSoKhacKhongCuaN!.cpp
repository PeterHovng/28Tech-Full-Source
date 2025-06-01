#include <bits/stdc++.h>
using namespace std;
void giaithua(int n , int &res , int count)
{
    if(n == 1 || n == 0) return;
    int number = n;
    while(number % 5 == 0)
    {
        ++count;
        number /= 5;
    }
    while(count != 0 && (number % 2) == 0)
    {
        --count;
        number /= 2;
    }
    res = res * (number % 10);
    res %= 10;
    giaithua(n - 1 , res , count);
}
int main()
{
    int n ; cin >> n;
    int res = 1;
    giaithua(n , res , 0);
    cout << res;
    return 0;
}