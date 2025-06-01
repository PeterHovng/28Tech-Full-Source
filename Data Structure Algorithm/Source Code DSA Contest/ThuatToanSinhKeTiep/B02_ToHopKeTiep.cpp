#include<bits/stdc++.h>
using namespace std; 

int a[100] , n , k , ok ;
void sinh()
{
    int i = k;
    while(i >= 1 && a[i] == n - k + i)
    {
        --i;
    }
    if(i == 0)
    {
        for(int i = 1 ; i <= k ; i++)
        {
            cout << i << " ";
        }
    }
    else
    {
        a[i]++;
        for(int j = i + 1 ; j <= k ; j++)
        {
            a[j] = a[j - 1] + 1;
        }
        for(int j = 1 ; j <= k ; j++)
        {
            cout << a[j] << " ";
        }
    }
}
int main(){
    cin >> n >> k;
    for(int i = 1 ; i <= k ; i++)
    {
        cin >> a[i];
    }
    sinh();
}
