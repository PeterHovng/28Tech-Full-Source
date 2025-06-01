#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int n , a[102] , check[102];
bool check1(int cnt)
{
    for(int i = 1 ; i < cnt ; i++)
    {
        if(abs(a[i] - a[i - 1]) == 1)
        {
            return  false;
        }
    }
    return true;
}
void QL(int cnt)
{
    if(cnt == n && check1(cnt))
    {
        for(int i = 0 ; i < cnt ; i++)
        {
            cout << a[i] ;
        }
        cout << endl;
    }
    for(int i = 1 ; i <= n ;i++)
    {
        if(check[i] == 0)
        {
            check[i] = 1;
            a[cnt] = i;
            QL(cnt + 1);
            check[i] = 0;
        }
    }
}

int main()
{
    cin >> n;
    QL(0);
}
