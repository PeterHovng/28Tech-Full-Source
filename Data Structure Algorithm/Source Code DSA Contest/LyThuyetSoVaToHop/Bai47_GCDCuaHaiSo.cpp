#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
const int maxn = 1e6 + 1;
int cnt[maxn];
int main()
{
    int n ; cin >> n;
    int a[n];
    for(int i = 0 ; i < n;i++)
    {
        cin >> a[i];
        cnt[a[i]]++;
    }
    int res = *max_element(a , a + n);
    for(int i = res ; i >= 1 ; i--)
    {
        int dem = 0;
        for(int j = 0 ; j <= res ; j += i)
        {
            dem += cnt[j];
            if(dem >= 2)
            {
                cout << i << endl;
                return 0;
            }
        }
    }
}