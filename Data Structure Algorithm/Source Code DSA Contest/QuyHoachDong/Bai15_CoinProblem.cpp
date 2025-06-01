#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
const int MOD = 1e9;

int main()
{
    int n , m ; cin >> n >> m;
    int a[n] ,arr[m+1] = {0};
    for(int &x : a) cin >> x;
    arr[0] = 0;
    for(int i = 1 ; i <= m ; i++)
    {
        arr[i] = MOD;
        for(int j = 0 ; j < n ; j++)
        {
            if(i >= a[j])
            {
                arr[i] = min(arr[i] , arr[i - a[j]] + 1);
            }
        }
    }
    if(arr[m] >= MOD) cout <<-1;
    else cout << arr[m];
    return 0;
}
