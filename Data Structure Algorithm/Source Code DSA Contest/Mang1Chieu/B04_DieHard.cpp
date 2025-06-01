#include "bits/stdc++.h"
using namespace std;
const int MOD = 1e9 + 7;

bool check(int a[] , int n) 
{
    int d25 = 0 , d50 = 0;
    for(int i = 0 ; i < n ; i++)
    {
        if(a[i] == 25) ++d25;
        else if(a[i] == 50) 
        {
            if(d25 == 0) return false;
            else
            {
                --d25; ++d50;
            }
        }
        else
        {
            if(d25 * 25 + 50* d50 < 75) return false;
            else
            {
                if(d50 >= 1 && d25 >= 1)
                {
                    --d25; --d50;
                }
                else if(d25 >= 3)
                {
                    d25 -= 3;
                }
                else return false;
            }
        }
    }
    return true;
}

int main()
{
    int n ; cin >> n;
    int a[n]; for(int &x : a) cin >> x;
    if(check(a , n)) cout << "YES";
    else cout << "NO";
}