#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;
int main()
{
    int n , m , s; cin >> n >> m >> s;
    int a[n], b[m];
    for(int i = 0 ; i < n ;i++)
    {
        cin >> a[i];
    }
    for(int i = 0 ; i < m ; i++)
    {
        cin >> b[i];
    }
    sort(a , a + n) ; sort(b , b + m);
    int i = 0 , j = 0 , ans = 0;
    while(i < n && j < m)
    {
        if(abs(a[i] - b[j]) <= s)
        {
            ++ans;
            ++i ; ++j;
        }
        else if(a[i] - b[j] > s)
        {
            ++j;
        }
        else ++i;
    }
    cout << ans;
}