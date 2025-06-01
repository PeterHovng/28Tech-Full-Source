#include <bits/stdc++.h>
using namespace std;
int tong(int n)
{
    int sum = 0;
    while(n)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
bool cmp(int a , int b) 
{
    if(tong(a) != tong(b)) return tong(a) < tong(b);
    return a < b;
}
int main()
{
    int n ; cin >> n;
    int a[n]; 
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a[i];
    }
    sort(a , a + n , cmp);
    for(int x : a) cout << x << " ";
}