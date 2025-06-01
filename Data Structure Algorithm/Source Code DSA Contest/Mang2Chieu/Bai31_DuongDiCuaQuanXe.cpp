#include <bits/stdc++.h>
using namespace std;
int n , s , t ; 
int dx[] = {1 , 0 , -1 , 0};
int dy[] = {0 , -1 , 0 , 1};
int res = 0;
int a[100][100];
void DFS(int i , int j)
{
    a[i][j] = 1;
    ++res;
    for(int k = 0 ; k < 4 ; k++)
    {
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if(i1 < 0 || j1 < 0 || i1 >= n || j1 >= n || a[i1][j1]) continue;
        DFS(i1 , j1);
    }
}
int main()
{
    cin >> n >> s >> t;
    for(int i = 0 ; i < n ;i++) for(int j = 0 ;j < n ;j++)
    {
        cin >> a[i][j];
    }
    DFS(s - 1 , t - 1);
    cout << res;
}