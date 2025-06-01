#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n ; cin >> n;
    int a[n];
    for(int i = 0 ; i < n ;i++)
    {
        cin >> a[i];
    }
    sort(a , a + n);
    int sum = 0;
    int ans = 0;
    for(int i = 0 ; i < n ; i++)
    {
        if(a[i] >= sum)
        {
            ++ans;
            sum += a[i];
        }
    }
    cout << ans;
}
