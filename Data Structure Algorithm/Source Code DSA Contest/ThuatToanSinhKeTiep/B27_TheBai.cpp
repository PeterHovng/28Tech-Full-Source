#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
bool check(int a[] , int n)
{
    for(int i = 1 ; i < n; i++)
    {
        if(abs(a[i] - a[i + 1]) == 1) return false;
    }
    return true;
}
int main()
{
    int n; cin >> n;
    int a[n + 1];
    for(int i = 1 ; i<= n ;i++)
    {
        a[i] = i;
    }
    do
    {
        if(check(a , n))
        {
            for(int i = 1 ; i<= n ; i++)
            {
                cout << a[i];
            }
            cout << endl;
        }
    }while(next_permutation(a + 1 , a + n + 1));
    return 0;
}
