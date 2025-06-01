#include <bits/stdc++.h>
using namespace std;
int n , m , a[11][11];
void BackTrack(int &cnt , int i , int j)
{
    if(i == (n - 1) && j == (m - 1))
    {
        ++cnt;
    }
    if(i + 1 < n && a[i + 1][j]) BackTrack(cnt , i + 1 , j);
    if(j + 1 < m && a[i][j + 1]) BackTrack(cnt , i , j + 1);
}
int main()
{
    cin >> n >> m;
    for(int i = 0 ; i < n;i++)
    {
        for(int j = 0 ; j < m ; j++) cin >> a[i][j];
    }
    int cnt = 0;
    BackTrack(cnt , 0 , 0);
    cout << cnt;
}