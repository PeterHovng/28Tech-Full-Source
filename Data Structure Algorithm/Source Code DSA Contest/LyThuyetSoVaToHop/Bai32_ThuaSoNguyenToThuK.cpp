#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e7 + 1;
int thuaso(int n , int k)
{
    int res = 0;
    for(int i= 2 ;i <= sqrt(n) ;i++)
    {
        while(n % i == 0)
        {
            ++res;
            n /= i;
            if(res == k) return i;
        }
    }
    if(n != 1) ++res;
    if(res == k) return n;
    else return -1;
}
int main()
{
    int n , k ; cin >> n >> k;
    cout << thuaso(n , k);
}
