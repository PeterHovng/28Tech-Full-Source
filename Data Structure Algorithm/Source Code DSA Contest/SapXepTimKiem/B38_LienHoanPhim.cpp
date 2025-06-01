#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
bool cmp(pair<int,int>a , pair<int,int> b)
{
    return a.second < b.second;
}
int main()
{
    int n ; cin >> n;
    pair<int,int>a[n];
    for(int i = 0 ; i < n;i++)
    {
        cin >> a[i].first >> a[i].second;
    }
    sort(a , a+ n , cmp);
    int res = 1 , Min = a[0].second;
    for(int i = 1 ; i < n ; i++)
    {
        if(a[i].first >= Min)
        {
            ++res;
            Min = a[i].second;
        }
    }
    cout << res;
}