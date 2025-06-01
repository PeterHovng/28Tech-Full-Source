#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
int uoc_max(int n)
{
    int ans = 0;
    for(int i = 2 ; i <= sqrt(n) ; i++)
    {
        while(n % i == 0)
        {
            ans = max(i , ans);
            n /= i;
        }
    }
    if(n != 1) ans = max(ans , n);
    return ans;
}
int main()
{
    int t ; cin >> t;
    while(t--)
    {
        int n ; cin >> n;
        cout << uoc_max(n) << endl;
    }
}