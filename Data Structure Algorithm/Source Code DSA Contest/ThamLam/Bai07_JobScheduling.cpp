#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
bool cmp(pair<int,int>a , pair<int,int>b)
{
    return a.second < b.second;
}
int main()
{
    int n ; cin >> n;
    pair<int,int>A[n];
    for(int i = 0 ; i < n ; i++)
    {
        cin >> A[i].first >> A[i].second;
    }
    sort(A , A + n , cmp);
    int ans = 1 , Min = A[0].second;
    for(int i = 1 ; i < n ; i++)
    {
        if(A[i].first > Min)
        {
            ++ans;
            Min = A[i].second;
        }
    }
    cout << ans;
}
