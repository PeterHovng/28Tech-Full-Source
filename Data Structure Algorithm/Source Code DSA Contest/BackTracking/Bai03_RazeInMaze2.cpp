#include <bits/stdc++.h>
using namespace std;
int n , a[12][12] , ok = 0;
int dx[] = {1 , 0 , 0 , -1};
int dy[] = {0 , -1 , 1 , 0};
string ss = "DLRU";
void BackTrack(string s , int i , int j)
{
	a[i][j] = 0;
    if(i == (n - 1) && j == (n - 1))
    {
        cout << s << endl;
        ok = 1;
        return;
    }
    for(int k = 0 ; k < 4 ; k++)
    {
        int i1 = dx[k] + i;
        int j1 = dy[k] + j;
        if(i1 < n && j1 < n && i1 >= 0 && j1 >= 0 && a[i1][j1] == 1)
        {
            BackTrack(s + ss[k] , i1 , j1);
            a[i1][j1] = 1;
        }
    }
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