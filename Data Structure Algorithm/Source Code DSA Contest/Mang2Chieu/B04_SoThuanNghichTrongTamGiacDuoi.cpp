#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

bool check(int n)
{
    string s = to_string(n);
    string t = s;
    reverse(t.begin(), t.end());
    return s == t;
}

int main()
{
    int n; cin >> n ;
    int a[n][n] , ans = 0;
    for(int i = 0 ; i < n ; i++) 
    {
        for(int j = 0 ; j < n ; j++)
        {
            cin >> a[i][j];
            if(j <= i && check(a[i][j])) ++ans;
        }
    }
    cout << ans;
    
}