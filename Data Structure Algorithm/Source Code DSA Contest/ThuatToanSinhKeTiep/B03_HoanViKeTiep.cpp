#include<bits/stdc++.h>
using namespace std; 

int a[1000] , n , ok;

int main(){
    cin >> n;
    for(int i = 1 ;i <= n ; i++)
    {
        cin >> a[i];
    }
    ok = 0;
    while(next_permutation(a + 1 , a + n + 1))
    {
        for(int i = 1 ; i <= n ; i++)
        {
            cout << a[i] << " ";
        }
        ok = 1;
        break;
    }
    if(!ok) 
    {
        for(int i = 1 ; i <= n ; i++)
        {
            cout << i << " ";
        }
    }
}
