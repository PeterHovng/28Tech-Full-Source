#include <bits/stdc++.h>
using namespace std;
int x;
int main()
{
    int n ; cin >> n >> x;
    int arr[n];
    for(int i = 0 ; i < n;i++) cin >> arr[i];
    sort(arr , arr + n , [](int a , int b)->bool
    {
        if(abs(a - x) != abs(b - x))
        {
            return abs(a - x) < abs(b - x);
        }
        else return a < b;
    });
    for(int x : arr) cout << x << " ";
    cout << endl;
    sort(arr , arr + n , [](int a , int b)-> bool
    {
        if((a&1) == (b&1))
        {
            if(a&1) return a > b;
            else return a < b;
        }
        else return (a&1) < (b&1);
    });
    for(int x : arr) cout << x << " ";
}