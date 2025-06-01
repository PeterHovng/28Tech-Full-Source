#include <bits/stdc++.h>
using namespace std;

int a[1001] , n , ok;

void ktao()
{
    for(int i = 1 ; i <= n ;i++)
    {
        a[i] = i;
    }
}
void sinh()
{
    int i = n - 1;
    while(i >= 1 && a[i] > a[i + 1])
    {
        --i;
    }
    if(i == 0) ok = 0;
    else
    {
        int j = n;
        while(a[i] > a[j]) --j;
        swap(a[i] , a[j]);
        reverse(a + i + 1 , a + n + 1);
    }
}
int main()
{
    cin >> n;
    int x[n + 4];
    for(int i = 1 ; i <= n ; i++) cin >> x[i];
    ktao();
    int cnt = 0;
    do
    {
        bool check = true;
        for(int i = 1 ; i <= n ;i++)
        {
            if(a[i] != x[i])
            {
                check = false;
                break;
            }
        }
        ++cnt;
        if(check)
        {
            cout << cnt ;
            return 0;
        }
    }while(next_permutation(a + 1 , a + n + 1));
    return 0;
}
