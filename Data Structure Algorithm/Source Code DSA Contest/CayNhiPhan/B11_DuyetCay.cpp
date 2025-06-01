#include <bits/stdc++.h>
using namespace std;

int find(int in[] , int x , int n)
{
    for(int i = 0 ;i < n ;i++)
    {
        if(in[i] == x)
        {
            return i;
        }
    }
    return -1;
}
void posOrder(int in[] , int pre[] , int n)
{
    int root = find(in , pre[0] ,n);
    if(root != 0)
    {
        posOrder(in , pre + 1 , root); 
    }
    if(root != n - 1)
    {
        posOrder(in + root + 1 , pre + root + 1 , n - root - 1);
    }
    cout << pre[0] << " ";
}
int main()
{
    int n ; cin >> n;
    int pre[n] , in[n];
    for(int i = 0 ; i < n ; i++) cin >> pre[i];
    for(int i = 0 ; i < n ;i++) cin >> in[i];
    posOrder(in , pre , n);
}
