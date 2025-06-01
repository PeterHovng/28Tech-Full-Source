#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n , m ; cin >> n >> m;
    int arr[n + 1][n + 1];
    memset(arr , 0 , sizeof(arr));
    for(int i = 1 ; i <= m ; i++)
    {
        int a , b ; cin >> a >> b;
        arr[a][b] = 1; arr[b][a] = 1;
    }
    for(int i = 1 ; i <= n ;i++)
    {
        for(int j = 1 ; j <= n ; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
