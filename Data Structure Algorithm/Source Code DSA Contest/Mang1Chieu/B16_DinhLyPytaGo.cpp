#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;
const int Maxn = 1e7 + 1;

bool check(vector<ll>a , int n) 
{
    for(int i = n - 1; i >= 0 ; i--)
    {
        int r = i - 1 , l = 0;
        while(l < r)
        {
            ll tmp = a[r] * a[r] + a[l] * a[l];
            if(tmp == a[i] * a[i]) return true;
            else if(tmp > a[i] * a[i]) --r;
            else ++l;
        }
    }
    return false;

}

int main()
{
    int n ; cin >> n;
    vector<ll>a(n);
    for(int i = 0 ; i < n ;i++) cin >> a[i];
    sort(a.begin(), a.end());
    if(check(a , n)) cout << "YES";
    else cout << "NO";
}

