#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
int main()
{
    int n ; cin >> n;
    int a[n]; for(int i = 0 ; i < n ; i++) cin >> a[i];
    for(int i = 1 ; i < n ; i++)
    {
        int pos = i - 1 , x = a[i];
        while(pos >= 0 && x < a[pos])
        {
            a[pos + 1] = a[pos];
            --pos;
        }
        a[pos + 1] = x;
        cout << "Buoc " << i << ": ";
        for(int j = 0 ; j < n ; j++)
        {
            cout << a[j] << " ";
        }
        cout <<endl;
    }
    
}