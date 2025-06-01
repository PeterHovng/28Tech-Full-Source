#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;
const int Maxn = 1e7 + 1;


int main()
{
    int n ; cin >> n;
    vector<int>a(n);
    for(int i = 0 ; i < n ;i++) cin >>a[i];
    sort(a.begin(), a.end());
    int Min = MOD ;
    for(int i = 1 ; i < n ; i++) 
    {
        int tmp = a[i] - a[i - 1] ; 
        if(tmp < Min) Min = tmp;
    }
    int ans = 0;
    for(int i = 1 ; i < n ;i++)
    {
        int tmp = a[i] - a[i - 1];
        if(tmp == Min) ++ans;
    }
    cout << Min << " " << ans;
}

