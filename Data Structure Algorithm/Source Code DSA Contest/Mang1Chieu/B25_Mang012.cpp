#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;
const int Maxn = 1e6 + 1;

int ans[Maxn];

int main()
{
    int n ; cin >> n;
    int a[n] , b[4]; memset(b, 0, sizeof(b));
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a[i];
        b[a[i]]++;
    }
    for(int i = 0 ; i <= 2 ; i++)
    {
        for(int j = 0 ; j < b[i] ; j++)
        {
            cout << i << " " ;
        }
    }
}

