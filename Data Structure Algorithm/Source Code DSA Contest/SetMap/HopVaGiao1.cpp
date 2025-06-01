#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
int main()
{
    int n , m ; cin >> n >> m;
    unordered_map<int, int>cnt1 , cnt2;
    int a[n] , b[m] , Max = -MOD , Min = MOD;
    for(int &x : a)
    {
        cin >>x;
        cnt1[x]++;
        Max = max(x , Max);
        Min = min(x , Min);
    }
    for(int &x : b)
    {
        cin >>x;
        cnt2[x]++;
        Max = max(x , Max);
        Min = min(x , Min);
    }
    for(int i = Min ; i <= Max ; i++)
    {
        if(cnt1[i] > 0 && cnt2[i] > 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
    for(int i = Min ;i <= Max ; i++)
    {
        if(cnt1[i] > 0 || cnt2[i] > 0)
        {
            cout << i << " ";
        }
    }
}
