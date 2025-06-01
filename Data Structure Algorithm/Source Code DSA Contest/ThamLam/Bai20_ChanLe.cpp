#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check(int a[] , int n)
{
    int chan = 0 , le = 0;
    for(int i = 0 ; i < n ;i++)
    {
        if(a[i] % 2 == 1) ++le;
        else ++chan; 
    }
    if(chan % 2 == 0) return true;
    for(int i = 0 ;i  < n ;i++)
    {
        for(int j = i + 1 ; j < n ;j++)
        {
            if(abs(a[i] - a[j]) == 1)
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    int n ; cin >> n;
    int a[n];
    for(int i= 0 ; i < n ;i++)
    {
        cin >> a[i];
    }
    if(check(a , n)) cout << "YES";
    else cout << "NO";
}
