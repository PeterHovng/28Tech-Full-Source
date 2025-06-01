#include <bits/stdc++.h>
using namespace std;
int n , a[12][12] , ok = 0;
void BackTrack(string s , int i , int j)
{
    if(i == (n - 1) && j == (n - 1))
    {
        cout << s << endl;
        ok = 1;
        return;
    }
    if(i + 1 < n && a[i + 1][j] == 1) BackTrack(s + "D" , i + 1 , j);
    if(j + 1 < n && a[i][j + 1] == 1) BackTrack(s + "R" , i , j + 1);
}
int main()
{
    cin >> n;
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            cin >> a[i][j];
        }
    }
    BackTrack("" , 0 , 0);
    if(!ok) cout << -1;
}