#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
typedef long long ll;

int main()
{
    int n , k ; cin >> n >> k;
    int a[n];map<int,int>mp;
    for(int i = 0 ; i < n;i++) cin >> a[i] , mp[a[i]] = -1;
    for(int i = 0 ;i < n;i++)
    {
        if(mp[a[i]] != -1)
        {
            if(i - mp[a[i]] <= k)
            {
                cout << "YES";
                return 0;
            }
            else mp[a[i]] = i;
        }
        mp[a[i]] = i;
    }
    cout << "NO";
	return 0;
}