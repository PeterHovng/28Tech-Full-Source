#include <bits/stdc++.h>
using namespace std;

int a[1001] , n , ok;

void ktao()
{
    for(int i = 1 ; i <= n ; i++)
    {
        a[i] = i;
    }
}
void sinh()
{
    int i = n;
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
    cin  >> n;
    string s[n + 3];
    for(int i = 1 ;i <= n ; i++)
    {
        cin >> s[i];
    }
    sort(s + 1 , s + n + 1);
    ktao();
    do
    {
        for(int i = 1 ; i <= n ; i++)
        {
            cout << s[a[i]] << " ";
        }
        cout << endl;
    }while(next_permutation(a + 1 , a + n + 1));
    return 0;
}
