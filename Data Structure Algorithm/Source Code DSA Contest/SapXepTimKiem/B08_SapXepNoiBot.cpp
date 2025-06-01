#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
int main()
{
    int n ; cin >> n;
    int a[n]; for(int i = 0 ; i < n ; i++) cin >> a[i];
    for(int i = 0 ; i < n - 1 ; i++)
    {
        for(int j = 0 ; j < n - i - 1 ; j++) 
        {
            if(a[j] > a[j + 1]) swap(a[j] , a[j + 1]);
        }
        cout << "Buoc " << i + 1 << ": ";
        for(int j = 0 ; j < n ; j++) cout << a[j] << " ";
        cout << endl;
    }
}