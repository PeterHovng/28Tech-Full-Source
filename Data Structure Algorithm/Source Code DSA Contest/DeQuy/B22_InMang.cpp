#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
void in1(int a[] , int n)
{
    if(n == -1) return;
    in1(a , n - 1);
    cout << a[n] << " ";
}
void in2(int a[] , int n)
{
    if(n == -1) return;
    cout << a[n] << " ";
    in2(a , n - 1);
}
int main()
{
    int n ; cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a[i];
    }
    in1(a , n - 1);
    cout << endl;
    in2(a , n - 1);
}
