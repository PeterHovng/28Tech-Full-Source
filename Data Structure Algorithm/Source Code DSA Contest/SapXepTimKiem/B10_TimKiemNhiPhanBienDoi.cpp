#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;

int first(int a[] , int n , int x)
{
    int l = 0 , r = n - 1 , res = -1;
    while(l <= r)
    {
        int m = (l + r) / 2;
        if(a[m] == x)
        {
            res = m;
            r = m - 1;
        }
        else if(a[m] > x) r = m - 1;
        else l = m + 1;
    }
    return res;
}
int last(int a[] , int n , int x)
{
    int l = 0 , r = n - 1 , res = -1;
    while(l <= r)
    {
        int m = (l + r) / 2;
        if(a[m] == x)
        {
            l = m + 1;
            res = m;
        }
        else if(a[m] > x) r = m - 1;
        else l = m + 1;
    }
    return res;
}
int begin(int a[] , int n , int x)
{
    int l = 0, r = n - 1 , res = -1;
    while(l <= r)
    {
        int m = (l + r) / 2;
        if(a[m] >= x)
        {
            res = m;
            r = m - 1;
        }
        else l = m + 1;
    }
    return res;
}
int end(int a[] , int n , int x)
{
    int l = 0, r = n - 1 , res = -1;
    while(l <= r)
    {
        int m = (l + r) / 2;
        if(a[m] > x)
        {
            res = m;
            r = m - 1;
        }
        else l = m + 1;
    }
    return res;
}
int main()
{
    int n , x; cin >> n >> x;
    int a[n];
    for(int i = 0 ; i < n ; i++) cin >> a[i];
    sort(a , a + n);
    cout << first(a , n , x) << endl;
    cout << last(a , n , x) << endl;
    cout << begin(a , n , x) << endl;
    cout << end(a , n , x) << endl;
    if(last(a  , n , x) != -1)
    {
        cout << last(a , n , x) - first(a , n , x) + 1<< endl;
    }
    else cout << 0;
}